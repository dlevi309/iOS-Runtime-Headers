/*
* Generated on Thursday, January 14, 2021 at 2:28:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(BOOL)allowsEditing;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(BOOL)highlighted;
-(BOOL)isSelected;
-(void)setSelected:(BOOL)arg1 ;
-(void)setCircular:(BOOL)arg1 ;
-(void)setAllowsEditing:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(PRMonogram *)monogram;
-(void)setMonogram:(PRMonogram *)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)_updateCornerRadii;
-(BOOL)isCircular;
-(void)dealloc;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)_updateTextLabel;
-(void)setBordered:(BOOL)arg1 ;
-(void)textFieldResignFirstResponder;
-(BOOL)bordered;
@end

