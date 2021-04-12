/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKitCore/UIButton.h>

@class UIColor, UIImage;

@interface CNTransportButton : UIButton {

	BOOL _showBackgroundPlatter;
	long long _transportType;
	UIColor* _glyphColor;
	UIImage* _image;

}

@property (nonatomic,retain) UIImage * image;                         //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) long long transportType;                 //@synthesize transportType=_transportType - In the implementation block
@property (assign,nonatomic) BOOL showBackgroundPlatter;              //@synthesize showBackgroundPlatter=_showBackgroundPlatter - In the implementation block
@property (nonatomic,retain) UIColor * glyphColor;                    //@synthesize glyphColor=_glyphColor - In the implementation block
+(id)transportButton;
+(id)transportButtonWithType:(long long)arg1 ;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(long long)transportType;
-(CGSize)intrinsicContentSize;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)tintColorDidChange;
-(void)setTransportType:(long long)arg1 ;
-(BOOL)showBackgroundPlatter;
-(void)setShowBackgroundPlatter:(BOOL)arg1 ;
-(void)setGlyphColor:(UIColor *)arg1 ;
-(void)_updateImageWithType:(long long)arg1 ;
-(void)_updateTouchInsetsToFillContainerWithSize:(CGSize)arg1 ;
-(UIColor *)glyphColor;
@end

