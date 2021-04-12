/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <AvatarUI/AvatarUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>
#import <libobjc.A.dylib/AVTMSStickerViewDelegate.h>

@protocol AVTStickerCollectionViewCellDelegate;
@class NSUUID, UIImageView, AVTMSStickerView, UILabel;

@interface AVTStickerCollectionViewCell : UICollectionViewCell <AVTMSStickerViewDelegate> {

	BOOL _showPrereleaseSticker;
	BOOL _stickerViewIsAnimating;
	NSUUID* _displaySessionUUID;
	id<AVTStickerCollectionViewCellDelegate> _delegate;
	UIImageView* _imageView;
	AVTMSStickerView* _stickerView;
	UILabel* _prereleaseLabel;
	CGSize _fullImageSize;
	CGRect _clippingRect;

}

@property (nonatomic,readonly) UIImageView * imageView;                                                                   //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,readonly) AVTMSStickerView * stickerView;                                                            //@synthesize stickerView=_stickerView - In the implementation block
@property (nonatomic,readonly) UILabel * prereleaseLabel;                                                                 //@synthesize prereleaseLabel=_prereleaseLabel - In the implementation block
@property (assign,nonatomic) BOOL stickerViewIsAnimating;                                                                 //@synthesize stickerViewIsAnimating=_stickerViewIsAnimating - In the implementation block
@property (assign,nonatomic) CGSize fullImageSize;                                                                        //@synthesize fullImageSize=_fullImageSize - In the implementation block
@property (nonatomic,retain) NSUUID * displaySessionUUID;                                                                 //@synthesize displaySessionUUID=_displaySessionUUID - In the implementation block
@property (assign,nonatomic) BOOL allowsPeel; 
@property (assign,nonatomic) CGRect clippingRect;                                                                         //@synthesize clippingRect=_clippingRect - In the implementation block
@property (assign,nonatomic) BOOL showPrereleaseSticker;                                                                  //@synthesize showPrereleaseSticker=_showPrereleaseSticker - In the implementation block
@property (assign,nonatomic,__weak) id<AVTStickerCollectionViewCellDelegate> delegate;                                    //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<AVTStickerDisclosureValidationDelegate> disclosureValidationDelegate; 
+(id)cellIdentifier;
+(double)imageInsetForWidth:(double)arg1 ;
-(id<AVTStickerCollectionViewCellDelegate>)delegate;
-(void)setDelegate:(id<AVTStickerCollectionViewCellDelegate>)arg1 ;
-(void)prepareForReuse;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIImageView *)imageView;
-(NSUUID *)displaySessionUUID;
-(void)setDisplaySessionUUID:(NSUUID *)arg1 ;
-(AVTMSStickerView *)stickerView;
-(CGRect)clippingRect;
-(void)setClippingRect:(CGRect)arg1 ;
-(BOOL)allowsPeel;
-(void)setAllowsPeel:(BOOL)arg1 ;
-(id<AVTStickerDisclosureValidationDelegate>)disclosureValidationDelegate;
-(void)setDisclosureValidationDelegate:(id<AVTStickerDisclosureValidationDelegate>)arg1 ;
-(BOOL)showPrereleaseSticker;
-(void)setShowPrereleaseSticker:(BOOL)arg1 ;
-(void)updateWithImage:(id)arg1 sticker:(id)arg2 animated:(BOOL)arg3 ;
-(void)setupPrereleaseLabelIfNeeded;
-(UILabel *)prereleaseLabel;
-(CGSize)fullImageSize;
-(CGRect)stickerViewFrameForImageSize:(CGSize)arg1 clippingRect:(CGRect)arg2 ;
-(void)setFullImageSize:(CGSize)arg1 ;
-(CGSize)imageSizeFromURL:(id)arg1 ;
-(BOOL)stickerViewIsAnimating;
-(void)setStickerViewIsAnimating:(BOOL)arg1 ;
-(void)stickerViewDidBeginPeel:(id)arg1 ;
-(void)stickerViewWasTapped:(id)arg1 ;
@end

