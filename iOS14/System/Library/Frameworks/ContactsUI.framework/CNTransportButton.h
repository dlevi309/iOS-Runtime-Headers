/*
* Generated on Thursday, January 14, 2021 at 2:20:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)tintColorDidChange;
-(CGSize)intrinsicContentSize;
-(void)setImage:(UIImage *)arg1 ;
-(void)setGlyphColor:(UIColor *)arg1 ;
-(UIColor *)glyphColor;
-(void)setTransportType:(long long)arg1 ;
-(long long)transportType;
-(UIImage *)image;
-(BOOL)showBackgroundPlatter;
-(void)setShowBackgroundPlatter:(BOOL)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)_updateImageWithType:(long long)arg1 ;
-(void)_updateTouchInsetsToFillContainerWithSize:(CGSize)arg1 ;
@end

