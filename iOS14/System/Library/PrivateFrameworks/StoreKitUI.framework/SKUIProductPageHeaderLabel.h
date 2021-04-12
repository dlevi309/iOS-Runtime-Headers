/*
* Generated on Thursday, January 14, 2021 at 2:25:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSString, UIColor, UIImage, NSArray;

@interface SKUIProductPageHeaderLabel : UIView {

	NSString* _text;
	UIColor* _textColor;
	NSString* _contentRating;
	UIImage* _contentRatingImage;
	NSArray* _secondaryContentRatingImages;
	UIColor* _ratingColor;
	BOOL _isPad;

}

@property (assign,nonatomic) BOOL isPad;                                          //@synthesize isPad=_isPad - In the implementation block
@property (nonatomic,copy) NSString * text;                                       //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                                 //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,retain) NSString * contentRating;                            //@synthesize contentRating=_contentRating - In the implementation block
@property (nonatomic,retain) NSArray * secondaryContentRatingImages;              //@synthesize secondaryContentRatingImages=_secondaryContentRatingImages - In the implementation block
@property (nonatomic,retain) UIColor * ratingColor;                               //@synthesize ratingColor=_ratingColor - In the implementation block
-(BOOL)isPad;
-(UIColor *)textColor;
-(void)setIsPad:(BOOL)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setContentRating:(NSString *)arg1 ;
-(NSString *)contentRating;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)text;
-(id)_textAttributes;
-(void)setRatingColor:(UIColor *)arg1 ;
-(void)setSecondaryContentRatingImages:(NSArray *)arg1 ;
-(id)_imageForContentRating:(id)arg1 ;
-(CTFramesetterRef)_newTextFramesetter;
-(double)secondaryImageWidth;
-(NSArray *)secondaryContentRatingImages;
-(UIColor *)ratingColor;
@end

