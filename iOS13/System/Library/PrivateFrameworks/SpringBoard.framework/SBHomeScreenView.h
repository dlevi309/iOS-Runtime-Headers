/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIView.h>

@class SBFStatusBarLegibilityView;

@interface SBHomeScreenView : UIView {

	SBFStatusBarLegibilityView* _statusBarLegibilityView;

}

@property (nonatomic,readonly) SBFStatusBarLegibilityView * statusBarLegibilityView;              //@synthesize statusBarLegibilityView=_statusBarLegibilityView - In the implementation block
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(SBFStatusBarLegibilityView *)statusBarLegibilityView;
@end

