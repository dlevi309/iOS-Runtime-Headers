/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(BOOL)supportsSecureCoding;
+(id)localizedDisplayName;
+(id)localizedDisplayExplanation;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)destinationType;
-(void)setDestinationType:(unsigned long long)arg1 ;
-(BOOL)hasValidConfiguration;
-(id)localizedDescriptionWithConfigurationSummary;
-(id)localizedPastTenseDescription;
-(unsigned long long)minutesBefore;
-(void)setMinutesBefore:(unsigned long long)arg1 ;
@end

