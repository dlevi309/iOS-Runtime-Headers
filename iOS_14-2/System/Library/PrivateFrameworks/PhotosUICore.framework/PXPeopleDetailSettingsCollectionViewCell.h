/*
* Generated on Thursday, January 14, 2021 at 2:22:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class NSNumberFormatter, UIImageView, NSString, UILabel, UIView, PXRoundedCornerOverlayView, UIImage;

@interface PXPeopleDetailSettingsCollectionViewCell : UICollectionViewCell {

	NSNumberFormatter* _quantityNumberFormatter;
	CGRect _unitRect;
	BOOL _isFavorite;
	BOOL _isReordering;
	UIImageView* _avatarView;
	NSString* _name;
	unsigned long long _photoQuantity;
	double _textAlpha;
	UILabel* _quantityLabel;
	UILabel* _nameLabel;
	UIView* _actionIndicatorView;
	UIView* _selectionView;
	PXRoundedCornerOverlayView* _roundCornerOverlay;

}

@property (nonatomic,retain) UILabel * nameLabel;                                                    //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,retain) UIView * actionIndicatorView;                                           //@synthesize actionIndicatorView=_actionIndicatorView - In the implementation block
@property (nonatomic,retain) UIView * selectionView;                                                 //@synthesize selectionView=_selectionView - In the implementation block
@property (nonatomic,retain) PXRoundedCornerOverlayView * roundCornerOverlay;                        //@synthesize roundCornerOverlay=_roundCornerOverlay - In the implementation block
@property (nonatomic,readonly) UIImageView * avatarView;                                             //@synthesize avatarView=_avatarView - In the implementation block
@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,copy) NSString * name;                                                          //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) unsigned long long photoQuantity;                                       //@synthesize photoQuantity=_photoQuantity - In the implementation block
@property (assign,getter=isActionIndicatorHidden,nonatomic) BOOL actionIndicatorHidden; 
@property (assign,nonatomic) double textAlpha;                                                       //@synthesize textAlpha=_textAlpha - In the implementation block
@property (assign,nonatomic) BOOL isFavorite;                                                        //@synthesize isFavorite=_isFavorite - In the implementation block
@property (nonatomic,retain) UILabel * quantityLabel;                                                //@synthesize quantityLabel=_quantityLabel - In the implementation block
@property (assign,setter=setReordering:,nonatomic) BOOL isReordering;                                //@synthesize isReordering=_isReordering - In the implementation block
+(double)preferredHeightForWidth:(double)arg1 forAvatarPercentage:(double)arg2 withSizeClass:(long long)arg3 isFavorite:(BOOL)arg4 ;
-(BOOL)isFavorite;
-(void)contentSizeCategoryDidChangeNotification:(id)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setSelectionView:(UIView *)arg1 ;
-(void)setImage:(id)arg1 normalizedFaceRect:(CGRect)arg2 ;
-(void)setPhotoQuantity:(unsigned long long)arg1 ;
-(void)setActionIndicatorHidden:(BOOL)arg1 ;
-(BOOL)isActionIndicatorHidden;
-(double)avatarCenterYOffset;
-(id)_placeHolderColor;
-(unsigned long long)photoQuantity;
-(UILabel *)quantityLabel;
-(void)setQuantityLabel:(UILabel *)arg1 ;
-(UIView *)actionIndicatorView;
-(void)setActionIndicatorView:(UIView *)arg1 ;
-(PXRoundedCornerOverlayView *)roundCornerOverlay;
-(void)setRoundCornerOverlay:(PXRoundedCornerOverlayView *)arg1 ;
-(double)textAlpha;
-(void)setIsFavorite:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)prepareForReuse;
-(UIImageView *)avatarView;
-(UIImage *)image;
-(NSString *)name;
-(void)layoutSubviews;
-(BOOL)isReordering;
-(UIView *)selectionView;
-(void)setReordering:(BOOL)arg1 ;
-(void)setTextAlpha:(double)arg1 ;
-(void)_updateType;
-(void)setName:(NSString *)arg1 ;
-(UILabel *)nameLabel;
-(long long)_preferredSizeClass;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setNameLabel:(UILabel *)arg1 ;
-(void)dealloc;
@end

