/*
* Generated on Monday, March 1, 2021 at 2:34:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreNameParser.framework/CoreNameParser
*/


#import <CoreNameParser/CoreNameParser-Structs.h>
@class NPNameComponentsData;

@interface NPHMMClassifier : NSObject {

	unsigned long long _totalGivenNamesCount;
	unsigned long long _totalFamilyNamesCount;
	unsigned long long _uniqueGivenNamesCount;
	unsigned long long _uniqueFamilyNamesCount;
	NPNameComponentsData* _nameComponentsData;
	SCD_Struct_NP2 _stateProbabilities;

}

@property (assign) SCD_Struct_NP3 stateProbabilities;              //@synthesize stateProbabilities=_stateProbabilities - In the implementation block
-(void)dealloc;
-(unsigned long long)genderMajorityForGivenName:(id)arg1 ;
-(id)initWithHMMProbabilities:(SCD_Struct_NP3)arg1 nameComponentsDate:(id)arg2 ;
-(id)hiddenStatesFromObservationSequence:(id)arg1 ;
-(CFBurstTrieRef)nameFrequencyTrieRef;
-(unsigned long long)frequencyForName:(id)arg1 type:(unsigned long long)arg2 ;
-(void)setStateProbabilities:(SCD_Struct_NP3)arg1 ;
-(unsigned long long)extractMetricForType:(unsigned long long)arg1 ;
-(unsigned long long)payloadForName:(id)arg1 type:(unsigned long long)arg2 ;
-(BOOL)isInitial:(id)arg1 ;
-(BOOL)isGivenNameAbbreviation:(id)arg1 ;
-(id)candidatesBasedOnFormatSequence:(id)arg1 ;
-(id)candidatesBasedOnCommaDelimiterIndex:(unsigned long long)arg1 sequenceSize:(unsigned long long)arg2 ;
-(BOOL)formCompoundGivenName:(id)arg1 ;
-(BOOL)formCompoundFamilyName:(id)arg1 ;
-(BOOL)isParticle:(id)arg1 ;
-(id)candidatesOfSize:(unsigned long long)arg1 constraints:(unsigned long long)arg2 compoundsConstraints:(id)arg3 labelsContraints:(id)arg4 ;
-(id)probabilityForHiddenSequence:(id)arg1 knowingObservationSequence:(id)arg2 boost:(unsigned long long)arg3 ;
-(BOOL)isCoupleName:(id)arg1 ;
-(BOOL)isLinkingToken:(id)arg1 ;
-(BOOL)validSequence:(id)arg1 compoundsConstraints:(id)arg2 labelsConstraints:(id)arg3 ;
-(double)startProbability:(id)arg1 ;
-(double)stateTransitionProbabilityFrom:(id)arg1 to:(id)arg2 ;
-(double)emissionProbability:(id)arg1 hiddenState:(unsigned long long)arg2 isOOV:(BOOL*)arg3 ;
-(SCD_Struct_NP3)stateProbabilities;
-(id)compoundsFromName:(id)arg1 ;
-(id)compoundsFromName:(id)arg1 includeSpaceAsDelimiter:(BOOL)arg2 ;
@end

