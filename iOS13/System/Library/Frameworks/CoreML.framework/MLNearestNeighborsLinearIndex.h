/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/

#import <CoreML/CoreML-Structs.h>
#import <libobjc.A.dylib/MLNearestNeighborsIndex.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface MLNearestNeighborsLinearIndex : NSObject <MLNearestNeighborsIndex, NSSecureCoding> {

	vector<float, std::__1::allocator<float> >* vData;
	vector<float, std::__1::allocator<float> >* vDataL2Squared;
	unsigned long long _numDataPoints;
	unsigned long long _numDimensions;

}

@property (assign,nonatomic) unsigned long long numDataPoints;              //@synthesize numDataPoints=_numDataPoints - In the implementation block
@property (assign,nonatomic) unsigned long long numDimensions;              //@synthesize numDimensions=_numDimensions - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(vector<std::__1::pair<unsigned long, float>, std::__1::allocator<std::__1::pair<unsigned long, float> > >*)findNearestNeighbors:(unsigned long long)arg1 toQueryPoint:(const vector<float, std::__1::allocator<float> >*)arg2 ;
-(BOOL)updateWithData:(const vector<float, std::__1::allocator<float> >*)arg1 error:(id*)arg2 ;
-(unsigned long long)dataPointCount;
-(id)initWithDataset:(vector<float, std::__1::allocator<float> >*)arg1 numberOfDimensions:(unsigned long long)arg2 ;
-(unsigned long long)numDataPoints;
-(void)setNumDataPoints:(unsigned long long)arg1 ;
-(unsigned long long)numDimensions;
-(void)setNumDimensions:(unsigned long long)arg1 ;
@end

