/*
* Generated on Thursday, January 14, 2021 at 2:26:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <WorkflowKit/WFTrigger.h>

@interface WFPredictedLocationTransitionTrigger : WFTrigger {

	unsigned long long _destinationType;
	unsigned long long _minutesBefore;

}

@property (assign,nonatomic) unsigned long long destinationType;              //@synthesize destinationType=_destinationType - In the implementation block
@property (assign,nonatomic) unsigned long long minutesBefore;                //@synthesize minutesBefore=_minutesBefore - In the implementation block
+(id)triggerTypeIcon;
+(BOOL)supportsSecureCoding;
+(id)localizedDisplayName;
+(id)localizedDisplayExplanation;
-(double)timeIntervalUpperBound;
-(double)timeIntervalLowerBound;
-(id)contextStoreKeyPathForCurrentState;
-(id)contextStorePredicate;
-(unsigned)contextStoreQualityOfService;
-(unsigned long long)destinationType;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDestinationType:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)localizedDescriptionWithConfigurationSummary;
-(unsigned long long)minutesBefore;
-(id)localizedPastTenseDescription;
-(BOOL)hasValidConfiguration;
-(void)setMinutesBefore:(unsigned long long)arg1 ;
@end

