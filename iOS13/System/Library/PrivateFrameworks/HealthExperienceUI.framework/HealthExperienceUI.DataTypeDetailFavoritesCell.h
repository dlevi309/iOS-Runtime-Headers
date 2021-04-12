/*
* Generated on Monday, March 1, 2021 at 2:34:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)favoriteDisplayTypesControllerReady:(id)arg1 ;
-(void)favoriteDisplayTypesControllerDidUpdate:(id)arg1 ;
-(void)favoriteButtonToggled:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)titleLabel;
-(BOOL)isHighlighted;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)awakeFromNib;
-(void)setPlatterView:(_TtC18HealthExperienceUI11PlatterView *)arg1 ;
-(_TtC18HealthExperienceUI11PlatterView *)platterView;
-(UIButton *)favoriteButton;
-(void)setFavoriteButton:(UIButton *)arg1 ;
@end

