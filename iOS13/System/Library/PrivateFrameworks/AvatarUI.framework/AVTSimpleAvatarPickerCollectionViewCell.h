/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)prepareForReuse;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(AVTUIAnimatingImageView *)imageView;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(NSUUID *)displaySessionUUID;
-(void)setDisplaySessionUUID:(NSUUID *)arg1 ;
-(UIView *)selectionLayer;
-(void)updateWithImage:(id)arg1 animated:(BOOL)arg2 ;
-(void)updateSelectionLayerOpacityAnimated:(BOOL)arg1 ;
-(unsigned long long)imageInsetSize;
-(BOOL)showSelectedState;
-(BOOL)shouldShowSelectionLayer;
-(void)updateHighlightedState:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setImageInsetSize:(unsigned long long)arg1 ;
-(void)setShowSelectedState:(BOOL)arg1 ;
@end

