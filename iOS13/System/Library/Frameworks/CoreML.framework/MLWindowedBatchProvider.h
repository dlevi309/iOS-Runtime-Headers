/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/

#import <libobjc.A.dylib/MLBatchProvider.h>

@protocol MLBatchProvider;
@interface MLWindowedBatchProvider : NSObject <MLBatchProvider> {

	id<MLBatchProvider> _fullBatch;
	long long _startIndex;
	long long _windowLength;

}

@property (nonatomic,retain) id<MLBatchProvider> fullBatch;              //@synthesize fullBatch=_fullBatch - In the implementation block
@property (assign,nonatomic) long long startIndex;                       //@synthesize startIndex=_startIndex - In the implementation block
@property (assign,nonatomic) long long windowLength;                     //@synthesize windowLength=_windowLength - In the implementation block
@property (nonatomic,readonly) long long count; 
-(long long)count;
-(id)featuresAtIndex:(long long)arg1 ;
-(id)initWithBatch:(id)arg1 startIndex:(long long)arg2 windowLength:(long long)arg3 error:(id*)arg4 ;
-(id<MLBatchProvider>)fullBatch;
-(void)setFullBatch:(id<MLBatchProvider>)arg1 ;
-(long long)startIndex;
-(void)setStartIndex:(long long)arg1 ;
-(long long)windowLength;
-(void)setWindowLength:(long long)arg1 ;
@end

