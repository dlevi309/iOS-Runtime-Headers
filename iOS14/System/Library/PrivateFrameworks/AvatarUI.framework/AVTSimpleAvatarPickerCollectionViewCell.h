/*
* Generated on Thursday, January 14, 2021 at 2:23:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <AvatarUI/AvatarUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class NSUUID, UIView, AVTUIAnimatingImageView;

@interface AVTSimpleAvatarPickerCollectionViewCell : UICollectionViewCell {

	BOOL _showSelectedState;
	NSUUID* _displaySessionUUID;
	unsigned long long _imageInsetSize;
	UIView* _selectionLayer;
	AVTUIAnimatingImageView* _imageView;

}

@property (nonatomic,readonly) UIView * selectionLayer;                          //@synthesize selectionLayer=_selectionLayer - In the implementation block
@property (nonatomic,readonly) AVTUIAnimatingImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) NSUUID * displaySessionUUID;                        //@synthesize displaySessionUUID=_displaySessionUUID - In the implementation block
@property (assign,nonatomic) unsigned long long imageInsetSize;                  //@synthesize imageInsetSize=_imageInsetSize - In the implementation block
@property (assign,nonatomic) BOOL showSelectedState;                             //@synthesize showSelectedState=_showSelectedState - In the implementation block
+(id)cellIdentifier;
+(double)imageInsetForInsetSize:(unsigned long long)arg1 ;
+(CGPathRef)selectionPathInBounds:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(AVTUIAnimatingImageView *)imageView;
-(void)updateWithImage:(id)arg1 animated:(BOOL)arg2 ;
-(NSUUID *)displaySessionUUID;
-(void)setDisplaySessionUUID:(NSUUID *)arg1 ;
-(UIView *)selectionLayer;
-(void)setSelected:(BOOL)arg1 ;
-(void)prepareForReuse;
-(void)updateSelectionLayerOpacityAnimated:(BOOL)arg1 ;
-(unsigned long long)imageInsetSize;
-(BOOL)shouldShowSelectionLayer;
-(void)updateHighlightedState:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setImageInsetSize:(unsigned long long)arg1 ;
-(void)layoutSubviews;
-(void)setShowSelectedState:(BOOL)arg1 ;
-(BOOL)showSelectedState;
-(void)setHighlighted:(BOOL)arg1 ;
@end

