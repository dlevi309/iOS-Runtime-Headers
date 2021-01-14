/*
* Generated on Thursday, January 14, 2021 at 2:24:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/

#import <SymptomEvaluator/SymptomExpertSystemState.h>

@class NSDictionary;

@interface SymptomExpertSystemDiagnosingState : SymptomExpertSystemState {

	NSDictionary* _triggeringSymptom;

}

@property (nonatomic,retain) NSDictionary * triggeringSymptom;              //@synthesize triggeringSymptom=_triggeringSymptom - In the implementation block
+(id)createStateWithLabel:(id)arg1 rank:(unsigned long long)arg2 entryPreds:(id)arg3 ;
-(NSDictionary *)triggeringSymptom;
-(void)setTriggeringSymptom:(NSDictionary *)arg1 ;
-(void)createAndPostAWDMetric;
@end

