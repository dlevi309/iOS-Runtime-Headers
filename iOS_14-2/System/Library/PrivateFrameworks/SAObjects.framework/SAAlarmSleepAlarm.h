/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAAlarmObject.h>

@class NSNumber;

@interface SAAlarmSleepAlarm : SAAlarmObject

@property (nonatomic,copy) NSNumber * bedtimeHour; 
@property (nonatomic,copy) NSNumber * bedtimeMinute; 
@property (nonatomic,copy) NSNumber * isFiringNext; 
@property (nonatomic,copy) NSNumber * isOverride; 
+(id)sleepAlarmWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSNumber *)bedtimeHour;
-(NSNumber *)isFiringNext;
-(void)setIsFiringNext:(NSNumber *)arg1 ;
-(void)setBedtimeMinute:(NSNumber *)arg1 ;
-(void)setBedtimeHour:(NSNumber *)arg1 ;
-(NSNumber *)bedtimeMinute;
-(NSNumber *)isOverride;
-(void)setIsOverride:(NSNumber *)arg1 ;
@end

