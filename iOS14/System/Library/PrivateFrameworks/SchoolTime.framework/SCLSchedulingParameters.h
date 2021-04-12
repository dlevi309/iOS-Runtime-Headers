/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SchoolTime.framework/SchoolTime
*/

#import <SchoolTime/SchoolTime-Structs.h>
#import <libobjc.A.dylib/SCLSchedulingParameters.h>

@protocol SCLSchedulingParameters <NSObject>
@required
-(void)setCalendar:(id)arg1;
-(void)setScheduleSettings:(id)arg1;
-(void)setEvaluationDate:(id)arg1;
-(void)setActivationSetting:(unsigned long long)arg1;
-(void)setSuppressed:(BOOL)arg1;

@end

#import <libobjc.A.dylib/NSCopying.h>

@class NSCalendar, NSDate, SCLScheduleSettings, NSString;

@interface SCLSchedulingParameters : NSObject <SCLSchedulingParameters, NSCopying> {

	BOOL _suppressed;
	NSCalendar* _calendar;
	NSDate* _evaluationDate;
	SCLScheduleSettings* _scheduleSettings;
	unsigned long long _activationSetting;

}

@property (nonatomic,copy) NSCalendar * calendar;                               //@synthesize calendar=_calendar - In the implementation block
@property (nonatomic,copy) NSDate * evaluationDate;                             //@synthesize evaluationDate=_evaluationDate - In the implementation block
@property (nonatomic,copy) SCLScheduleSettings * scheduleSettings;              //@synthesize scheduleSettings=_scheduleSettings - In the implementation block
@property (assign,getter=isSuppressed,nonatomic) BOOL suppressed;               //@synthesize suppressed=_suppressed - In the implementation block
@property (assign,nonatomic) unsigned long long activationSetting;              //@synthesize activationSetting=_activationSetting - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCalendar:(NSCalendar *)arg1 ;
-(NSCalendar *)calendar;
-(BOOL)isSuppressed;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SCLScheduleSettings *)scheduleSettings;
-(void)setScheduleSettings:(SCLScheduleSettings *)arg1 ;
-(NSDate *)evaluationDate;
-(void)setEvaluationDate:(NSDate *)arg1 ;
-(unsigned long long)activationSetting;
-(void)setActivationSetting:(unsigned long long)arg1 ;
-(void)setSuppressed:(BOOL)arg1 ;
@end

