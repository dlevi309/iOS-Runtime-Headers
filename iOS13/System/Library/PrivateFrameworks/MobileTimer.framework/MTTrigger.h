/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <libobjc.A.dylib/NAEquatable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSString;

@interface MTTrigger : NSObject <NAEquatable, NSCopying, NSSecureCoding> {

	unsigned long long _triggerType;
	NSDate* _triggerDate;

}

@property (assign,nonatomic) unsigned long long triggerType;              //@synthesize triggerType=_triggerType - In the implementation block
@property (nonatomic,copy) NSDate * triggerDate;                          //@synthesize triggerDate=_triggerDate - In the implementation block
@property (nonatomic,readonly) BOOL isForSnooze; 
@property (nonatomic,readonly) BOOL isForGoToBed; 
@property (nonatomic,readonly) BOOL isForAlert; 
@property (nonatomic,readonly) BOOL isForNotification; 
@property (nonatomic,readonly) BOOL isScheduled; 
@property (nonatomic,readonly) BOOL isEvent; 
@property (nonatomic,readonly) BOOL isBedtimeRelated; 
@property (nonatomic,readonly) BOOL isWakeUpRelated; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)_stringForType:(unsigned long long)arg1 ;
+(id)triggerWithDate:(id)arg1 triggerType:(unsigned long long)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)compare:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isScheduled;
-(BOOL)isBedtimeRelated;
-(BOOL)isWakeUpRelated;
-(NSDate *)triggerDate;
-(unsigned long long)triggerType;
-(BOOL)isForSnooze;
-(BOOL)isForGoToBed;
-(BOOL)isForAlert;
-(BOOL)isForNotification;
-(id)initWithDate:(id)arg1 type:(unsigned long long)arg2 ;
-(BOOL)isEqualToTrigger:(id)arg1 ;
-(BOOL)isEvent;
-(void)setTriggerType:(unsigned long long)arg1 ;
-(void)setTriggerDate:(NSDate *)arg1 ;
@end

