/*
* Generated on Thursday, January 14, 2021 at 2:27:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IdleTimerHosting.framework/IdleTimerHosting
*/

#import <IdleTimerHosting/IdleTimerHosting-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSArray, NSString;

@interface ITIdleTimerDescriptor : NSObject <NSCopying, BSDescriptionProviding> {

	unsigned long long _attentionMaintenanceEventMask;
	unsigned long long _attentionRecoveryEventMask;
	double _attentionSamplingPeriod;
	double _attentionSamplingStartDelay;
	NSArray* _timeouts;

}

@property (nonatomic,readonly) unsigned long long attentionMaintenanceEventMask;              //@synthesize attentionMaintenanceEventMask=_attentionMaintenanceEventMask - In the implementation block
@property (nonatomic,readonly) unsigned long long attentionRecoveryEventMask;                 //@synthesize attentionRecoveryEventMask=_attentionRecoveryEventMask - In the implementation block
@property (assign,nonatomic) double attentionSamplingPeriod;                                  //@synthesize attentionSamplingPeriod=_attentionSamplingPeriod - In the implementation block
@property (assign,nonatomic) double attentionSamplingStartDelay;                              //@synthesize attentionSamplingStartDelay=_attentionSamplingStartDelay - In the implementation block
@property (assign,nonatomic) double attentionSamplingStartBeforeFirstTimeout; 
@property (nonatomic,copy) NSArray * timeouts;                                                //@synthesize timeouts=_timeouts - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)succinctDescription;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSString *)description;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(NSArray *)timeouts;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimeouts:(NSArray *)arg1 ;
-(void)setAttentionEventMaintenanceMask:(unsigned long long)arg1 recoveryMask:(unsigned long long)arg2 ;
-(void)setAttentionSamplingPeriod:(double)arg1 ;
-(void)setAttentionSamplingStartBeforeFirstTimeout:(double)arg1 ;
-(void)setAttentionSamplingStartDelay:(double)arg1 ;
-(double)attentionSamplingStartBeforeFirstTimeout;
-(void)setAttentionEventMask:(unsigned long long)arg1 ;
-(unsigned long long)attentionMaintenanceEventMask;
-(unsigned long long)attentionRecoveryEventMask;
-(double)attentionSamplingPeriod;
-(double)attentionSamplingStartDelay;
@end

