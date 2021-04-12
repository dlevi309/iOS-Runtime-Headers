/*
* Generated on Thursday, January 14, 2021 at 2:29:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/FeedItemPlugins/AppRecommendations.healthplugin/AppRecommendations
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/SKStoreProductViewControllerDelegate.h>

@class NSString, UIImageView, UILabel;

@interface AppRecommendations.AppRecommendationsTileViewController : UIViewController <SKStoreProductViewControllerDelegate> {

	 context;
	 iconImageView;
	 titleLabel;
	 descriptionLabel;
	 accessoryImageView;
	 useDefaultIcon;
	 appIdentifier;

}

@property (readonly,nonatomic) NSString * description; 
@property (assign,__weak,nonatomic) UIImageView * iconImageView; 
@property (assign,__weak,nonatomic) UILabel * titleLabel; 
@property (assign,__weak,nonatomic) UILabel * descriptionLabel; 
@property (assign,__weak,nonatomic) UIImageView * accessoryImageView; 
-(NSString *)description;
-(void)productViewControllerDidFinish:(id)arg1 ;
-(UILabel *)titleLabel;
-(UIImageView *)iconImageView;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)viewDidLoad;
-(id)initWithCoder:(id)arg1 ;
-(void)setIconImageView:(UIImageView *)arg1 ;
-(void)setDescriptionLabel:(UILabel *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIImageView *)accessoryImageView;
-(UILabel *)descriptionLabel;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)setAccessoryImageView:(UIImageView *)arg1 ;
-(void)openAppStore:(id)arg1 ;
@end

