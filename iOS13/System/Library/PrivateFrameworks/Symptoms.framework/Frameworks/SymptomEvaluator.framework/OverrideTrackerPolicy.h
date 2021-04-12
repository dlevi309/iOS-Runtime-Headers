/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/


@class NSMutableDictionary;

@interface OverrideTrackerPolicy : NSObject {

	NSMutableDictionary* _maxConnectionPolicyOverrides;
	NSMutableDictionary* _maxRRCTimePolicyOverrides;

}
+(id)sharedInstance;
-(id)init;
-(BOOL)useFullActivityBitmaps;
-(id)maxConnectionPolicyForTarget:(id)arg1 ;
-(id)maxRRCTimePolicyForTarget:(id)arg1 ;
@end

