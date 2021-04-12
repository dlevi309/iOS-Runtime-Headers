/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBSuspendedUnderLockManagerDelegate;
@interface SBSuspendedUnderLockManager : NSObject {

	id<SBSuspendedUnderLockManagerDelegate> _delegate;
	BOOL _suspendedUnderLock;

}

@property (assign,nonatomic,__weak) id<SBSuspendedUnderLockManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isSuspendedUnderLock,nonatomic) BOOL suspendedUnderLock;                  //@synthesize suspendedUnderLock=_suspendedUnderLock - In the implementation block
-(id<SBSuspendedUnderLockManagerDelegate>)delegate;
-(void)setDelegate:(id<SBSuspendedUnderLockManagerDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(BOOL)isSuspendedUnderLock;
-(void)setSuspendedUnderLock:(BOOL)arg1 ;
-(void)interceptUpdateForScene:(id)arg1 withNewSettings:(id)arg2 ;
-(BOOL)_sceneShouldBeBackgroundUnderLockWithSceneSettings:(id)arg1 ;
@end

