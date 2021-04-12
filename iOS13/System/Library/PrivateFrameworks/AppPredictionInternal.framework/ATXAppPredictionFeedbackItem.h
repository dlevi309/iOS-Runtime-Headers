/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


@class NSString;

@interface ATXAppPredictionFeedbackItem : NSObject {

	float _scoreInputs[669];
	float _totalScore;
	NSString* _bundleId;

}

@property (nonatomic,readonly) NSString * bundleId;                   //@synthesize bundleId=_bundleId - In the implementation block
@property (nonatomic,readonly) float totalScore;                      //@synthesize totalScore=_totalScore - In the implementation block
@property (nonatomic,readonly) const float* scoreInputs; 
+(id)feedbackItemsForResponse:(id)arg1 ;
+(id)feedbackItemsForChunks:(id)arg1 ;
+(id)feedbackItemsForFeedbackChunk:(id)arg1 ;
-(id)init;
-(id)description;
-(NSString *)bundleId;
-(id)initWithBundleId:(id)arg1 totalScore:(float)arg2 scoreInputs:(const float*)arg3 ;
-(const float*)scoreInputs;
-(float)totalScore;
@end

