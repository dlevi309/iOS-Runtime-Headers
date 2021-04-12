/*
* Generated on Thursday, January 14, 2021 at 2:26:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Messages.framework/Messages
*/

#import <Messages/Messages-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/CKAnimationTimerObserver.h>

@class MSSticker, NSError, UIImage, UIImageView, CKAnimatedImage, CKImageData, NSArray, UITapGestureRecognizer, UILongPressGestureRecognizer, NSString;

@interface MSStickerView : UIView <UIGestureRecognizerDelegate, CKAnimationTimerObserver> {

	BOOL _initialLayoutComplete;
	BOOL _animating;
	BOOL _isPeeled;
	MSSticker* _sticker;
	double _animationDuration;
	NSError* _stickerError;
	UIImage* _stickerImage;
	UIImageView* _imageView;
	CKAnimatedImage* _image;
	CKImageData* _imageData;
	NSArray* _frames;
	UITapGestureRecognizer* _tapRecognizer;
	UILongPressGestureRecognizer* _longPressRecognizer;

}

@property (nonatomic,retain) NSError * stickerError;                                            //@synthesize stickerError=_stickerError - In the implementation block
@property (nonatomic,retain) UIImage * stickerImage;                                            //@synthesize stickerImage=_stickerImage - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                                           //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) CKAnimatedImage * image;                                           //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) CKImageData * imageData;                                           //@synthesize imageData=_imageData - In the implementation block
@property (nonatomic,retain) NSArray * frames;                                                  //@synthesize frames=_frames - In the implementation block
@property (assign,nonatomic) BOOL initialLayoutComplete;                                        //@synthesize initialLayoutComplete=_initialLayoutComplete - In the implementation block
@property (nonatomic,readonly) UITapGestureRecognizer * tapRecognizer;                          //@synthesize tapRecognizer=_tapRecognizer - In the implementation block
@property (nonatomic,readonly) UILongPressGestureRecognizer * longPressRecognizer;              //@synthesize longPressRecognizer=_longPressRecognizer - In the implementation block
@property (assign,nonatomic) BOOL animating;                                                    //@synthesize animating=_animating - In the implementation block
@property (nonatomic,readonly) BOOL isAnimated; 
@property (assign,nonatomic) double animationDuration;                                          //@synthesize animationDuration=_animationDuration - In the implementation block
@property (assign,nonatomic) BOOL isPeeled;                                                     //@synthesize isPeeled=_isPeeled - In the implementation block
@property (nonatomic,retain) MSSticker * sticker;                                               //@synthesize sticker=_sticker - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setImageView:(UIImageView *)arg1 ;
-(BOOL)isAnimated;
-(id)accessibilityLabel;
-(double)animationDuration;
-(void)setImage:(CKAnimatedImage *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setAnimating:(BOOL)arg1 ;
-(void)animationTimerFired:(unsigned long long)arg1 ;
-(UILongPressGestureRecognizer *)longPressRecognizer;
-(NSArray *)frames;
-(void)setFrames:(NSArray *)arg1 ;
-(UIImageView *)imageView;
-(MSSticker *)sticker;
-(BOOL)animating;
-(BOOL)initialLayoutComplete;
-(void)_prepareForReuse;
-(CKAnimatedImage *)image;
-(void)handleLongPress:(id)arg1 ;
-(void)_setImage:(id)arg1 ;
-(void)layoutSubviews;
-(void)setSticker:(MSSticker *)arg1 ;
-(void)didMoveToWindow;
-(void)setInitialLayoutComplete:(BOOL)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CKImageData *)imageData;
-(void)startAnimating;
-(id)initWithCoder:(id)arg1 ;
-(void)stopAnimating;
-(void)handleTap:(id)arg1 ;
-(UITapGestureRecognizer *)tapRecognizer;
-(BOOL)isAnimating;
-(void)setImageData:(CKImageData *)arg1 ;
-(void)prepareForSnapshotting;
-(void)dealloc;
-(void)updateAnimationTimerObserving;
-(void)setAnimationDuration:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 sticker:(id)arg2 ;
-(BOOL)isPeeled;
-(void)_stickerPreviewCachePreviewDidChange:(id)arg1 ;
-(void)_configureStickerView;
-(void)setIsPeeled:(BOOL)arg1 ;
-(void)setStickerError:(NSError *)arg1 ;
-(void)setStickerImage:(UIImage *)arg1 ;
-(void)_loadSticker;
-(void)_updateStickerView;
-(void)_loadAnimatedStickerfIfNecessary;
-(UIImage *)stickerImage;
-(void)stageSticker;
-(void)_swapWithOutlineImage;
-(id)_stickerSendManager;
-(void)_resetPeel;
-(NSError *)stickerError;
@end

