/*
* Generated on Thursday, January 14, 2021 at 2:26:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
*/

#import <ManagedConfigurationUI/ManagedConfigurationUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSString, UIFont, UIImage;

@interface MCUIGradientLabel : UIView {

	NSString* _text;
	UIFont* _font;
	UIImage* _gradient;
	CGColorRef _patternColor;

}

@property (nonatomic,retain) NSString * text;                 //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) UIFont * font;                   //@synthesize font=_font - In the implementation block
@property (nonatomic,retain) UIImage * gradient;              //@synthesize gradient=_gradient - In the implementation block
-(void)setFont:(UIFont *)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)text;
-(void)setGradient:(UIImage *)arg1 ;
-(CGColorRef)_patternColor;
-(UIImage *)gradient;
-(void)dealloc;
-(UIFont *)font;
@end

