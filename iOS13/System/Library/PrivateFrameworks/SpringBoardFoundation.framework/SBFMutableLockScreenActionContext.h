/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/

#import <SpringBoardFoundation/SBFLockScreenActionContext.h>

@class NSString;

@interface SBFMutableLockScreenActionContext : SBFLockScreenActionContext

@property (nonatomic,retain) NSString * identifier; 
@property (nonatomic,retain) NSString * lockLabel; 
@property (nonatomic,retain) NSString * shortLockLabel; 
@property (nonatomic,copy) NSString * unlockDestination; 
@property (nonatomic,copy) id action; 
@property (assign,nonatomic) BOOL requiresUIUnlock; 
@property (assign,nonatomic) BOOL deactivateAwayController; 
@property (assign,nonatomic) BOOL canBypassPinLock; 
@property (assign,nonatomic) BOOL requiresAuthentication; 
@property (assign,nonatomic) BOOL wantsBiometricPresentation; 
@property (assign,nonatomic) BOOL confirmedNotInPocket; 
@property (assign,nonatomic) int source; 
@property (assign,nonatomic) int intent; 
@end

