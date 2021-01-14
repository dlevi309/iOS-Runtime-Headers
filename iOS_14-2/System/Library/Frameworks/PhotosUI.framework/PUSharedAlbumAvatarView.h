/*
* Generated on Thursday, January 14, 2021 at 2:22:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UIImageView.h>

@class PHAssetCollection, UIGraphicsImageRenderer, UIImage, CAShapeLayer;

@interface PUSharedAlbumAvatarView : UIImageView {

	BOOL _isRTL;
	BOOL _enabled;
	PHAssetCollection* _sharedAlbumCollection;
	UIGraphicsImageRenderer* _imageRenderer;
	UIImage* _firstAvatar;
	UIImage* _secondAvatar;
	UIImage* _thirdAvatar;
	CAShapeLayer* _overlayLayer;

}

@property (nonatomic,retain) UIGraphicsImageRenderer * imageRenderer;                //@synthesize imageRenderer=_imageRenderer - In the implementation block
@property (nonatomic,retain) UIImage * firstAvatar;                                  //@synthesize firstAvatar=_firstAvatar - In the implementation block
@property (nonatomic,retain) UIImage * secondAvatar;                                 //@synthesize secondAvatar=_secondAvatar - In the implementation block
@property (nonatomic,retain) UIImage * thirdAvatar;                                  //@synthesize thirdAvatar=_thirdAvatar - In the implementation block
@property (nonatomic,retain) CAShapeLayer * overlayLayer;                            //@synthesize overlayLayer=_overlayLayer - In the implementation block
@property (readonly) NSObject*<OS_os_log> log; 
@property (nonatomic,retain) PHAssetCollection * sharedAlbumCollection;              //@synthesize sharedAlbumCollection=_sharedAlbumCollection - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                          //@synthesize enabled=_enabled - In the implementation block
+(id)sharedSerialQueue;
-(UIGraphicsImageRenderer *)imageRenderer;
-(CAShapeLayer *)overlayLayer;
-(void)setOverlayLayer:(CAShapeLayer *)arg1 ;
-(void)setImageRenderer:(UIGraphicsImageRenderer *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSObject*<OS_os_log>)log;
-(void)setEnabled:(BOOL)arg1 ;
-(void)prepareForReuse;
-(void)embedInView:(id)arg1 ;
-(void)setSharedAlbumCollection:(id)arg1 forceLayoutSubscriberAvatars:(BOOL)arg2 ;
-(void)accessibilityInvertColorsStatusDidChange:(id)arg1 ;
-(void)setSharedAlbumCollection:(PHAssetCollection *)arg1 ;
-(BOOL)isEnabled;
-(CGSize)_sizeForNumberOfAvatars:(unsigned long long)arg1 ;
-(void)_updateSubscriberAvatars;
-(void)_resetImages;
-(void)_resetViewContents;
-(void)_updateSubscriberAvatarsWithAlbumCollection:(id)arg1 ;
-(void)_resetViewContentsIfNeededForAlbumCollection:(id)arg1 ;
-(void)_setContentsImage:(id)arg1 withShadowPath:(CGPathRef)arg2 forAlbumCollection:(id)arg3 ;
-(void)_setImage:(id)arg1 forIndex:(unsigned long long)arg2 ;
-(void)_requestPersonPhoto:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
-(UIImage *)firstAvatar;
-(void)_requestSubscriberMonogram:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
-(void)setPersonPhoto:(id)arg1 atIndex:(long long)arg2 albumCollection:(id)arg3 ;
-(void)_renderAvatarsForAlbumCollection:(id)arg1 ;
-(PHAssetCollection *)sharedAlbumCollection;
-(void)setFirstAvatar:(UIImage *)arg1 ;
-(UIImage *)secondAvatar;
-(void)setSecondAvatar:(UIImage *)arg1 ;
-(UIImage *)thirdAvatar;
-(void)setThirdAvatar:(UIImage *)arg1 ;
@end

