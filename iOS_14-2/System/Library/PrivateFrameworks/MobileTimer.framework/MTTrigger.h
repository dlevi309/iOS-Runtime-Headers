/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/NAEquatable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSString;

@interface MTTrigger : NSObject <BSDescriptionProviding, NAEquatable, NSCopying, NSSecureCoding> {

	BOOL _isPastOverrideEvent;
	unsigned long long _triggerType;
	NSDate* _triggerDate;

}

@property (assign,nonatomic) unsigned long long triggerType;              //@synthesize triggerType=_triggerType - In the implementation block
@property (nonatomic,copy) NSDate * triggerDate;                          //@synthesize triggerDate=_triggerDate - In the implementation block
@property (nonatomic,readonly) BOOL isPastOverrideEvent;                  //@synthesize isPastOverrideEvent=_isPastOverrideEvent - In the implementation block
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
+(id)triggerWithDate:(id)arg1 triggerType:(unsigned long long)arg2 ;
+(id)triggerWithDate:(id)arg1 triggerType:(unsigned long long)arg2 isPastOverrideEvent:(BOOL)arg3 ;
+(id)_stringForType:(unsigned long long)arg1 ;
-(BOOL)isEvent;
-(id)succinctDescription;
-(void)setTriggerType:(unsigned long long)arg1 ;
-(long long)compare:(id)arg1 ;
-(NSDate *)triggerDate;
-(BOOL)isForAlert;
-(BOOL)isBedtimeRelated;
-(BOOL)isForSnooze;
-(BOOL)isForGoToBed;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isPastOverrideEvent;
-(id)initWithDate:(id)arg1 type:(unsigned long long)arg2 ;
-(BOOL)isEqualToTrigger:(id)arg1 ;
-(id)initWithDate:(id)arg1 type:(unsigned long long)arg2 isPastOverrideEvent:(BOOL)arg3 ;
-(NSString *)description;
-(BOOL)isScheduled;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)triggerType;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isForNotification;
-(BOOL)isWakeUpRelated;
-(BOOL)isEqual:(id)arg1 ;
-(void)setTriggerDate:(NSDate *)arg1 ;
@end

