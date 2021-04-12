/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKitCore/UIInputView.h>

@class UIToolbar, NSArray;

@interface WFKeyboardToolbarAccessoryView : UIInputView {

	UIToolbar* _toolbar;

}

@property (nonatomic,readonly) UIToolbar * toolbar;              //@synthesize toolbar=_toolbar - In the implementation block
@property (nonatomic,copy) NSArray * barItems; 
-(id)init;
-(UIToolbar *)toolbar;
-(id)flexibleSpaceItem;
-(BOOL)isPhoneUI;
-(NSArray *)barItems;
-(void)setBarItems:(NSArray *)arg1 ;
-(void)appendBarItem:(id)arg1 ;
-(void)prependBarItem:(id)arg1 ;
-(void)removeAllBarItems;
-(double)borderedButtonWidthForButtonTitle:(id)arg1 font:(id)arg2 ;
-(double)keyboardButtonHeight;
-(double)inverseToolbarPadding;
-(id)plainButtonItemWithTitle:(id)arg1 bolded:(BOOL)arg2 target:(id)arg3 action:(SEL)arg4 ;
-(id)borderedButtonItemWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3 ;
-(id)fixedSpaceItemOfWidth:(double)arg1 ;
-(id)buttonImageWithSize:(CGSize)arg1 ;
-(void)drawRoundedRectangleInRect:(CGRect)arg1 withContext:(CGContextRef)arg2 color:(id)arg3 radius:(double)arg4 ;
@end

