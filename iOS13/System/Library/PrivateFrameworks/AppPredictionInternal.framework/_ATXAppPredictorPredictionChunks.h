/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


@class NSData;

@interface _ATXAppPredictorPredictionChunks : NSObject {

	NSData* _predictionSetChunk;
	NSData* _feedbackStateChunk;

}

@property (nonatomic,retain) NSData * predictionSetChunk;              //@synthesize predictionSetChunk=_predictionSetChunk - In the implementation block
@property (nonatomic,retain) NSData * feedbackStateChunk;              //@synthesize feedbackStateChunk=_feedbackStateChunk - In the implementation block
-(void)setFeedbackStateChunk:(NSData *)arg1 ;
-(void)setPredictionSetChunk:(NSData *)arg1 ;
-(id)chunkArray;
-(id)joinChunks;
-(NSData *)predictionSetChunk;
-(NSData *)feedbackStateChunk;
@end

