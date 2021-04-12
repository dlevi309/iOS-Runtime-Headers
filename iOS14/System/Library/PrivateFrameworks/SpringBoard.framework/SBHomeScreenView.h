/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIView.h>

@class SBFStatusBarLegibilityView;

@interface SBHomeScreenView : UIView {

	SBFStatusBarLegibilityView* _statusBarLegibilityView;

}

@property (nonatomic,readonly) SBFStatusBarLegibilityView * statusBarLegibilityView;              //@synthesize statusBarLegibilityView=_statusBarLegibilityView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(SBFStatusBarLegibilityView *)statusBarLegibilityView;
-(void)setFrame:(CGRect)arg1 ;
-(void)didMoveToWindow;
@end

