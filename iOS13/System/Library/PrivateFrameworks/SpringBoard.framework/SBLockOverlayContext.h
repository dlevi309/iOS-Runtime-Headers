/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@class SBLockOverlayViewController;

@interface SBLockOverlayContext : NSObject {

	SBLockOverlayViewController* _viewController;
	unsigned long long _priority;
	/*^block*/id _activationBlock;
	/*^block*/id _deactivationBlock;

}

@property (nonatomic,readonly) SBLockOverlayViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,readonly) unsigned long long priority;                               //@synthesize priority=_priority - In the implementation block
@property (nonatomic,copy) id activationBlock;                                            //@synthesize activationBlock=_activationBlock - In the implementation block
@property (nonatomic,copy) id deactivationBlock;                                          //@synthesize deactivationBlock=_deactivationBlock - In the implementation block
-(unsigned long long)priority;
-(SBLockOverlayViewController *)viewController;
-(id)initWithOverlayViewController:(id)arg1 priority:(unsigned long long)arg2 ;
-(id)activationBlock;
-(void)setActivationBlock:(id)arg1 ;
-(id)deactivationBlock;
-(void)setDeactivationBlock:(id)arg1 ;
@end

