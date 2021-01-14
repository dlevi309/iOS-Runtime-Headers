/*
* Generated on Thursday, January 14, 2021 at 2:22:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UIImage, UIImageView;

@interface PUReviewScrubberCell : UICollectionViewCell {

	BOOL _favorite;
	BOOL _suggested;
	BOOL _wantsSmallSuggestionIndicators;
	UIImage* _image;
	UIImageView* __thumbnailImageView;
	UIImageView* __checkmarkImageView;
	UIImageView* __suggestedImageView;

}

@property (nonatomic,readonly) UIImageView * _thumbnailImageView;              //@synthesize _thumbnailImageView=__thumbnailImageView - In the implementation block
@property (nonatomic,readonly) UIImageView * _checkmarkImageView;              //@synthesize _checkmarkImageView=__checkmarkImageView - In the implementation block
@property (nonatomic,readonly) UIImageView * _suggestedImageView;              //@synthesize _suggestedImageView=__suggestedImageView - In the implementation block
@property (nonatomic,retain) UIImage * image;                                  //@synthesize image=_image - In the implementation block
@property (assign,getter=isFavorite,nonatomic) BOOL favorite;                  //@synthesize favorite=_favorite - In the implementation block
@property (assign,getter=isSuggested,nonatomic) BOOL suggested;                //@synthesize suggested=_suggested - In the implementation block
@property (assign,nonatomic) BOOL wantsSmallSuggestionIndicators;              //@synthesize wantsSmallSuggestionIndicators=_wantsSmallSuggestionIndicators - In the implementation block
-(void)setFavorite:(BOOL)arg1 ;
-(BOOL)isFavorite;
-(UIImageView *)_thumbnailImageView;
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIImage *)image;
-(void)setFavorite:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_commonPUReviewScrubberCellInitialization;
-(void)setWantsSmallSuggestionIndicators:(BOOL)arg1 ;
-(void)setSuggested:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_updateThumbnailImageView;
-(void)_updateFavoriteView;
-(void)_updateSuggestedView;
-(BOOL)wantsSmallSuggestionIndicators;
-(UIImageView *)_suggestedImageView;
-(void)setSuggested:(BOOL)arg1 ;
-(void)layoutSubviews;
-(UIImageView *)_checkmarkImageView;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isSuggested;
@end

