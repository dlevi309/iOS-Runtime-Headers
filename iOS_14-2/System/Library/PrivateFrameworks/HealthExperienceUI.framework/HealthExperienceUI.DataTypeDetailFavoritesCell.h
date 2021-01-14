/*
* Generated on Thursday, January 14, 2021 at 2:24:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthExperienceUI.framework/HealthExperienceUI
*/

#import <HealthExperienceUI/HealthExperienceUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>
#import <libobjc.A.dylib/WDFavoriteDisplayTypesControllerObserver.h>

@class _TtC18HealthExperienceUI11PlatterView, UILabel, UIButton;

@interface HealthExperienceUI.DataTypeDetailFavoritesCell : UICollectionViewCell <WDFavoriteDisplayTypesControllerObserver> {

	 platterView;
	 titleLabel;
	 favoriteButton;
	 favoritesController;
	 parentViewController;
	 item;

}

@property (assign,__weak,nonatomic) _TtC18HealthExperienceUI11PlatterView * platterView; 
@property (assign,__weak,nonatomic) UILabel * titleLabel; 
@property (assign,__weak,nonatomic) UIButton * favoriteButton; 
@property (assign,nonatomic) BOOL highlighted; 
-(void)favoriteButtonToggled:(id)arg1 ;
-(void)favoriteDisplayTypesControllerReady:(id)arg1 ;
-(void)favoriteDisplayTypesControllerDidUpdate:(id)arg1 ;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(_TtC18HealthExperienceUI11PlatterView *)platterView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setPlatterView:(_TtC18HealthExperienceUI11PlatterView *)arg1 ;
-(BOOL)isHighlighted;
-(id)initWithCoder:(id)arg1 ;
-(void)awakeFromNib;
-(UIButton *)favoriteButton;
-(void)setFavoriteButton:(UIButton *)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
@end

