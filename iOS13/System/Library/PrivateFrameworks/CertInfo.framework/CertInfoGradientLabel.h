/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
*/

#import <CertInfo/CertInfo-Structs.h>
#import <UIKitCore/UIView.h>

@class NSString, UIFont, UIImage;

@interface CertInfoGradientLabel : UIView {

	NSString* _text;
	UIFont* _font;
	UIImage* _gradient;
	CGColorRef _patternColor;

}

@property (nonatomic,retain) NSString * text;                 //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) UIFont * font;                   //@synthesize font=_font - In the implementation block
@property (nonatomic,retain) UIImage * gradient;              //@synthesize gradient=_gradient - In the implementation block
-(void)dealloc;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIFont *)font;
-(void)drawRect:(CGRect)arg1 ;
-(CGColorRef)_patternColor;
-(void)setGradient:(UIImage *)arg1 ;
-(UIImage *)gradient;
@end

