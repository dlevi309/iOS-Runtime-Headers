/*
* Generated on Thursday, January 14, 2021 at 2:25:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)viewDidLoad;
-(id)initWithTitle:(id)arg1 style:(unsigned long long)arg2 ;
-(NSString *)titleString;
-(void)setTitleString:(NSString *)arg1 ;
-(BOOL)isEnabled;
-(void)setStyle:(unsigned long long)arg1 ;
-(unsigned long long)style;
@end

