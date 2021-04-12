/*
* Generated on Monday, March 1, 2021 at 2:35:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/AccessibilityBundles/CameraUI.axbundle/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor, UIView, UILabel, NSString;

@interface AXCameraFeatureDebuggingView : UIView {

	BOOL _textOnTop;
	BOOL _textInsideBox;
	BOOL _didReuse;
	UIColor* _borderColor;
	UIColor* _textColor;
	long long _interfaceOrientation;
	UIView* __crossHairX;
	UIView* __crossHairY;
	UILabel* __label;

}

@property (nonatomic,readonly) UIView * _crossHairX;                      //@synthesize _crossHairX=__crossHairX - In the implementation block
@property (nonatomic,readonly) UIView * _crossHairY;                      //@synthesize _crossHairY=__crossHairY - In the implementation block
@property (nonatomic,readonly) UILabel * _label;                          //@synthesize _label=__label - In the implementation block
@property (assign,nonatomic) double borderWidth; 
@property (nonatomic,retain) UIColor * borderColor;                       //@synthesize borderColor=_borderColor - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                         //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,copy) NSString * text; 
@property (assign,nonatomic) BOOL textOnTop;                              //@synthesize textOnTop=_textOnTop - In the implementation block
@property (assign,nonatomic) BOOL textInsideBox;                          //@synthesize textInsideBox=_textInsideBox - In the implementation block
@property (assign,nonatomic) long long interfaceOrientation;              //@synthesize interfaceOrientation=_interfaceOrientation - In the implementation block
@property (assign,nonatomic) BOOL didReuse;                               //@synthesize didReuse=_didReuse - In the implementation block
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(UILabel *)_label;
-(void)setBorderColor:(UIColor *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(long long)interfaceOrientation;
-(void)layoutSubviews;
-(double)borderWidth;
-(void)setBorderWidth:(double)arg1 ;
-(UIColor *)textColor;
-(void)setInterfaceOrientation:(long long)arg1 ;
-(UIColor *)borderColor;
-(void)setDidReuse:(BOOL)arg1 ;
-(UIView *)_crossHairX;
-(UIView *)_crossHairY;
-(BOOL)textOnTop;
-(BOOL)textInsideBox;
-(void)setTextOnTop:(BOOL)arg1 ;
-(void)setTextInsideBox:(BOOL)arg1 ;
-(BOOL)didReuse;
@end

