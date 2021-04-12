/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <WorkflowKit/WFTrigger.h>

@class NSArray;

@interface WFAlarmTrigger : WFTrigger {

	long long _alarmType;
	NSArray* _alarmIDs;
	NSArray* _cachedAlarmDescriptions;
	long long _alarmState;

}

@property (assign,nonatomic) long long alarmType;                          //@synthesize alarmType=_alarmType - In the implementation block
@property (nonatomic,copy) NSArray * alarmIDs;                             //@synthesize alarmIDs=_alarmIDs - In the implementation block
@property (nonatomic,copy) NSArray * cachedAlarmDescriptions;              //@synthesize cachedAlarmDescriptions=_cachedAlarmDescriptions - In the implementation block
@property (assign,nonatomic) long long alarmState;                         //@synthesize alarmState=_alarmState - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)localizedDisplayName;
+(BOOL)isAllowedToRunAutomatically;
+(id)localizedDisplayExplanation;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)alarmType;
-(void)setAlarmType:(long long)arg1 ;
-(BOOL)hasValidConfiguration;
-(id)localizedDescriptionWithConfigurationSummary;
-(id)localizedPastTenseDescription;
-(NSArray *)alarmIDs;
-(void)setAlarmIDs:(NSArray *)arg1 ;
-(NSArray *)cachedAlarmDescriptions;
-(void)setCachedAlarmDescriptions:(NSArray *)arg1 ;
-(long long)alarmState;
-(void)setAlarmState:(long long)arg1 ;
@end

