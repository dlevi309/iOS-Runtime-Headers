/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/


@class NSMutableDictionary;

@interface CanUseAppsCache : NSObject {

	NSMutableDictionary* cache;
	BOOL disabled;

}
+(BOOL)makeVerdictFromRationaleCode:(int)arg1 ;
-(id)init;
-(id)description;
-(void)disable;
-(void)enable;
-(id)_makeKeyFrom:(id)arg1 state:(long long)arg2 ;
-(BOOL)hasEntryFor:(id)arg1 state:(long long)arg2 rationaleCode:(int*)arg3 ;
-(void)insertEntryFor:(id)arg1 state:(long long)arg2 rationaleCode:(int)arg3 ;
@end

