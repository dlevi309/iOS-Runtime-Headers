/*
* Generated on Thursday, January 14, 2021 at 2:22:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/

#import <CoreML/CoreML-Structs.h>
#import <libobjc.A.dylib/MLBatchProvider.h>

@protocol MLBatchProvider;
@interface MLShufflingBatchProvider : NSObject <MLBatchProvider> {

	vector<long, std::__1::allocator<long> >* indices;
	linear_congruential_engine<unsigned int, 48271, 0, 2147483647> randomNumberGenerator;
	id<MLBatchProvider> _batchProvider;

}

@property (retain) id<MLBatchProvider> batchProvider;              //@synthesize batchProvider=_batchProvider - In the implementation block
@property (nonatomic,readonly) long long count; 
-(id)featuresAtIndex:(long long)arg1 ;
-(id<MLBatchProvider>)batchProvider;
-(void)shuffle;
-(long long)count;
-(id)initWithBatchProvider:(id)arg1 seed:(id)arg2 ;
-(void)setBatchProvider:(id<MLBatchProvider>)arg1 ;
@end

