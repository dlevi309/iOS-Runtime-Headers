/*
* Generated on Thursday, January 14, 2021 at 2:24:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKDashboardCollectionViewCell.h>

@class UIActivityIndicatorView, UILabel, NSString;

@interface PKDashboardButtonCollectionViewCell : PKDashboardCollectionViewCell {

	UIActivityIndicatorView* _activityIndicator;
	UILabel* _titleLabel;
	BOOL _showActivity;
	BOOL _enabled;

}

@property (nonatomic,copy) NSString * title; 
@property (assign,nonatomic) BOOL showActivity;              //@synthesize showActivity=_showActivity - In the implementation block
@property (assign,nonatomic) BOOL enabled;                   //@synthesize enabled=_enabled - In the implementation block
-(BOOL)enabled;
-(void)_updateTextColor;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setShowActivity:(BOOL)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)showActivity;
-(void)_resetFonts;
-(void)createSubviews;
-(CGSize)_layoutWithBounds:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(NSString *)title;
@end

