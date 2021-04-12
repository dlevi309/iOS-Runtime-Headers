/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setEnabled:(BOOL)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)_updateTextColor;
-(BOOL)showActivity;
-(CGSize)_layoutWithBounds:(CGRect)arg1 ;
-(void)setShowActivity:(BOOL)arg1 ;
-(void)createSubviews;
@end

