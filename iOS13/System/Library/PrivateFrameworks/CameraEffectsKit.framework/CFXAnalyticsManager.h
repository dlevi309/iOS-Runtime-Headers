/*
* Generated on Monday, March 1, 2021 at 2:34:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


@protocol OS_dispatch_queue;
@class NSMutableArray, NSObject;

@interface CFXAnalyticsManager : NSObject {

	NSMutableArray* _analyticsDurationData;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSMutableArray * analyticsDurationData;              //@synthesize analyticsDurationData=_analyticsDurationData - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                  //@synthesize queue=_queue - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)trackEventWithName:(id)arg1 ;
-(void)trackFilterWithEffectId:(id)arg1 ;
-(void)trackAnimojiWithEffectId:(id)arg1 ;
-(void)trackShapeWithEffectId:(id)arg1 ;
-(void)trackLabelWithEffectId:(id)arg1 ;
-(void)trackMessagesStickerWithEffectId:(id)arg1 ;
-(void)trackEmojiStickerWithEffectId:(id)arg1 ;
-(void)trackMediaSentWithAnimoji:(BOOL)arg1 video:(BOOL)arg2 frontCamera:(BOOL)arg3 filterCount:(unsigned long long)arg4 labelCount:(unsigned long long)arg5 messagesStickerCount:(unsigned long long)arg6 shapeCount:(unsigned long long)arg7 emojiStickerCount:(unsigned long long)arg8 ;
-(BOOL)checkIfEventExistsWithName:(id)arg1 ;
-(void)persistAnalyticsDataWithEventName:(id)arg1 value:(double)arg2 ;
-(unsigned long long)roundWithNumber:(unsigned long long)arg1 ;
-(id)CFX_composedAnalyticsKeyWithAnimoji:(BOOL)arg1 video:(BOOL)arg2 frontCamera:(BOOL)arg3 effectType:(id)arg4 ;
-(id)appendAppbundleWithEvent:(id)arg1 ;
-(NSMutableArray *)analyticsDurationData;
-(id)dictionaryWithEventName:(id)arg1 value:(double)arg2 ;
-(BOOL)isIncrementScalar:(id)arg1 ;
-(BOOL)isDistribution:(id)arg1 ;
-(void)trackEventWithName:(id)arg1 count:(unsigned long long)arg2 ;
-(void)startTrackingTimeIntervalEventWithName:(id)arg1 ;
-(void)stopTrackingTimeIntervalEventWithName:(id)arg1 ;
-(void)setAnalyticsDurationData:(NSMutableArray *)arg1 ;
@end

