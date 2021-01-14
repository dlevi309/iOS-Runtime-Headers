/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBSuspendedUnderLockManagerDelegate;
@class FBWorkspaceEventQueue;

@interface SBSuspendedUnderLockManager : NSObject {

	id<SBSuspendedUnderLockManagerDelegate> _delegate;
	FBWorkspaceEventQueue* _eventQueue;
	BOOL _suspendedUnderLock;
	BOOL _eventQueue_suspendedUnderLock;

}

@property (assign,nonatomic,__weak) id<SBSuspendedUnderLockManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isSuspendedUnderLock,nonatomic) BOOL suspendedUnderLock;                  //@synthesize suspendedUnderLock=_suspendedUnderLock - In the implementation block
-(BOOL)isSuspendedUnderLock;
-(id<SBSuspendedUnderLockManagerDelegate>)delegate;
-(BOOL)_shouldBeBackgroundUnderLockForScene:(id)arg1 withSettings:(id)arg2 ;
-(id)initWithDelegate:(id)arg1 eventQueue:(id)arg2 ;
-(void)setSuspendedUnderLock:(BOOL)arg1 ;
-(void)setDelegate:(id<SBSuspendedUnderLockManagerDelegate>)arg1 ;
-(void)interceptUpdateForScene:(id)arg1 withNewSettings:(id)arg2 ;
-(void)setSuspendedUnderLock:(BOOL)arg1 alongsideWillChangeBlock:(/*^block*/id)arg2 alongsideDidChangeBlock:(/*^block*/id)arg3 ;
@end

