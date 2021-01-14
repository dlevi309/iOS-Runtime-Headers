/*
* Generated on Thursday, January 14, 2021 at 2:25:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIControl.h>

@class SKUIColorScheme, UILabel, UIImageView, NSString;

@interface SKUITextBoxView : UIControl {

	SKUIColorScheme* _colorScheme;
	UIEdgeInsets _contentInsets;
	UILabel* _moreButtonLabel;
	long long _numberOfVisibleLines;
	double _rating;
	UIImageView* _ratingImageView;
	UILabel* _ratingLabel;
	UILabel* _subtitleLabel;
	CTFrameRef _textFrame;
	UIEdgeInsets _titleInsets;
	UILabel* _titleLabel;
	CTFrameRef _titleTextFrame;
	CTLineRef _truncationToken;
	long long _truncationStyle;
	NSString* _underlyingText;
	BOOL _titleTextIsNaturallyRTL;
	BOOL _textIsNaturallyRTL;

}

@property (nonatomic,retain) SKUIColorScheme * colorScheme;               //@synthesize colorScheme=_colorScheme - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInsets;                  //@synthesize contentInsets=_contentInsets - In the implementation block
@property (assign,nonatomic) UIEdgeInsets titleInsets;                    //@synthesize titleInsets=_titleInsets - In the implementation block
@property (assign,nonatomic) long long numberOfVisibleLines;              //@synthesize numberOfVisibleLines=_numberOfVisibleLines - In the implementation block
@property (assign,nonatomic) long long truncationStyle;                   //@synthesize truncationStyle=_truncationStyle - In the implementation block
@property (nonatomic,copy) NSString * moreButtonTitle; 
@property (nonatomic,copy) NSString * subtitle; 
@property (assign,nonatomic) double rating;                               //@synthesize rating=_rating - In the implementation block
@property (nonatomic,copy) NSString * ratingText; 
@property (assign,nonatomic) BOOL textIsNaturallyRTL;                     //@synthesize textIsNaturallyRTL=_textIsNaturallyRTL - In the implementation block
-(double)rating;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIEdgeInsets)contentInsets;
-(void)setRatingText:(NSString *)arg1 ;
-(NSString *)subtitle;
-(void)setTitle:(id)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setRating:(double)arg1 ;
-(NSString *)ratingText;
-(void)drawRect:(CGRect)arg1 ;
-(UIEdgeInsets)titleInsets;
-(void)setTitleInsets:(UIEdgeInsets)arg1 ;
-(void)layoutSubviews;
-(void)setFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)reset;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)dealloc;
-(SKUIColorScheme *)colorScheme;
-(void)setColorScheme:(SKUIColorScheme *)arg1 ;
-(CTFrameRef)_textFrame;
-(void)setMoreButtonTitle:(NSString *)arg1 ;
-(void)setNumberOfVisibleLines:(long long)arg1 ;
-(void)setFixedWidthTextFrame:(CTFrameRef)arg1 ;
-(void)setFixedWidthTitleTextFrame:(CTFrameRef)arg1 ;
-(NSString *)moreButtonTitle;
-(id)_moreButtonLabel;
-(CGSize)_textSizeToFitSize:(CGSize)arg1 ;
-(void)setTextFrameWithText:(id)arg1 ;
-(void)setTruncationStyle:(long long)arg1 ;
-(long long)numberOfVisibleLines;
-(long long)truncationStyle;
-(BOOL)textIsNaturallyRTL;
-(void)setTextIsNaturallyRTL:(BOOL)arg1 ;
@end

