/*
* Generated on Thursday, January 14, 2021 at 2:25:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBInitialRestartState.h>

@class SBBootDefaults;

@interface SBMutableInitialRestartState : SBInitialRestartState

@property (assign,getter=isAuthenticated,nonatomic) BOOL authenticated; 
@property (assign,getter=isInLostMode,nonatomic) BOOL inLostMode; 
@property (assign,getter=isBlocked,nonatomic) BOOL blocked; 
@property (assign,nonatomic) BOOL requiresSetup; 
@property (assign,nonatomic) BOOL hasPasscodeSet; 
@property (assign,nonatomic) BOOL shouldNeverLock; 
@property (assign,getter=isLoginSession,nonatomic) BOOL loginSession; 
@property (nonatomic,retain) SBBootDefaults * bootDefaults; 
@property (assign,getter=isForSimulator,nonatomic) BOOL forSimulator; 
@property (assign,getter=homeButtonType,nonatomic) long long homeButtonType; 
@end

