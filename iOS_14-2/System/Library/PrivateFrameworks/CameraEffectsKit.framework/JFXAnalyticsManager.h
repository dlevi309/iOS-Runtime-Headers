/*
* Generated on Thursday, January 14, 2021 at 2:27:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


@interface JFXAnalyticsManager : NSObject
+(id)sharedInstance;
+(id)allIncrementScalarEvents;
+(id)bundleForAnalytics;
-(id)init;
-(void)trackEventWithName:(id)arg1 ;
-(BOOL)checkIfEventExistsWithName:(id)arg1 ;
-(id)fullKeyFromEvent:(id)arg1 ;
-(void)trackKey:(id)arg1 withCount:(unsigned long long)arg2 ;
-(void)trackKey:(id)arg1 withPayload:(id)arg2 ;
-(id)dictionaryWithEventName:(id)arg1 value:(double)arg2 ;
-(BOOL)isIncrementScalar:(id)arg1 ;
@end

