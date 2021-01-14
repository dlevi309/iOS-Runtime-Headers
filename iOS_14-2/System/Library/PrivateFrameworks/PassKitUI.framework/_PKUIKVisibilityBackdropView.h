/*
* Generated on Thursday, January 14, 2021 at 2:24:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithFrame:(CGRect)arg1 privateStyle:(long long)arg2 ;
-(double)pkui_visibility;
-(long long)pkui_preferredBackdropStyle;
-(id<_PKUIKVisibilityBackdropViewDelegate>)delegate;
-(void)pkui_accessibilitySettingsDidChange:(id)arg1 ;
-(void)_pkui_setVisibility:(double)arg1 animated:(BOOL)arg2 ;
-(void)pkui_commitBackdropSettings;
-(void)pkui_setVisibility:(double)arg1 animated:(BOOL)arg2 ;
-(void)_updateStyleIfNecessary;
-(void)setDelegate:(id<_PKUIKVisibilityBackdropViewDelegate>)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)dealloc;
-(void)pkui_updateBackdropSettings;
@end

