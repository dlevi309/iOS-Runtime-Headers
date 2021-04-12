/*
* Generated on Thursday, January 14, 2021 at 2:24:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/


@class NSMutableDictionary;

@interface CanUseAppsCache : NSObject {

	NSMutableDictionary* cache;
	BOOL disabled;

}
+(BOOL)makeVerdictFromRationaleCode:(int)arg1 ;
-(void)disable;
-(void)enable;
-(id)init;
-(id)description;
-(id)_makeKeyFrom:(id)arg1 state:(long long)arg2 ;
-(BOOL)hasEntryFor:(id)arg1 state:(long long)arg2 rationaleCode:(int*)arg3 ;
-(void)insertEntryFor:(id)arg1 state:(long long)arg2 rationaleCode:(int)arg3 ;
@end

