/*
* Generated on Thursday, January 14, 2021 at 2:24:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)updateConstraints;
-(void)setAuxiliaryView:(UIView*<HUQuickControlAuxiliaryView>)arg1 ;
-(UIView*<HUQuickControlAuxiliaryView>)auxiliaryView;
@end

