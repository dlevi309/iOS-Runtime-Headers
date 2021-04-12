/*
* Generated on Thursday, January 14, 2021 at 2:24:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setAwdMetric:(AWDSymptomsAdvisoryAlternateNetworkType *)arg1 ;
-(id)_initStateWithLabel:(id)arg1 rank:(unsigned long long)arg2 entryCellPreds:(id)arg3 entryWiFiPreds:(id)arg4 ;
-(void)setNoPreconditions:(BOOL)arg1 ;
-(BOOL)noPreconditions;
-(NSDictionary *)entryCellPreds;
-(NSDictionary *)entryWiFiPreds;
-(AWDSymptomsAdvisoryAlternateNetworkType *)awdMetric;
@end

