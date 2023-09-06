import Foundation
//
// Function to generate an array of 200,000 random integers
func generateRandomArray(count: Int) -> [Int] {
    var randomArray = [Int]()
    for _ in 0..<count {
        randomArray.append(Int.random(in: 1...200000))
    }
    return randomArray
}

// Filter and sort in decreasing order
func filterAndSort(arr: [Int]) -> [Int] {
    let startTime = DispatchTime.now()

   // let filteredArray = arr.filter { $0 % 2 == 0 } // Example filter condition

    let sortedArray = arr.sorted(by: >) // Sort in decreasing order

    let endTime = DispatchTime.now()
    let nanoTime = endTime.uptimeNanoseconds - startTime.uptimeNanoseconds
    let elapsedTime = Double(nanoTime) / 1_000

    print("(Swift)Execution Time: \(elapsedTime) microseconds")

    return sortedArray
}

let randomArray = generateRandomArray(count: 200000)

let resultArray = filterAndSort(arr: randomArray)


_ = testWrapper(randomArray)
