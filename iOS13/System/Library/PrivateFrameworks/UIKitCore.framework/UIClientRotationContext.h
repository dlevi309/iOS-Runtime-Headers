/*
* Generated on Monday, March 1, 2021 at 2:30:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class UIView, UISnapshotView, UIWindow;

@interface UIClientRotationContext : NSObject {

	UIView* _headerView;
	UIView* _footerView;
	UIView* _contentView;
	UIView* _snapshotTargetView;
	UIView* _rotatingSnapshotView;
	UIView* _footerStartSnapshotView;
	UIView* _footerEndSnapshotView;
	BOOL _headerWasHidden;
	BOOL _footerWasHidden;
	BOOL _contentWasHidden;
	BOOL _snapshotTargetWasHidden;
	BOOL _orderKeyboardInAfterRotating;
	long long _fromOrientation;
	long long _toOrientation;
	double _duration;
	UISnapshotView* _headerSnapshotViewStart;
	UISnapshotView* _footerSnapshotViewStart;
	UISnapshotView* _contentSnapshotViewStart;
	id _rotatingClient;
	SCD_Struct_UI47 _rotationSettings;
	double contentBottomInset;
	UIWindow* _window;
	BOOL _skipClientRotationCallbacks;

}

@property (nonatomic,readonly) id rotatingClient;                           //@synthesize rotatingClient=_rotatingClient - In the implementation block
@property (nonatomic,readonly) UIView * contentView;                        //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,readonly) double duration;                             //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) BOOL skipClientRotationCallbacks;              //@synthesize skipClientRotationCallbacks=_skipClientRotationCallbacks - In the implementation block
@property (nonatomic,readonly) long long fromOrientation;                   //@synthesize fromOrientation=_fromOrientation - In the implementation block
@property (nonatomic,readonly) long long toOrientation;                     //@synthesize toOrientation=_toOrientation - In the implementation block
-(void)dealloc;
-(double)duration;
-(UIView *)contentView;
-(void)_slideHeaderView:(id)arg1 andFooterView:(id)arg2 offScreen:(BOOL)arg3 forInterfaceOrientation:(long long)arg4 ;
-(void)_positionHeaderView:(id)arg1 andFooterView:(id)arg2 outsideContentViewForInterfaceOrientation:(long long)arg3 ;
-(id)initWithClient:(id)arg1 toOrientation:(long long)arg2 duration:(double)arg3 andWindow:(id)arg4 ;
-(void)slideHeaderViewAndFooterViewOffScreen:(BOOL)arg1 forInterfaceOrientation:(long long)arg2 ;
-(BOOL)_isHeaderTranslucent;
-(BOOL)_isFooterTranslucent;
-(void)setupRotationOrderingKeyboardInAfterRotation:(BOOL)arg1 ;
-(void)rotateSnapshots;
-(void)finishFirstHalfRotation;
-(void)finishFullRotateUsingOnePartAnimation:(BOOL)arg1 ;
-(id)rotatingClient;
-(long long)fromOrientation;
-(long long)toOrientation;
-(BOOL)skipClientRotationCallbacks;
-(void)setSkipClientRotationCallbacks:(BOOL)arg1 ;
@end

