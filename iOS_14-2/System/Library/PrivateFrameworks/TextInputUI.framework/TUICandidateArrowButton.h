/*
* Generated on Thursday, January 14, 2021 at 2:21:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
*/

#import <TextInputUI/TextInputUI-Structs.h>
#import <UIKitCore/UIButton.h>

@protocol TUICandidateViewStyle;
@class NSString, UIView, TUICandidateBackdropView;

@interface TUICandidateArrowButton : UIButton {

	BOOL _showsBackground;
	NSString* _arrowImageName;
	long long _arrowDirection;
	id<TUICandidateViewStyle> _style;
	UIView* _contentView;
	UIView* _highlightBackgroundView;
	UIView* _backgroundView;
	TUICandidateBackdropView* _backdropView;

}

@property (nonatomic,retain) UIView * highlightBackgroundView;                     //@synthesize highlightBackgroundView=_highlightBackgroundView - In the implementation block
@property (nonatomic,retain) UIView * backgroundView;                              //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) TUICandidateBackdropView * backdropView;              //@synthesize backdropView=_backdropView - In the implementation block
@property (assign,nonatomic) BOOL showsBackground;                                 //@synthesize showsBackground=_showsBackground - In the implementation block
@property (nonatomic,copy) NSString * arrowImageName;                              //@synthesize arrowImageName=_arrowImageName - In the implementation block
@property (assign,nonatomic) long long arrowDirection;                             //@synthesize arrowDirection=_arrowDirection - In the implementation block
@property (nonatomic,retain) id<TUICandidateViewStyle> style;                      //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) UIView * contentView;                               //@synthesize contentView=_contentView - In the implementation block
-(TUICandidateBackdropView *)backdropView;
-(void)setBackdropView:(TUICandidateBackdropView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundView:(UIView *)arg1 ;
-(UIView *)backgroundView;
-(void)commonInit;
-(void)updateStyle;
-(void)layoutSubviews;
-(void)setShowsBackground:(BOOL)arg1 ;
-(void)setArrowImageName:(NSString *)arg1 ;
-(void)udpateBackgroundColor;
-(double)imageViewAlpha;
-(id)rotatedImageForImage:(id)arg1 scale:(double)arg2 ;
-(BOOL)showsBackground;
-(NSString *)arrowImageName;
-(void)setHighlightBackgroundView:(UIView *)arg1 ;
-(void)setArrowDirection:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setStyle:(id<TUICandidateViewStyle>)arg1 ;
-(UIView *)contentView;
-(long long)arrowDirection;
-(id<TUICandidateViewStyle>)style;
-(UIView *)highlightBackgroundView;
-(void)setHighlighted:(BOOL)arg1 ;
@end

