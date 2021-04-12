/*
* Generated on Thursday, January 14, 2021 at 2:26:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <WorkflowKit/WFTrigger.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDateComponents, NSArray, NSNumber;

@interface WFTimeOfDayTrigger : WFTrigger <NSSecureCoding> {

	unsigned long long _event;
	unsigned long long _timeOffset;
	NSDateComponents* _time;
	unsigned long long _mode;
	NSArray* _daysOfWeek;
	NSNumber* _dayOfMonth;

}

@property (assign,nonatomic) unsigned long long event;                   //@synthesize event=_event - In the implementation block
@property (assign,nonatomic) unsigned long long timeOffset;              //@synthesize timeOffset=_timeOffset - In the implementation block
@property (nonatomic,retain) NSDateComponents * time;                    //@synthesize time=_time - In the implementation block
@property (assign,nonatomic) unsigned long long mode;                    //@synthesize mode=_mode - In the implementation block
@property (nonatomic,copy) NSArray * daysOfWeek;                         //@synthesize daysOfWeek=_daysOfWeek - In the implementation block
@property (nonatomic,copy) NSNumber * dayOfMonth;                        //@synthesize dayOfMonth=_dayOfMonth - In the implementation block
+(id)triggerTypeIcon;
+(BOOL)supportsSecureCoding;
+(id)dateFormatter;
+(id)localizedDisplayName;
+(BOOL)isAllowedToRunAutomatically;
+(id)localizedDisplayExplanation;
+(id)localizedRecurrenceDescriptionForDaysOfWeek:(id)arg1 dayOfMonth:(id)arg2 mode:(unsigned long long)arg3 ;
+(id)localizedSunriseSunsetDescriptionForTriggerEvent:(unsigned long long)arg1 timeOffset:(unsigned long long)arg2 ;
-(id)contextStoreKeyPathForCurrentState;
-(id)contextStorePredicate;
-(unsigned)contextStoreQualityOfService;
-(NSDateComponents *)time;
-(unsigned long long)mode;
-(void)setTime:(NSDateComponents *)arg1 ;
-(id)init;
-(unsigned long long)timeOffset;
-(NSNumber *)dayOfMonth;
-(void)setTimeOffset:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setMode:(unsigned long long)arg1 ;
-(unsigned long long)event;
-(NSArray *)daysOfWeek;
-(void)setEvent:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDaysOfWeek:(NSArray *)arg1 ;
-(void)setDayOfMonth:(NSNumber *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)localizedDescriptionWithConfigurationSummary;
-(id)localizedPastTenseDescription;
-(BOOL)hasValidConfiguration;
@end

