/*
* Generated on Thursday, January 14, 2021 at 2:24:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
*/

#import <UIKitCore/UIView.h>

@protocol AFUISiriCarPlayBackgroundViewDelegate;
@class AFUISiriCarPlayFullScreenBackgroundView, UIView;

@interface AFUISiriCarPlayBackgroundView : UIView {

	AFUISiriCarPlayFullScreenBackgroundView* _fullScreenBackgroundView;
	UIView* _systemBackgroundView;
	id<AFUISiriCarPlayBackgroundViewDelegate> _delegate;
	BOOL _visible;
	long long _backgroundViewMode;

}

@property (assign,nonatomic) long long backgroundViewMode;               //@synthesize backgroundViewMode=_backgroundViewMode - In the implementation block
@property (assign,getter=isVisible,nonatomic) BOOL visible;              //@synthesize visible=_visible - In the implementation block
-(void)setVisible:(BOOL)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(BOOL)isVisible;
-(long long)backgroundViewMode;
-(void)_animateBackgroundsWithVisibility:(BOOL)arg1 backgroundViewMode:(long long)arg2 ;
-(void)_updateViewsForVisibility:(BOOL)arg1 backgroundViewMode:(long long)arg2 ;
-(void)_updateCarPlayStatusBarForVisibility:(BOOL)arg1 backgroundViewMode:(long long)arg2 ;
-(void)setBackgroundViewMode:(long long)arg1 ;
@end

