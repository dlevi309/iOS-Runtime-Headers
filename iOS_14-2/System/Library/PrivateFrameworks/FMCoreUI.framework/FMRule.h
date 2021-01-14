/*
* Generated on Thursday, January 14, 2021 at 2:27:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FMCoreUI.framework/FMCoreUI
*/

#import <FMCoreUI/FMCoreUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor, UIImageView;

@interface FMRule : UIView {

	BOOL _leading;
	UIColor* _color;
	UIImageView* _imageView;

}

@property (assign,nonatomic) BOOL leading;                         //@synthesize leading=_leading - In the implementation block
@property (nonatomic,retain) UIColor * color;                      //@synthesize color=_color - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
+(id)imageWithColor:(id)arg1 leading:(BOOL)arg2 ;
-(void)setImageView:(UIImageView *)arg1 ;
-(BOOL)leading;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIImageView *)imageView;
-(UIColor *)color;
-(void)setLeading:(BOOL)arg1 ;
-(void)setColor:(UIColor *)arg1 ;
-(void)commonSetup;
-(void)prepareForInterfaceBuilder;
-(void)awakeFromNib;
@end

