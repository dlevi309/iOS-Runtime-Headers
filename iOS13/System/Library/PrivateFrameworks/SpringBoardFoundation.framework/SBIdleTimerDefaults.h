/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@interface SBIdleTimerDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic,readonly) double minimumLockscreenIdleTime; 
@property (nonatomic,readonly) BOOL disableAutoDim; 
@property (nonatomic,readonly) BOOL dontDimOrLockWhileConnectedToPower; 
@property (nonatomic,readonly) BOOL supportLiftToWake; 
@property (nonatomic,readonly) BOOL supportTapToWake; 
@property (nonatomic,readonly) BOOL disableAttentionAwareness; 
@property (getter=isBacklightLoggingEnabled,nonatomic,readonly) BOOL backlightLoggingEnabled; 
-(void)setMinimumLockscreenIdleTime:(double)arg1 ;
-(double)minimumLockscreenIdleTime;
-(void)setBacklightLoggingEnabled:(BOOL)arg1 ;
-(BOOL)isBacklightLoggingEnabled;
-(void)setSupportLiftToWake:(BOOL)arg1 ;
-(BOOL)supportLiftToWake;
-(void)setSupportTapToWake:(BOOL)arg1 ;
-(BOOL)supportTapToWake;
-(void)setDisableAttentionAwareness:(BOOL)arg1 ;
-(BOOL)disableAttentionAwareness;
-(void)setDontDimOrLockWhileConnectedToPower:(BOOL)arg1 ;
-(BOOL)dontDimOrLockWhileConnectedToPower;
-(void)setDisableAutoDim:(BOOL)arg1 ;
-(void)_bindAndRegisterDefaults;
-(BOOL)disableAutoDimExists;
-(BOOL)disableAutoDim;
@end

