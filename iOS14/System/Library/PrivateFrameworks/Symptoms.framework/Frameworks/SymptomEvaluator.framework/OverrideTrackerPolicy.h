/*
* Generated on Thursday, January 14, 2021 at 2:24:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/


@class NSMutableDictionary;

@interface OverrideTrackerPolicy : NSObject {

	NSMutableDictionary* _maxConnectionPolicyOverrides;
	NSMutableDictionary* _maxRRCTimePolicyOverrides;

}
+(id)sharedInstance;
-(id)maxConnectionPolicyForTarget:(id)arg1 ;
-(id)init;
-(BOOL)useFullActivityBitmaps;
-(id)maxRRCTimePolicyForTarget:(id)arg1 ;
@end

