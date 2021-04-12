/*
* Generated on Monday, March 1, 2021 at 2:34:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonaUI.framework/PersonaUI
*/

#import <PersonaUI/PersonaUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UITextFieldDelegate.h>

@class CAGradientLayer, UITextField, PRMonogram, NSString;

@interface PRMonogramView : UIView <UITextFieldDelegate> {

	CAGradientLayer* _circleGradientLayer;
	UITextField* _textField;
	BOOL _bordered;
	BOOL _selected;
	BOOL _highlighted;
	BOOL _allowsEditing;
	BOOL _circular;
	PRMonogram* _monogram;

}

@property (assign,getter=isCircular,nonatomic) BOOL circular;              //@synthesize circular=_circular - In the implementation block
@property (nonatomic,retain) PRMonogram * monogram;                        //@synthesize monogram=_monogram - In the implementation block
@property (assign,nonatomic) BOOL bordered;                                //@synthesize bordered=_bordered - In the implementation block
@property (assign,getter=isSelected,nonatomic) BOOL selected;              //@synthesize selected=_selected - In the implementation block
@property (assign,nonatomic) BOOL highlighted;                             //@synthesize highlighted=_highlighted - In the implementation block
@property (assign,nonatomic) BOOL allowsEditing;                           //@synthesize allowsEditing=_allowsEditing - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)isSelected;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)highlighted;
-(void)didMoveToWindow;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)allowsEditing;
-(void)setAllowsEditing:(BOOL)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(void)setMonogram:(PRMonogram *)arg1 ;
-(BOOL)isCircular;
-(void)setCircular:(BOOL)arg1 ;
-(PRMonogram *)monogram;
-(void)_updateCornerRadii;
-(void)_updateTextLabel;
-(void)setBordered:(BOOL)arg1 ;
-(void)textFieldResignFirstResponder;
-(BOOL)bordered;
@end

