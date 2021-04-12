/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CGRect)caretRectForPosition:(id)arg1 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setDisableActions:(BOOL)arg1 ;
-(BOOL)disableActions;
-(double)actualMinimumFontSize;
-(BOOL)allowsSelection;
-(void)setAllowsSelection:(BOOL)arg1 ;
@end

