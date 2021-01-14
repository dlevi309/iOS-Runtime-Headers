/*
* Generated on Thursday, January 14, 2021 at 2:26:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <CoverSheet/CoverSheet-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/CSBehaviorProviding.h>
#import <libobjc.A.dylib/SBFIdleTimerBehaviorProviding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CSBehavior : NSObject <BSDescriptionProviding, CSBehaviorProviding, SBFIdleTimerBehaviorProviding, NSCopying> {

	long long _idleTimerDuration;
	long long _idleTimerMode;
	long long _idleWarnMode;
	long long _scrollingStrategy;
	unsigned long long _restrictedCapabilities;
	long long _notificationBehavior;
	long long _proximityDetectionMode;

}

@property (assign,nonatomic) long long idleTimerDuration;                            //@synthesize idleTimerDuration=_idleTimerDuration - In the implementation block
@property (assign,nonatomic) long long idleTimerMode;                                //@synthesize idleTimerMode=_idleTimerMode - In the implementation block
@property (assign,nonatomic) long long idleWarnMode;                                 //@synthesize idleWarnMode=_idleWarnMode - In the implementation block
@property (assign,nonatomic) long long scrollingStrategy;                            //@synthesize scrollingStrategy=_scrollingStrategy - In the implementation block
@property (assign,nonatomic) long long notificationBehavior;                         //@synthesize notificationBehavior=_notificationBehavior - In the implementation block
@property (assign,nonatomic) unsigned long long restrictedCapabilities;              //@synthesize restrictedCapabilities=_restrictedCapabilities - In the implementation block
@property (assign,nonatomic) long long proximityDetectionMode;                       //@synthesize proximityDetectionMode=_proximityDetectionMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double customIdleExpirationTimeout; 
@property (nonatomic,readonly) double customIdleWarningTimeout; 
+(id)behavior;
+(id)behaviorForProvider:(id)arg1 ;
-(id)succinctDescription;
-(void)setProximityDetectionMode:(long long)arg1 ;
-(void)setRestrictedCapabilities:(unsigned long long)arg1 ;
-(void)removeRestrictedCapabilities:(unsigned long long)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)addRestrictedCapabilities:(unsigned long long)arg1 ;
-(long long)notificationBehavior;
-(void)conformsToCSBehaviorProviding;
-(void)setNotificationBehavior:(long long)arg1 ;
-(long long)proximityDetectionMode;
-(void)setScrollingStrategy:(long long)arg1 ;
-(void)unionBehavior:(id)arg1 ;
-(NSString *)description;
-(void)setIdleTimerMode:(long long)arg1 ;
-(long long)idleTimerDuration;
-(long long)idleTimerMode;
-(unsigned long long)hash;
-(void)reset;
-(long long)idleWarnMode;
-(BOOL)isEqualToBehavior:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(BOOL)areRestrictedCapabilities:(unsigned long long)arg1 ;
-(id)succinctDescriptionBuilder;
-(long long)scrollingStrategy;
-(void)setIdleWarnMode:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)restrictedCapabilities;
-(BOOL)isEqual:(id)arg1 ;
-(void)setIdleTimerDuration:(long long)arg1 ;
@end

