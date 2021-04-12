/*
* Generated on Thursday, January 14, 2021 at 2:22:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>
#import <libobjc.A.dylib/PXUIAssetBadgeViewDelegate.h>

@protocol PXPeopleCollectionViewCellDelegate;
@class UIImageView, NSString, UILabel, UIView, PXRoundedCornerOverlayView, UIButton, UIVisualEffectView, UIImage;

@interface PXPeopleCollectionViewCell : UICollectionViewCell <PXUIAssetBadgeViewDelegate> {

	CGRect _unitRect;
	BOOL _titleUsesAllCaps;
	BOOL _favorite;
	BOOL _isReordering;
	BOOL _ppt_fullImageLoaded;
	BOOL _blurApplied;
	UIImageView* _avatarView;
	NSString* _name;
	double _textAlpha;
	unsigned long long _selectionStyle;
	id<PXPeopleCollectionViewCellDelegate> _delegate;
	UILabel* _nameLabel;
	UIView* _selectionView;
	PXRoundedCornerOverlayView* _roundCornerOverlay;
	UIButton* _favoriteBadge;
	UIView* _highlightOverlayView;
	UIView* _checkmarkView;
	UIView* _gradientView;
	UIImageView* _mirrorView;
	UIVisualEffectView* _blurView;
	CGSize _avatarSize;

}

@property (nonatomic,retain) UILabel * nameLabel;                                                 //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,retain) UIView * selectionView;                                              //@synthesize selectionView=_selectionView - In the implementation block
@property (nonatomic,retain) PXRoundedCornerOverlayView * roundCornerOverlay;                     //@synthesize roundCornerOverlay=_roundCornerOverlay - In the implementation block
@property (nonatomic,retain) UIButton * favoriteBadge;                                            //@synthesize favoriteBadge=_favoriteBadge - In the implementation block
@property (nonatomic,retain) UIView * highlightOverlayView;                                       //@synthesize highlightOverlayView=_highlightOverlayView - In the implementation block
@property (nonatomic,retain) UIView * checkmarkView;                                              //@synthesize checkmarkView=_checkmarkView - In the implementation block
@property (nonatomic,retain) UIView * gradientView;                                               //@synthesize gradientView=_gradientView - In the implementation block
@property (nonatomic,retain) UIImageView * mirrorView;                                            //@synthesize mirrorView=_mirrorView - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * blurView;                                       //@synthesize blurView=_blurView - In the implementation block
@property (assign,nonatomic) BOOL blurApplied;                                                    //@synthesize blurApplied=_blurApplied - In the implementation block
@property (assign,nonatomic) CGSize avatarSize;                                                   //@synthesize avatarSize=_avatarSize - In the implementation block
@property (nonatomic,readonly) UIImageView * avatarView;                                          //@synthesize avatarView=_avatarView - In the implementation block
@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,copy) NSString * name;                                                       //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) double textAlpha;                                                    //@synthesize textAlpha=_textAlpha - In the implementation block
@property (assign,nonatomic) BOOL titleUsesAllCaps;                                               //@synthesize titleUsesAllCaps=_titleUsesAllCaps - In the implementation block
@property (assign,getter=isFavorite,nonatomic) BOOL favorite;                                     //@synthesize favorite=_favorite - In the implementation block
@property (assign,setter=setReordering:,nonatomic) BOOL isReordering;                             //@synthesize isReordering=_isReordering - In the implementation block
@property (assign,nonatomic) unsigned long long selectionStyle;                                   //@synthesize selectionStyle=_selectionStyle - In the implementation block
@property (assign,nonatomic,__weak) id<PXPeopleCollectionViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL ppt_fullImageLoaded;                                            //@synthesize ppt_fullImageLoaded=_ppt_fullImageLoaded - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setFavorite:(BOOL)arg1 ;
-(BOOL)isFavorite;
-(void)setBlurView:(UIVisualEffectView *)arg1 ;
-(UIVisualEffectView *)blurView;
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIView *)checkmarkView;
-(void)setCheckmarkView:(UIView *)arg1 ;
-(void)setSelectionView:(UIView *)arg1 ;
-(id<PXPeopleCollectionViewCellDelegate>)delegate;
-(void)setImage:(id)arg1 normalizedFaceRect:(CGRect)arg2 ;
-(CGSize)avatarSize;
-(PXRoundedCornerOverlayView *)roundCornerOverlay;
-(void)setRoundCornerOverlay:(PXRoundedCornerOverlayView *)arg1 ;
-(double)textAlpha;
-(UIImageView *)mirrorView;
-(void)setSelected:(BOOL)arg1 ;
-(void)prepareForReuse;
-(UIImageView *)avatarView;
-(UIImage *)image;
-(void)setTitleUsesAllCaps:(BOOL)arg1 ;
-(void)setBlurApplied:(BOOL)arg1 ;
-(CGSize)_avatarSizeForImageSize:(CGSize)arg1 ;
-(void)_favoriteBadgePressed:(id)arg1 ;
-(void)_updateTitleAndFavoriteBadgeForLayoutChange;
-(id)_stretchableGradientImageWithSize:(CGSize)arg1 scale:(double)arg2 gradientColor:(id)arg3 ;
-(BOOL)titleUsesAllCaps;
-(BOOL)ppt_fullImageLoaded;
-(void)setPpt_fullImageLoaded:(BOOL)arg1 ;
-(UIButton *)favoriteBadge;
-(void)setFavoriteBadge:(UIButton *)arg1 ;
-(UIView *)highlightOverlayView;
-(void)setHighlightOverlayView:(UIView *)arg1 ;
-(void)setMirrorView:(UIImageView *)arg1 ;
-(BOOL)blurApplied;
-(NSString *)name;
-(void)setDelegate:(id<PXPeopleCollectionViewCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)setAvatarSize:(CGSize)arg1 ;
-(BOOL)isReordering;
-(UIView *)selectionView;
-(void)setReordering:(BOOL)arg1 ;
-(void)setTextAlpha:(double)arg1 ;
-(void)_updateType;
-(void)setSelectionStyle:(unsigned long long)arg1 ;
-(UIView *)gradientView;
-(void)setName:(NSString *)arg1 ;
-(void)setGradientView:(UIView *)arg1 ;
-(UILabel *)nameLabel;
-(long long)_preferredSizeClass;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setNameLabel:(UILabel *)arg1 ;
-(unsigned long long)selectionStyle;
-(void)_updateSelection;
@end

