/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIWindow.h>

@class UIView;

@interface _SKUIClickThroughWindow : UIWindow {

	UIView* _interactionView;

}

@property (nonatomic,retain) UIView * interactionView;              //@synthesize interactionView=_interactionView - In the implementation block
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setInteractionView:(UIView *)arg1 ;
-(UIView *)interactionView;
@end

