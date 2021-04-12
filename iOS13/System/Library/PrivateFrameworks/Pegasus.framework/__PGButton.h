/*
* Generated on Monday, March 1, 2021 at 2:31:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
*/

#import <Pegasus/Pegasus-Structs.h>
#import <UIKitCore/UIButton.h>

@class PGBackdropView, UIImageView, UIImage;

@interface __PGButton : UIButton {

	PGBackdropView* _backdropView;
	UIImageView* _highlightImageView;
	UIImageView* _foregroundImageView;
	UIImage* _backgroundImage;
	long long _buttonStyle;

}

@property (nonatomic,readonly) long long buttonStyle;              //@synthesize buttonStyle=_buttonStyle - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(id)initWithButtonStyle:(long long)arg1 ;
-(long long)buttonStyle;
-(void)_updateHighlightImageView;
@end

