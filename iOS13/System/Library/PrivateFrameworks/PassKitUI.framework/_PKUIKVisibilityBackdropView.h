/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/_UIBackdropView.h>

@protocol _PKUIKVisibilityBackdropViewDelegate;
@interface _PKUIKVisibilityBackdropView : _UIBackdropView {

	double _visibility;
	double _visibilityAnimationTarget;
	unsigned _animationCounter;
	unsigned _styleToken;
	BOOL _updatingBackdropSettings;
	long long _style;
	id<_PKUIKVisibilityBackdropViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<_PKUIKVisibilityBackdropViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id<_PKUIKVisibilityBackdropViewDelegate>)delegate;
-(void)setDelegate:(id<_PKUIKVisibilityBackdropViewDelegate>)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 privateStyle:(long long)arg2 ;
-(void)pkui_setVisibility:(double)arg1 animated:(BOOL)arg2 ;
-(void)pkui_accessibilitySettingsDidChange:(id)arg1 ;
-(void)pkui_commitBackdropSettings;
-(void)_updateStyleIfNecessary;
-(void)_pkui_setVisibility:(double)arg1 animated:(BOOL)arg2 ;
-(long long)pkui_preferredBackdropStyle;
-(void)pkui_updateBackdropSettings;
-(double)pkui_visibility;
@end

