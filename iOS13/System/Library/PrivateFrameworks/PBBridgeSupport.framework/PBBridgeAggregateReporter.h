/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
*/


@interface PBBridgeAggregateReporter : NSObject
+(id)descriptionForSuccessType:(unsigned long long)arg1 ;
+(id)descriptionForTimingType:(unsigned long long)arg1 ;
+(void)pushTimingForTypeNamed:(id)arg1 withValue:(double)arg2 ;
+(id)descriptionForCommTimingType:(unsigned long long)arg1 ;
+(void)activationServerRespondedAtPage:(unsigned long long)arg1 ;
+(void)incrementSuccessType:(unsigned long long)arg1 ;
+(void)pushTimingType:(unsigned long long)arg1 withValue:(double)arg2 ;
+(void)pushCommunicationTimingType:(unsigned long long)arg1 withValue:(double)arg2 ;
+(void)recordSigninEventPair:(unsigned long long)arg1 ;
+(void)recordSigninEventFollowup:(unsigned long long)arg1 ;
+(void)recordSigninEventDaily:(unsigned long long)arg1 ;
+(void)recordSigninEventPostPair:(unsigned long long)arg1 ;
@end

