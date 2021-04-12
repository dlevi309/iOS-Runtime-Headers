/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <UIKitCore/UIViewController.h>

@class NSString, UILabel;

@interface SKUIReviewInAppRatingButtonViewController : UIViewController {

	BOOL _enabled;
	NSString* _titleString;
	unsigned long long _style;
	UILabel* _titleLabel;

}

@property (nonatomic,copy) NSString * titleString;                       //@synthesize titleString=_titleString - In the implementation block
@property (assign,nonatomic) unsigned long long style;                   //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                       //@synthesize titleLabel=_titleLabel - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;              //@synthesize enabled=_enabled - In the implementation block
-(void)setEnabled:(BOOL)arg1 ;
-(unsigned long long)style;
-(void)setStyle:(unsigned long long)arg1 ;
-(BOOL)isEnabled;
-(UILabel *)titleLabel;
-(void)viewDidLoad;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(id)initWithTitle:(id)arg1 style:(unsigned long long)arg2 ;
-(NSString *)titleString;
-(void)setTitleString:(NSString *)arg1 ;
@end

