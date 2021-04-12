/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
*/

#import <SpringBoardUI/SpringBoardUI-Structs.h>
#import <UIKitCore/UIControl.h>

@class NSString, UILabel, UIColor, UIImage, UIView, UIImageView;

@interface SBUIStarkBannerViewButton : UIControl {

	NSString* _text;
	UILabel* _textLabel;
	UIColor* _unselectedTextColor;
	UIColor* _selectedTextColor;
	UIImage* _unselectedImage;
	UIImage* _selectedImage;
	UIView* _highlightView;
	UIImageView* _imageView;
	UIColor* _highlightColor;

}

@property (nonatomic,copy) NSString * text;                              //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) UILabel * textLabel;                        //@synthesize textLabel=_textLabel - In the implementation block
@property (nonatomic,retain) UIColor * unselectedTextColor;              //@synthesize unselectedTextColor=_unselectedTextColor - In the implementation block
@property (nonatomic,retain) UIColor * selectedTextColor;                //@synthesize selectedTextColor=_selectedTextColor - In the implementation block
@property (nonatomic,retain) UIImage * unselectedImage;                  //@synthesize unselectedImage=_unselectedImage - In the implementation block
@property (nonatomic,retain) UIImage * selectedImage;                    //@synthesize selectedImage=_selectedImage - In the implementation block
@property (nonatomic,retain) UIColor * highlightColor;                   //@synthesize highlightColor=_highlightColor - In the implementation block
+(id)buttonWithOK;
+(id)buttonWithText:(id)arg1 ;
+(id)buttonWithChevronImageForTraitCollection:(id)arg1 ;
+(id)_chevronImageForTraitCollection:(id)arg1 selected:(BOOL)arg2 ;
+(id)_chevronImageForTraitCollection:(id)arg1 ;
+(id)buttonWithOKAndHighlightColor:(id)arg1 ;
+(id)buttonWithText:(id)arg1 highlightColor:(id)arg2 ;
+(id)buttonWithChevronImageForTraitCollection:(id)arg1 highlightColor:(id)arg2 ;
+(id)highlightColorForNightTime:(BOOL)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(UILabel *)textLabel;
-(void)setSelectedImage:(UIImage *)arg1 ;
-(UIImage *)unselectedImage;
-(UIImage *)selectedImage;
-(void)setUnselectedImage:(UIImage *)arg1 ;
-(UIColor *)highlightColor;
-(void)setHighlightColor:(UIColor *)arg1 ;
-(void)setTextLabel:(UILabel *)arg1 ;
-(void)setSelectedTextColor:(UIColor *)arg1 ;
-(UIColor *)selectedTextColor;
-(void)setUnselectedTextColor:(UIColor *)arg1 ;
-(UIColor *)unselectedTextColor;
@end

