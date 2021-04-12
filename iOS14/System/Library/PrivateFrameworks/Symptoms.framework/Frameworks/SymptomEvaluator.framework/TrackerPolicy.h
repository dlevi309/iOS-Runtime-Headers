/*
* Generated on Thursday, January 14, 2021 at 2:24:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/


#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
@class FlowClassification;

@interface TrackerPolicy : NSObject {

	SCD_Struct_Tr18 _classMap[12];
	SCD_Struct_Tr18 _mgmtFlagsMap[4];
	unsigned _numClassMaps;
	unsigned _numMgmtFlagsMaps;
	FlowClassification* _defaultClassification;
	unsigned long long _maximumConnectionsPerHour;

}

@property (assign) unsigned numClassMaps;                                     //@synthesize numClassMaps=_numClassMaps - In the implementation block
@property (assign) unsigned numMgmtFlagsMaps;                                 //@synthesize numMgmtFlagsMaps=_numMgmtFlagsMaps - In the implementation block
@property (retain) FlowClassification * defaultClassification;                //@synthesize defaultClassification=_defaultClassification - In the implementation block
@property (assign) unsigned long long maximumConnectionsPerHour;              //@synthesize maximumConnectionsPerHour=_maximumConnectionsPerHour - In the implementation block
+(void)initialize;
+(id)preferredInstance:(id)arg1 ;
-(int)configureInstance:(id)arg1 ;
-(id)init;
-(void)setNumClassMaps:(unsigned)arg1 ;
-(void)setNumMgmtFlagsMaps:(unsigned)arg1 ;
-(unsigned)numClassMaps;
-(unsigned)numMgmtFlagsMaps;
-(id)description;
-(FlowClassification *)defaultClassification;
-(void)setDefaultClassification:(FlowClassification *)arg1 ;
-(id)nonDefaultFlowClassificationFor:(id)arg1 ;
-(void)addClassification:(id)arg1 forTrafficMgmtFlags:(unsigned)arg2 ;
-(id)flowClassificationFor:(id)arg1 ;
-(void)addClassification:(id)arg1 forTrafficClass:(unsigned)arg2 ;
-(void)setMaximumConnectionsPerHour:(unsigned long long)arg1 ;
-(unsigned long long)maximumConnectionsPerHour;
@end

