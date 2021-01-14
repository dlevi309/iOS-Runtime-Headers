/*
* Generated on Thursday, January 14, 2021 at 2:25:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIWindow.h>

@class UIView;

@interface _SKUIClickThroughWindow : UIWindow {

	UIView* _interactionView;

}

@property (nonatomic,retain) UIView * interactionView;              //@synthesize interactionView=_interactionView - In the implementation block
-(UIView *)interactionView;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setInteractionView:(UIView *)arg1 ;
@end

