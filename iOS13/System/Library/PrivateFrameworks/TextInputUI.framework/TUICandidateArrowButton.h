/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithCoder:(id)arg1 ;
-(id<TUICandidateViewStyle>)style;
-(void)setStyle:(id<TUICandidateViewStyle>)arg1 ;
-(void)commonInit;
-(UIView *)contentView;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIView *)backgroundView;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(UIView *)highlightBackgroundView;
-(TUICandidateBackdropView *)backdropView;
-(void)setBackdropView:(TUICandidateBackdropView *)arg1 ;
-(void)setBackgroundView:(UIView *)arg1 ;
-(long long)arrowDirection;
-(void)setArrowDirection:(long long)arg1 ;
-(void)setShowsBackground:(BOOL)arg1 ;
-(void)updateStyle;
-(void)setArrowImageName:(NSString *)arg1 ;
-(void)udpateBackgroundColor;
-(double)imageViewAlpha;
-(id)rotatedImageForImage:(id)arg1 scale:(double)arg2 ;
-(BOOL)showsBackground;
-(NSString *)arrowImageName;
-(void)setHighlightBackgroundView:(UIView *)arg1 ;
@end

