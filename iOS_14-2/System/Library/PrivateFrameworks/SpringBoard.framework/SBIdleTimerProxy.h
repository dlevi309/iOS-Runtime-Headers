/*
* Generated on Thursday, January 14, 2021 at 2:25:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBIdleTimerBase.h>
#import <libobjc.A.dylib/SBIdleTimerObserving.h>

@protocol SBIdleTimer;
@class NSString;

@interface SBIdleTimerProxy : SBIdleTimerBase <SBIdleTimerObserving> {

	id<SBIdleTimer> _sourceTimer;

}

@property (nonatomic,retain) id<SBIdleTimer> sourceTimer;              //@synthesize sourceTimer=_sourceTimer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)disabledIdleTimerProxy;
-(void)idleTimerDidResetForUserAttention:(id)arg1 ;
-(void)_logExpirationTimeout:(double)arg1 ;
-(void)setSourceTimer:(id<SBIdleTimer>)arg1 ;
-(void)idleTimerDidRefresh:(id)arg1 ;
-(void)setActivated:(BOOL)arg1 ;
-(BOOL)isDisabled;
-(id)initWithIdleTimerSource:(id)arg1 ;
-(BOOL)isActivated;
-(id<SBIdleTimer>)sourceTimer;
-(void)reset;
-(void)idleTimerDidExpire:(id)arg1 ;
-(void)idleTimerDidWarn:(id)arg1 ;
@end

