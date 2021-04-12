/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


@class NSDictionary;

@interface ATXActionLOIBoost : NSObject {

	NSDictionary* _boostDictionary;

}
+(id)sharedInstance;
+(double)decayRateWithScale:(double)arg1 distance:(double)arg2 ;
-(id)initWithBoostDictionary:(id)arg1 ;
-(double)boostForActionKey:(id)arg1 ;
@end

