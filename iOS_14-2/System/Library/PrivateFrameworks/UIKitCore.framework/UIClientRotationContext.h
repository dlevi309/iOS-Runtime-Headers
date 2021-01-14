/*
* Generated on Thursday, January 14, 2021 at 2:20:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	SCD_Struct_UI53 _rotationSettings;
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
-(void)_positionHeaderView:(id)arg1 andFooterView:(id)arg2 outsideContentViewForInterfaceOrientation:(long long)arg3 ;
-(void)_slideHeaderView:(id)arg1 andFooterView:(id)arg2 offScreen:(BOOL)arg3 forInterfaceOrientation:(long long)arg4 ;
-(void)slideHeaderViewAndFooterViewOffScreen:(BOOL)arg1 forInterfaceOrientation:(long long)arg2 ;
-(long long)fromOrientation;
-(long long)toOrientation;
-(id)initWithClient:(id)arg1 toOrientation:(long long)arg2 duration:(double)arg3 andWindow:(id)arg4 ;
-(id)rotatingClient;
-(BOOL)_isHeaderTranslucent;
-(BOOL)_isFooterTranslucent;
-(void)rotateSnapshots;
-(void)setupRotationOrderingKeyboardInAfterRotation:(BOOL)arg1 ;
-(void)finishFirstHalfRotation;
-(void)finishFullRotateUsingOnePartAnimation:(BOOL)arg1 ;
-(BOOL)skipClientRotationCallbacks;
-(void)setSkipClientRotationCallbacks:(BOOL)arg1 ;
-(UIView *)contentView;
-(double)duration;
-(void)dealloc;
@end

