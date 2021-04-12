/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
*/

#import <IdleTimerServices/ITIdleTimerConfiguration.h>

@class NSNumber;

@interface SBIdleTimerRequestConfiguration : ITIdleTimerConfiguration {

	NSNumber* _boxed_minExpirationTimeout;
	NSNumber* _boxed_maxExpirationTimeout;
	unsigned long long _precedence;

}

@property (setter=_setBoxed_minExpirationTimeout:,getter=_boxed_minExpirationTimeout,nonatomic,retain) NSNumber * boxed_minExpirationTimeout;              //@synthesize boxed_minExpirationTimeout=_boxed_minExpirationTimeout - In the implementation block
@property (setter=_setBoxed_maxExpirationTimeout:,getter=_boxed_maxExpirationTimeout,nonatomic,retain) NSNumber * boxed_maxExpirationTimeout;              //@synthesize boxed_maxExpirationTimeout=_boxed_maxExpirationTimeout - In the implementation block
@property (nonatomic,readonly) unsigned long long idleEventMask; 
@property (assign,nonatomic) unsigned long long precedence;                                                                                                //@synthesize precedence=_precedence - In the implementation block
@property (assign,nonatomic) double minExpirationTimeout; 
@property (nonatomic,readonly) BOOL hasMinExpirationTimeout; 
@property (assign,nonatomic) double maxExpirationTimeout; 
@property (nonatomic,readonly) BOOL hasMaxExpirationTimeout; 
+(id)configurationWithMinimumExpirationTimeout:(double)arg1 ;
+(id)configurationWithMaximumExpirationTimeout:(double)arg1 ;
+(id)configurationWithMinimumExpirationTimeout:(double)arg1 maximumExpirationTimeout:(double)arg2 ;
+(id)configurationWithIdleEventHandler:(id)arg1 ;
-(id)init;
-(id)description;
-(id)initWithConfiguration:(id)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)encodeWithBSXPCCoder:(id)arg1 ;
-(id)initWithBSXPCCoder:(id)arg1 ;
-(id)_boxed_minExpirationTimeout;
-(id)_boxed_maxExpirationTimeout;
-(unsigned long long)precedence;
-(void)setMinExpirationTimeout:(double)arg1 ;
-(void)setMaxExpirationTimeout:(double)arg1 ;
-(void)_setIdleEventHandler:(id)arg1 ;
-(BOOL)hasMinExpirationTimeout;
-(double)minExpirationTimeout;
-(BOOL)hasMaxExpirationTimeout;
-(double)maxExpirationTimeout;
-(unsigned long long)idleEventMask;
-(void)_setBoxed_minExpirationTimeout:(id)arg1 ;
-(void)_setBoxed_maxExpirationTimeout:(id)arg1 ;
-(void)setPrecedence:(unsigned long long)arg1 ;
@end

