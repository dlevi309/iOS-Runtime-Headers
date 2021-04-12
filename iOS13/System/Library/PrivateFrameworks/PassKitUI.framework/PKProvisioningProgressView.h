/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIScrollView, UIView, NSString, UITextView, UILabel, UIProgressView, PKCheckGlyphLayer;

@interface PKProvisioningProgressView : UIView {

	UIScrollView* _scrollView;
	BOOL _showingCheckmark;
	UIView* _headerView;
	NSString* _primaryText;
	UITextView* _primaryLabel;
	UILabel* _secondaryLabel;
	UIProgressView* _progressView;
	UILabel* _progressLabel;
	PKCheckGlyphLayer* _checkmarkGlyph;

}

@property (nonatomic,retain) UIView * headerView;                                          //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) NSString * primaryText;                                       //@synthesize primaryText=_primaryText - In the implementation block
@property (nonatomic,readonly) UITextView * primaryLabel;                                  //@synthesize primaryLabel=_primaryLabel - In the implementation block
@property (nonatomic,readonly) UILabel * secondaryLabel;                                   //@synthesize secondaryLabel=_secondaryLabel - In the implementation block
@property (nonatomic,readonly) UIProgressView * progressView;                              //@synthesize progressView=_progressView - In the implementation block
@property (nonatomic,readonly) UILabel * progressLabel;                                    //@synthesize progressLabel=_progressLabel - In the implementation block
@property (assign,getter=isShowingCheckmark,nonatomic) BOOL showingCheckmark;              //@synthesize showingCheckmark=_showingCheckmark - In the implementation block
@property (nonatomic,readonly) PKCheckGlyphLayer * checkmarkGlyph;                         //@synthesize checkmarkGlyph=_checkmarkGlyph - In the implementation block
-(id)init;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)tintColorDidChange;
-(UIView *)headerView;
-(void)setHeaderView:(UIView *)arg1 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(NSString *)primaryText;
-(void)setPrimaryText:(NSString *)arg1 ;
-(UILabel *)progressLabel;
-(UITextView *)primaryLabel;
-(UILabel *)secondaryLabel;
-(UIProgressView *)progressView;
-(void)createViews;
-(void)setShowingCheckmark:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_updateCheckmarkColor;
-(CGSize)_layoutWithBounds:(CGRect)arg1 applyLayout:(BOOL)arg2 ;
-(void)setShowingCheckmark:(BOOL)arg1 ;
-(BOOL)isShowingCheckmark;
-(PKCheckGlyphLayer *)checkmarkGlyph;
@end

