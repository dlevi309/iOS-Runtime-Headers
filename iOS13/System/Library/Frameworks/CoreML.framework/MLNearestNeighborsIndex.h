/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/


@protocol MLNearestNeighborsIndex
@required
-(vector<std::__1::pair<unsigned long, float>, std::__1::allocator<std::__1::pair<unsigned long, float> > >*)findNearestNeighbors:(unsigned long long)arg1 toQueryPoint:(const vector<float, std::__1::allocator<float> >*)arg2;
-(BOOL)updateWithData:(const vector<float, std::__1::allocator<float> >*)arg1 error:(id*)arg2;
-(unsigned long long)dataPointCount;

@end

