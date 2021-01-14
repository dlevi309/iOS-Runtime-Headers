/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <libobjc.A.dylib/MTScheduleable.h>
#import <libobjc.A.dylib/MTDictionarySerializable.h>
#import <libobjc.A.dylib/MTTimerIntentSupport.h>
#import <libobjc.A.dylib/MTSerializable.h>
#import <libobjc.A.dylib/NAEquatable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol MTTimerTime;
@class NSUUID, NSDate, NSString, NSDictionary, MTSound, NSURL;

@interface MTTimer : NSObject <MTScheduleable, MTDictionarySerializable, MTTimerIntentSupport, MTSerializable, NAEquatable, NSCopying, NSMutableCopying, NSSecureCoding> {

	NSUUID* _timerID;
	unsigned long long _state;
	double _duration;
	NSDate* _firedDate;
	NSDate* _lastModifiedDate;
	NSDate* _dismissedDate;
	NSString* _title;
	MTSound* _sound;
	id<MTTimerTime> _fireTime;
	NSDictionary* _siriContext;
	/*^block*/id _currentDateProvider;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * timerID; 
@property (nonatomic,readonly) unsigned long long state; 
@property (nonatomic,readonly) double duration; 
@property (nonatomic,readonly) double remainingTime; 
@property (nonatomic,readonly) NSDate * lastModifiedDate; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSDictionary * siriContext; 
@property (nonatomic,readonly) long long type; 
@property (nonatomic,copy) id<MTTimerTime> fireTime;                     //@synthesize fireTime=_fireTime - In the implementation block
@property (assign,nonatomic) unsigned long long state;                   //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) double duration;                            //@synthesize duration=_duration - In the implementation block
@property (nonatomic,copy) NSString * title;                             //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) MTSound * sound;                              //@synthesize sound=_sound - In the implementation block
@property (nonatomic,copy) NSDictionary * siriContext;                   //@synthesize siriContext=_siriContext - In the implementation block
@property (nonatomic,copy) NSDate * firedDate;                           //@synthesize firedDate=_firedDate - In the implementation block
@property (nonatomic,copy) NSDate * lastModifiedDate;                    //@synthesize lastModifiedDate=_lastModifiedDate - In the implementation block
@property (nonatomic,copy) NSDate * dismissedDate;                       //@synthesize dismissedDate=_dismissedDate - In the implementation block
@property (nonatomic,copy) id currentDateProvider;                       //@synthesize currentDateProvider=_currentDateProvider - In the implementation block
@property (nonatomic,readonly) NSString * timerIDString; 
@property (nonatomic,readonly) NSDate * fireDate; 
@property (nonatomic,readonly) NSUUID * timerID;                         //@synthesize timerID=_timerID - In the implementation block
@property (nonatomic,readonly) NSURL * timerURL; 
@property (getter=isFiring,nonatomic,readonly) BOOL firing; 
@property (nonatomic,readonly) NSString * displayTitle; 
@property (nonatomic,readonly) BOOL hasDefaultTitle; 
+(BOOL)supportsSecureCoding;
+(id)_timerTimeForState:(unsigned long long)arg1 remainingTime:(double)arg2 currentDateProvider:(/*^block*/id)arg3 ;
+(id)currentTimerFromTimers:(id)arg1 ;
+(id)descriptionForState:(unsigned long long)arg1 ;
+(BOOL)stateChangeIsAllowableFromState:(unsigned long long)arg1 toState:(unsigned long long)arg2 ;
-(NSDate *)firedDate;
-(BOOL)isFiring;
-(id)nextTrigger;
-(NSDate *)fireDate;
-(MTSound *)sound;
-(BOOL)isEqualIgnoringLastModifiedDate:(id)arg1 ;
-(id)initFromDeserializer:(id)arg1 ;
-(void)setFiredDate:(NSDate *)arg1 ;
-(long long)compare:(id)arg1 ;
-(id)upcomingTriggersAfterDate:(id)arg1 ;
-(NSDate *)dismissedDate;
-(id)nextTriggerAfterDate:(id)arg1 ;
-(void)setDuration:(double)arg1 ;
-(id)initWithState:(unsigned long long)arg1 duration:(double)arg2 currentDateProvider:(/*^block*/id)arg3 ;
-(void)setCurrentDateProvider:(id)arg1 ;
-(void)setSound:(MTSound *)arg1 ;
-(double)remainingTime;
-(id)_initCommon;
-(BOOL)isCurrentTimer;
-(void)setDismissedDate:(NSDate *)arg1 ;
-(NSUUID *)timerID;
-(void)setFiring:(BOOL)arg1 ;
-(id)timerByUpdatingWithState:(unsigned long long)arg1 ;
-(BOOL)shouldBeScheduled;
-(id<MTTimerTime>)fireTime;
-(void)setFireTime:(id<MTTimerTime>)arg1 ;
-(void)serializeWithSerializer:(id)arg1 ;
-(void)_copyStateOntoTimer:(id)arg1 ;
-(NSDate *)lastModifiedDate;
-(NSDictionary *)siriContext;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)timerIDString;
-(BOOL)_isEqualToTimer:(id)arg1 checkLastModified:(BOOL)arg2 ;
-(id)currentDateProvider;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(BOOL)hasDefaultTitle;
-(NSString *)displayTitle;
-(BOOL)isEqualToTimer:(id)arg1 ;
-(NSString *)description;
-(void)setLastModifiedDate:(NSDate *)arg1 ;
-(NSURL *)timerURL;
-(void)_setDuration:(double)arg1 ;
-(long long)type;
-(void)setState:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)state;
-(id)identifier;
-(id)timerByRestarting;
-(double)duration;
-(void)setSiriContext:(NSDictionary *)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithState:(unsigned long long)arg1 duration:(double)arg2 ;
@end

