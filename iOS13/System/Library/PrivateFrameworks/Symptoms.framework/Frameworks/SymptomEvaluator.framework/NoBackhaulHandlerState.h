/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/

#import <SymptomEvaluator/ExpertSystemStateCore.h>

@class NSDictionary, AWDSymptomsAdvisoryAlternateNetworkType;

@interface NoBackhaulHandlerState : ExpertSystemStateCore {

	BOOL _noPreconditions;
	NSDictionary* _entryCellPreds;
	NSDictionary* _entryWiFiPreds;
	AWDSymptomsAdvisoryAlternateNetworkType* _awdMetric;

}

@property (readonly) NSDictionary * entryCellPreds;                                  //@synthesize entryCellPreds=_entryCellPreds - In the implementation block
@property (readonly) NSDictionary * entryWiFiPreds;                                  //@synthesize entryWiFiPreds=_entryWiFiPreds - In the implementation block
@property (assign,nonatomic) BOOL noPreconditions;                                   //@synthesize noPreconditions=_noPreconditions - In the implementation block
@property (retain) AWDSymptomsAdvisoryAlternateNetworkType * awdMetric;              //@synthesize awdMetric=_awdMetric - In the implementation block
+(id)createStateWithLabel:(id)arg1 rank:(unsigned long long)arg2 entryCellPreds:(id)arg3 entryWiFiPreds:(id)arg4 ;
+(id)createAndInitializeAWDMetricForStateWithLevel:(int)arg1 activationIdentifier:(unsigned)arg2 ;
-(id)_initStateWithLabel:(id)arg1 rank:(unsigned long long)arg2 entryCellPreds:(id)arg3 entryWiFiPreds:(id)arg4 ;
-(NSDictionary *)entryCellPreds;
-(NSDictionary *)entryWiFiPreds;
-(BOOL)noPreconditions;
-(void)setNoPreconditions:(BOOL)arg1 ;
-(AWDSymptomsAdvisoryAlternateNetworkType *)awdMetric;
-(void)setAwdMetric:(AWDSymptomsAdvisoryAlternateNetworkType *)arg1 ;
@end

