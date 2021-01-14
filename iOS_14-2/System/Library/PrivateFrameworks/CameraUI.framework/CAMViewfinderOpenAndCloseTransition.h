/*
* Generated on Thursday, January 14, 2021 at 2:26:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


@protocol CAMViewfinderTransitionable;
@class CAMSnapshotView;

@interface CAMViewfinderOpenAndCloseTransition : NSObject {

	BOOL _didEnterBackground;
	id<CAMViewfinderTransitionable> __transitionableViewfinder;
	CAMSnapshotView* __snapshotView;

}

@property (nonatomic,__weak,readonly) id<CAMViewfinderTransitionable> _transitionableViewfinder;              //@synthesize _transitionableViewfinder=__transitionableViewfinder - In the implementation block
@property (setter=_setSnapshotView:,nonatomic,retain) CAMSnapshotView * _snapshotView;                        //@synthesize _snapshotView=__snapshotView - In the implementation block
@property (assign,nonatomic) BOOL didEnterBackground;                                                         //@synthesize didEnterBackground=_didEnterBackground - In the implementation block
-(CAMSnapshotView *)_snapshotView;
-(void)_setSnapshotView:(id)arg1 ;
-(void)closeAnimated:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)openAnimated:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(BOOL)didEnterBackground;
-(id)_existingSnapshotViewCreateIfNecessary:(BOOL)arg1 removedOnCompletion:(BOOL)arg2 ;
-(void)_closeViewfinder:(BOOL)arg1 animated:(BOOL)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(id<CAMViewfinderTransitionable>)_transitionableViewfinder;
-(void)closeWithoutBlurring;
-(void)setDidEnterBackground:(BOOL)arg1 ;
-(id)initWithTransitionableViewfinder:(id)arg1 ;
@end

