/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)reset;
-(void)setTitle:(id)arg1 ;
-(NSString *)subtitle;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setSubtitle:(NSString *)arg1 ;
-(UIEdgeInsets)contentInsets;
-(void)drawRect:(CGRect)arg1 ;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(double)rating;
-(void)setRating:(double)arg1 ;
-(void)setRatingText:(NSString *)arg1 ;
-(NSString *)ratingText;
-(UIEdgeInsets)titleInsets;
-(void)setTitleInsets:(UIEdgeInsets)arg1 ;
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

