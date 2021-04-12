/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol HUQuickControlAuxiliaryView;
@class UIView;

@interface HUQuickControlAuxiliaryHostView : UIView {

	UIView*<HUQuickControlAuxiliaryView> _auxiliaryView;

}

@property (nonatomic,retain) UIView*<HUQuickControlAuxiliaryView> auxiliaryView;              //@synthesize auxiliaryView=_auxiliaryView - In the implementation block
-(void)updateConstraints;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(UIView*<HUQuickControlAuxiliaryView>)auxiliaryView;
-(void)setAuxiliaryView:(UIView*<HUQuickControlAuxiliaryView>)arg1 ;
@end

