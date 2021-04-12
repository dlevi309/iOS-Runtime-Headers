/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <FrontBoardServices/FBSSceneTransitionContext.h>

@class NSDictionary;

@interface UIApplicationSceneTransitionContext : FBSSceneTransitionContext

@property (assign,setter=_setLifecycleActionType:,getter=_lifecycleActionType,nonatomic) unsigned long long lifecycleActionType; 
@property (nonatomic,retain) NSDictionary * payload; 
@property (assign,nonatomic) BOOL forTesting; 
@property (assign,nonatomic) BOOL safeMode; 
@property (assign,nonatomic) double userLaunchEventTime; 
@property (assign,nonatomic) double execTime; 
@property (assign,nonatomic) unsigned long long signpostID; 
@property (assign,nonatomic) BOOL shouldTakeKeyboardFocus; 
@property (assign,nonatomic) BOOL waitForBackgroundTaskCompletion; 
@property (assign,nonatomic) long long statusBarAnimation; 
@property (assign,nonatomic) BOOL disableTouchCancellationOnRotation; 
-(void)setPayload:(NSDictionary *)arg1 ;
-(NSDictionary *)payload;
-(unsigned long long)signpostID;
-(void)setSignpostID:(unsigned long long)arg1 ;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3 ;
-(BOOL)isUISubclass;
-(void)setStatusBarAnimation:(long long)arg1 ;
-(BOOL)forTesting;
-(void)setForTesting:(BOOL)arg1 ;
-(BOOL)safeMode;
-(void)setSafeMode:(BOOL)arg1 ;
-(double)userLaunchEventTime;
-(void)setUserLaunchEventTime:(double)arg1 ;
-(double)execTime;
-(void)setExecTime:(double)arg1 ;
-(BOOL)shouldTakeKeyboardFocus;
-(void)setShouldTakeKeyboardFocus:(BOOL)arg1 ;
-(BOOL)waitForBackgroundTaskCompletion;
-(void)setWaitForBackgroundTaskCompletion:(BOOL)arg1 ;
-(long long)statusBarAnimation;
-(BOOL)disableTouchCancellationOnRotation;
-(void)setDisableTouchCancellationOnRotation:(BOOL)arg1 ;
-(void)_setLifecycleActionType:(unsigned long long)arg1 ;
-(unsigned long long)_lifecycleActionType;
@end

