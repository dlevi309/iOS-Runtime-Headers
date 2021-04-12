/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, UILabel, NSLayoutConstraint, NSMutableArray, NSString;

@interface PKContinuityPaymentCardSummaryView : UIView {

	UIImageView* _alertView;
	UILabel* _descriptionView;
	UILabel* _subtitleView;
	NSLayoutConstraint* _textToTrailingConstraint;
	NSLayoutConstraint* _textToAlertConstraint;
	NSMutableArray* _singleLineConstraints;
	NSMutableArray* _subtitleConstraints;
	BOOL _subtitleDescribesError;
	BOOL _showsAlert;
	NSString* _cardDescription;
	NSString* _subtitle;
	UIImageView* _thumbnailView;

}

@property (nonatomic,copy) NSString * cardDescription;                   //@synthesize cardDescription=_cardDescription - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                          //@synthesize subtitle=_subtitle - In the implementation block
@property (assign,nonatomic) BOOL subtitleDescribesError;                //@synthesize subtitleDescribesError=_subtitleDescribesError - In the implementation block
@property (nonatomic,readonly) UIImageView * thumbnailView;              //@synthesize thumbnailView=_thumbnailView - In the implementation block
@property (assign,nonatomic) BOOL showsAlert;                            //@synthesize showsAlert=_showsAlert - In the implementation block
-(NSString *)subtitle;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)updateConstraints;
-(void)_createLabels;
-(void)_createSubviews;
-(UIImageView *)thumbnailView;
-(void)setCardDescription:(NSString *)arg1 ;
-(void)setShowsAlert:(BOOL)arg1 ;
-(void)_prepareImageAndValueConstraints;
-(id)_formatTextForString:(id)arg1 alerting:(BOOL)arg2 ;
-(NSString *)cardDescription;
-(BOOL)subtitleDescribesError;
-(void)setSubtitleDescribesError:(BOOL)arg1 ;
-(BOOL)showsAlert;
@end

