/*
* Generated on Thursday, January 14, 2021 at 2:23:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <AvatarUI/AvatarUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class NSUUID, AVTUIAnimatingImageView, UIButton, CAShapeLayer;

@interface AVTFunCamAvatarPickerCollectionViewCell : UICollectionViewCell {

	BOOL _selectionVisible;
	BOOL _roundImageCorners;
	BOOL _showsTitle;
	NSUUID* _displaySessionUUID;
	/*^block*/id _imageInsetProvider;
	long long _imageContentMode;
	AVTUIAnimatingImageView* _imageView;
	UIButton* _accessoryButton;
	CAShapeLayer* _selectionLayer;
	CGSize _engagedSize;

}

@property (nonatomic,readonly) AVTUIAnimatingImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIButton * accessoryButton;                         //@synthesize accessoryButton=_accessoryButton - In the implementation block
@property (nonatomic,readonly) CAShapeLayer * selectionLayer;                    //@synthesize selectionLayer=_selectionLayer - In the implementation block
@property (nonatomic,retain) NSUUID * displaySessionUUID;                        //@synthesize displaySessionUUID=_displaySessionUUID - In the implementation block
@property (nonatomic,copy) id imageInsetProvider;                                //@synthesize imageInsetProvider=_imageInsetProvider - In the implementation block
@property (assign,nonatomic) long long imageContentMode;                         //@synthesize imageContentMode=_imageContentMode - In the implementation block
@property (assign,nonatomic) BOOL selectionVisible;                              //@synthesize selectionVisible=_selectionVisible - In the implementation block
@property (assign,nonatomic) BOOL roundImageCorners;                             //@synthesize roundImageCorners=_roundImageCorners - In the implementation block
@property (assign,nonatomic) BOOL showsTitle;                                    //@synthesize showsTitle=_showsTitle - In the implementation block
@property (assign,nonatomic) CGSize engagedSize;                                 //@synthesize engagedSize=_engagedSize - In the implementation block
+(id)cellIdentifier;
+(CGPathRef)selectionPathInBounds:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(AVTUIAnimatingImageView *)imageView;
-(void)setSelectionVisible:(BOOL)arg1 ;
-(void)setEngagedSize:(CGSize)arg1 ;
-(void)setImageZoomFactor:(double)arg1 ;
-(void)setImageInsetProvider:(id)arg1 ;
-(void)setRoundImageCorners:(BOOL)arg1 ;
-(void)updateWithTintColor:(id)arg1 ;
-(void)updateWithImage:(id)arg1 animated:(BOOL)arg2 ;
-(void)setImageContentMode:(long long)arg1 ;
-(long long)imageContentMode;
-(void)setAccessoryButton:(UIButton *)arg1 ;
-(NSUUID *)displaySessionUUID;
-(void)setDisplaySessionUUID:(NSUUID *)arg1 ;
-(CAShapeLayer *)selectionLayer;
-(void)setSelected:(BOOL)arg1 ;
-(void)prepareForReuse;
-(BOOL)showsTitle;
-(void)layoutSubviews;
-(CGSize)engagedSize;
-(void)updateSelectionLayer;
-(id)imageInsetProvider;
-(BOOL)selectionVisible;
-(BOOL)roundImageCorners;
-(void)setShowsTitle:(BOOL)arg1 ;
-(UIButton *)accessoryButton;
@end

