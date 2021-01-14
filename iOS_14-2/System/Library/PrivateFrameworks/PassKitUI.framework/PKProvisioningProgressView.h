/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIScrollView, UIView, NSString, UITextView, UILabel, UIProgressView, LAUICheckmarkLayer;

@interface PKProvisioningProgressView : UIView {

	UIScrollView* _scrollView;
	BOOL _showingCheckmark;
	UIView* _headerView;
	NSString* _primaryText;
	UITextView* _primaryLabel;
	UILabel* _secondaryLabel;
	UIProgressView* _progressView;
	UILabel* _progressLabel;
	LAUICheckmarkLayer* _checkmarkLayer;

}

@property (nonatomic,retain) UIView * headerView;                                          //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) NSString * primaryText;                                       //@synthesize primaryText=_primaryText - In the implementation block
@property (nonatomic,readonly) UITextView * primaryLabel;                                  //@synthesize primaryLabel=_primaryLabel - In the implementation block
@property (nonatomic,readonly) UILabel * secondaryLabel;                                   //@synthesize secondaryLabel=_secondaryLabel - In the implementation block
@property (nonatomic,readonly) UIProgressView * progressView;                              //@synthesize progressView=_progressView - In the implementation block
@property (nonatomic,readonly) UILabel * progressLabel;                                    //@synthesize progressLabel=_progressLabel - In the implementation block
@property (assign,getter=isShowingCheckmark,nonatomic) BOOL showingCheckmark;              //@synthesize showingCheckmark=_showingCheckmark - In the implementation block
@property (nonatomic,readonly) LAUICheckmarkLayer * checkmarkLayer;                        //@synthesize checkmarkLayer=_checkmarkLayer - In the implementation block
-(void)setHeaderView:(UIView *)arg1 ;
-(void)tintColorDidChange;
-(id)init;
-(void)_dynamicUserInterfaceTraitDidChange;
-(UITextView *)primaryLabel;
-(void)layoutSubviews;
-(void)createViews;
-(void)_updateCheckmarkColor;
-(CGSize)_layoutWithBounds:(CGRect)arg1 applyLayout:(BOOL)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setShowingCheckmark:(BOOL)arg1 ;
-(BOOL)isShowingCheckmark;
-(NSString *)primaryText;
-(void)setPrimaryText:(NSString *)arg1 ;
-(UIProgressView *)progressView;
-(UILabel *)progressLabel;
-(UIView *)headerView;
-(LAUICheckmarkLayer *)checkmarkLayer;
-(void)setShowingCheckmark:(BOOL)arg1 animated:(BOOL)arg2 ;
-(UILabel *)secondaryLabel;
@end

