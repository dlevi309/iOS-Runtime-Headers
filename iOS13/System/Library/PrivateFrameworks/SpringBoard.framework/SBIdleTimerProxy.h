/*
* Generated on Monday, March 1, 2021 at 2:35:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)reset;
-(BOOL)isDisabled;
-(void)setActivated:(BOOL)arg1 ;
-(BOOL)isActivated;
-(id)initWithIdleTimerSource:(id)arg1 ;
-(id<SBIdleTimer>)sourceTimer;
-(void)idleTimerDidRefresh:(id)arg1 ;
-(void)idleTimerDidExpire:(id)arg1 ;
-(void)idleTimerDidResetForUserAttention:(id)arg1 ;
-(void)idleTimerDidWarn:(id)arg1 ;
-(void)setSourceTimer:(id<SBIdleTimer>)arg1 ;
-(void)_logExpirationTimeout:(double)arg1 ;
@end

