/*
* Generated on Thursday, January 14, 2021 at 2:20:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setSignpostID:(unsigned long long)arg1 ;
-(unsigned long long)signpostID;
-(void)setForTesting:(BOOL)arg1 ;
-(id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3 ;
-(void)setShouldTakeKeyboardFocus:(BOOL)arg1 ;
-(NSDictionary *)payload;
-(unsigned long long)_lifecycleActionType;
-(long long)statusBarAnimation;
-(void)_setLifecycleActionType:(unsigned long long)arg1 ;
-(BOOL)disableTouchCancellationOnRotation;
-(double)execTime;
-(void)setSafeMode:(BOOL)arg1 ;
-(BOOL)isUISubclass;
-(BOOL)forTesting;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(void)setExecTime:(double)arg1 ;
-(double)userLaunchEventTime;
-(BOOL)shouldTakeKeyboardFocus;
-(void)setDisableTouchCancellationOnRotation:(BOOL)arg1 ;
-(BOOL)waitForBackgroundTaskCompletion;
-(void)setUserLaunchEventTime:(double)arg1 ;
-(void)setStatusBarAnimation:(long long)arg1 ;
-(BOOL)safeMode;
-(void)setWaitForBackgroundTaskCompletion:(BOOL)arg1 ;
@end

