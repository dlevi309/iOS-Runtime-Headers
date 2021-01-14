/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(SBLockOverlayViewController *)viewController;
-(id)activationBlock;
-(unsigned long long)priority;
-(void)setActivationBlock:(id)arg1 ;
-(id)initWithOverlayViewController:(id)arg1 priority:(unsigned long long)arg2 ;
-(id)deactivationBlock;
-(void)setDeactivationBlock:(id)arg1 ;
@end

