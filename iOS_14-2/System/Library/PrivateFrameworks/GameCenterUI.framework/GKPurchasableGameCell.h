/*
* Generated on Thursday, January 14, 2021 at 2:23:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GKBaseGameCell.h>

@class GKStoreItemInternal, UILabel, GKRatingView;

@interface GKPurchasableGameCell : GKBaseGameCell {

	float _capturedRating;
	GKStoreItemInternal* _storeItem;
	UILabel* _developerLabel;
	UILabel* _priceLabel;
	GKRatingView* _ratingStarsView;
	UILabel* _numberRatings;

}

@property (nonatomic,retain) GKStoreItemInternal * storeItem;              //@synthesize storeItem=_storeItem - In the implementation block
@property (nonatomic,retain) UILabel * developerLabel;                     //@synthesize developerLabel=_developerLabel - In the implementation block
@property (nonatomic,retain) UILabel * priceLabel;                         //@synthesize priceLabel=_priceLabel - In the implementation block
@property (nonatomic,retain) GKRatingView * ratingStarsView;               //@synthesize ratingStarsView=_ratingStarsView - In the implementation block
@property (assign,nonatomic) float capturedRating;                         //@synthesize capturedRating=_capturedRating - In the implementation block
@property (nonatomic,retain) UILabel * numberRatings;                      //@synthesize numberRatings=_numberRatings - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setCapturedRating:(float)arg1 ;
-(float)capturedRating;
-(void)setStoreItem:(GKStoreItemInternal *)arg1 ;
-(UILabel *)developerLabel;
-(void)setDeveloperLabel:(UILabel *)arg1 ;
-(UILabel *)priceLabel;
-(void)setPriceLabel:(UILabel *)arg1 ;
-(GKRatingView *)ratingStarsView;
-(void)setRatingStarsView:(GKRatingView *)arg1 ;
-(UILabel *)numberRatings;
-(void)setNumberRatings:(UILabel *)arg1 ;
-(BOOL)canRemoveItem;
-(void)prepareForReuse;
-(void)didUpdateModel;
-(void)establishConstraints;
-(GKStoreItemInternal *)storeItem;
-(void)dealloc;
@end

