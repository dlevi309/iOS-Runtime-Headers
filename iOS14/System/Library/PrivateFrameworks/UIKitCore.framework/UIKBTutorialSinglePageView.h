/*
* Generated on Thursday, January 14, 2021 at 2:20:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIView.h>

@class UIView, UILabel;

@interface UIKBTutorialSinglePageView : UIView {

	BOOL _useAlertStyle;
	UIView* _visualDisplayView;
	UILabel* _textTitle;
	UILabel* _textBody;

}

@property (nonatomic,retain) UIView * visualDisplayView;              //@synthesize visualDisplayView=_visualDisplayView - In the implementation block
@property (nonatomic,retain) UILabel * textTitle;                     //@synthesize textTitle=_textTitle - In the implementation block
@property (nonatomic,retain) UILabel * textBody;                      //@synthesize textBody=_textBody - In the implementation block
@property (assign,nonatomic) BOOL useAlertStyle;                      //@synthesize useAlertStyle=_useAlertStyle - In the implementation block
-(UILabel *)textBody;
-(void)layoutSubviews;
-(UILabel *)textTitle;
-(void)configPageView;
-(UIView *)visualDisplayView;
-(id)initWithImageView:(id)arg1 ;
-(void)setVisualDisplayView:(UIView *)arg1 ;
-(void)setUseAlertStyle:(BOOL)arg1 ;
-(void)setTextBody:(UILabel *)arg1 ;
-(BOOL)useAlertStyle;
-(void)setTextTitle:(UILabel *)arg1 ;
@end

