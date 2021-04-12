/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIKitCore/UITextField.h>

@interface HKCaretOptionalTextField : UITextField {

	BOOL _allowsSelection;
	BOOL _disableActions;

}

@property (assign,nonatomic) BOOL allowsSelection;              //@synthesize allowsSelection=_allowsSelection - In the implementation block
@property (assign,nonatomic) BOOL disableActions;               //@synthesize disableActions=_disableActions - In the implementation block
-(void)setDisableActions:(BOOL)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setAllowsSelection:(BOOL)arg1 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(BOOL)allowsSelection;
-(CGRect)caretRectForPosition:(id)arg1 ;
-(BOOL)disableActions;
-(double)actualMinimumFontSize;
@end

