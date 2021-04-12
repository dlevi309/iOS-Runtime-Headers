/*
* Generated on Monday, March 1, 2021 at 2:33:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/

#import <SymptomEvaluator/SymptomExpertSystemState.h>

@class NSDictionary;

@interface SymptomExpertSystemDiagnosingState : SymptomExpertSystemState {

	NSDictionary* _triggeringSymptom;

}

@property (nonatomic,retain) NSDictionary * triggeringSymptom;              //@synthesize triggeringSymptom=_triggeringSymptom - In the implementation block
+(id)createStateWithLabel:(id)arg1 rank:(unsigned long long)arg2 entryPreds:(id)arg3 ;
-(void)createAndPostAWDMetric;
-(NSDictionary *)triggeringSymptom;
-(void)setTriggeringSymptom:(NSDictionary *)arg1 ;
@end

