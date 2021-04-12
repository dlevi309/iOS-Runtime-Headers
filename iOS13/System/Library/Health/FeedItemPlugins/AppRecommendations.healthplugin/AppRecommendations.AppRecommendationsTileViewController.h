/*
* Generated on Monday, March 1, 2021 at 2:35:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/FeedItemPlugins/AppRecommendations.healthplugin/AppRecommendations
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/SKStoreProductViewControllerDelegate.h>

@class UIImageView, UILabel;

@interface AppRecommendations.AppRecommendationsTileViewController : UIViewController <SKStoreProductViewControllerDelegate> {

	 context;
	 iconImageView;
	 titleLabel;
	 descriptionLabel;
	 accessoryImageView;
	 useDefaultIcon;
	 appIdentifier;

}

@property (assign,__weak,nonatomic) UIImageView * iconImageView; 
@property (assign,__weak,nonatomic) UILabel * titleLabel; 
@property (assign,__weak,nonatomic) UILabel * descriptionLabel; 
@property (assign,__weak,nonatomic) UIImageView * accessoryImageView; 
-(void)productViewControllerDidFinish:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(UILabel *)titleLabel;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setDescriptionLabel:(UILabel *)arg1 ;
-(UILabel *)descriptionLabel;
-(UIImageView *)iconImageView;
-(void)setIconImageView:(UIImageView *)arg1 ;
-(UIImageView *)accessoryImageView;
-(void)setAccessoryImageView:(UIImageView *)arg1 ;
-(void)openAppStore:(id)arg1 ;
@end

