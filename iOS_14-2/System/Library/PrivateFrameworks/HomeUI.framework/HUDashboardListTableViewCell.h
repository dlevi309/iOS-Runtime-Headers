/*
* Generated on Thursday, January 14, 2021 at 2:24:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <UIKitCore/UITableViewCell.h>

@class NSString, UILabel, UIImageView, UIImage, UIImageSymbolConfiguration, NSArray;

@interface HUDashboardListTableViewCell : UITableViewCell {

	BOOL _isFavorites;
	NSString* _dashboardName;
	UILabel* _dashboardNameLabel;
	UIImageView* _iconView;
	UIImageView* _checkmarkView;
	UIImage* _favoritesImage;
	UIImage* _roomImage;
	UIImage* _checkmarkImage;
	UIImageSymbolConfiguration* _imageConfiguration;
	NSArray* _allConstraints;

}

@property (nonatomic,retain) UILabel * dashboardNameLabel;                                 //@synthesize dashboardNameLabel=_dashboardNameLabel - In the implementation block
@property (nonatomic,retain) UIImageView * iconView;                                       //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,retain) UIImageView * checkmarkView;                                  //@synthesize checkmarkView=_checkmarkView - In the implementation block
@property (nonatomic,retain) UIImage * favoritesImage;                                     //@synthesize favoritesImage=_favoritesImage - In the implementation block
@property (nonatomic,retain) UIImage * roomImage;                                          //@synthesize roomImage=_roomImage - In the implementation block
@property (nonatomic,retain) UIImage * checkmarkImage;                                     //@synthesize checkmarkImage=_checkmarkImage - In the implementation block
@property (nonatomic,retain) UIImageSymbolConfiguration * imageConfiguration;              //@synthesize imageConfiguration=_imageConfiguration - In the implementation block
@property (nonatomic,retain) NSArray * allConstraints;                                     //@synthesize allConstraints=_allConstraints - In the implementation block
@property (nonatomic,copy) NSString * dashboardName;                                       //@synthesize dashboardName=_dashboardName - In the implementation block
@property (assign,nonatomic) BOOL isFavorites;                                             //@synthesize isFavorites=_isFavorites - In the implementation block
-(UIImageView *)checkmarkView;
-(void)setCheckmarkView:(UIImageView *)arg1 ;
-(UIImageSymbolConfiguration *)imageConfiguration;
-(void)setSelected:(BOOL)arg1 ;
-(void)updateConstraints;
-(UIImageView *)iconView;
-(void)setIconView:(UIImageView *)arg1 ;
-(UIImage *)checkmarkImage;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(NSArray *)allConstraints;
-(void)setAllConstraints:(NSArray *)arg1 ;
-(void)setIsFavorites:(BOOL)arg1 ;
-(void)setDashboardName:(NSString *)arg1 ;
-(UILabel *)dashboardNameLabel;
-(void)updateIconView;
-(void)updateCheckmarkView;
-(BOOL)isFavorites;
-(UIImage *)favoritesImage;
-(UIImage *)roomImage;
-(NSString *)dashboardName;
-(void)setDashboardNameLabel:(UILabel *)arg1 ;
-(void)setFavoritesImage:(UIImage *)arg1 ;
-(void)setRoomImage:(UIImage *)arg1 ;
-(void)setCheckmarkImage:(UIImage *)arg1 ;
-(void)setImageConfiguration:(UIImageSymbolConfiguration *)arg1 ;
@end

