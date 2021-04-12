/*
* Generated on Thursday, January 14, 2021 at 2:26:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


@protocol CAMViewfinderTransitionable;
@class CAMViewfinderOpenAndCloseTransition, CAMViewfinderFlipTransition;

@interface CAMViewfinderTransitionController : NSObject {

	id<CAMViewfinderTransitionable> _target;
	CAMViewfinderOpenAndCloseTransition* __openAndCloseTransition;
	CAMViewfinderFlipTransition* __flipTransition;

}

@property (setter=_setOpenAndCloseTransition:,nonatomic,retain) CAMViewfinderOpenAndCloseTransition * _openAndCloseTransition;              //@synthesize _openAndCloseTransition=__openAndCloseTransition - In the implementation block
@property (setter=_setFlipTransition:,nonatomic,retain) CAMViewfinderFlipTransition * _flipTransition;                                      //@synthesize _flipTransition=__flipTransition - In the implementation block
@property (assign,nonatomic,__weak) id<CAMViewfinderTransitionable> target;                                                                 //@synthesize target=_target - In the implementation block
-(void)setTarget:(id<CAMViewfinderTransitionable>)arg1 ;
-(void)closeWithBlur:(BOOL)arg1 animated:(BOOL)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)openForReason:(long long)arg1 animated:(BOOL)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(CAMViewfinderOpenAndCloseTransition *)_openAndCloseTransition;
-(void)_setFlipTransition:(id)arg1 ;
-(void)_setOpenAndCloseTransition:(id)arg1 ;
-(id<CAMViewfinderTransitionable>)target;
-(void)handleApplicationDidEnterBackground;
-(CAMViewfinderFlipTransition *)_flipTransition;
-(void)closeAndRotateWithDirection:(unsigned long long)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
@end

