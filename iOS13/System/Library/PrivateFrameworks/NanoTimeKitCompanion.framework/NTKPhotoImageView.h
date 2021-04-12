/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CLKMediaAssetViewDelegate.h>

@protocol NTKPhotoImageViewDelegate;
@class CLKDevice, CLKMediaAssetView, NTKPhoto, NTKCachedPhoto, NSURL, NSString;

@interface NTKPhotoImageView : UIView <CLKMediaAssetViewDelegate> {

	CLKDevice* _device;
	CLKMediaAssetView* _mediaAssetView;
	NTKPhoto* _photo;
	id<NTKPhotoImageViewDelegate> _delegate;
	NTKCachedPhoto* _cachedPhoto;

}

@property (assign,nonatomic,__weak) id<NTKPhotoImageViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL isPhotoIris; 
@property (nonatomic,readonly) BOOL isIrisVideoHidden; 
@property (nonatomic,readonly) NSURL * irisURL; 
@property (nonatomic,readonly) NSString * localIdentifier; 
@property (nonatomic,readonly) NTKCachedPhoto * cachedPhoto;                             //@synthesize cachedPhoto=_cachedPhoto - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<NTKPhotoImageViewDelegate>)delegate;
-(void)setDelegate:(id<NTKPhotoImageViewDelegate>)arg1 ;
-(BOOL)isPlaying;
-(NSString *)localIdentifier;
-(BOOL)isPhotoIris;
-(void)mediaAssetViewDidEndPlaying:(id)arg1 ;
-(void)mediaAssetViewDidBeginPlaying:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 forDevice:(id)arg2 ;
-(void)interruptPlayback;
-(void)resumeInterruptedPlayback;
-(void)prepareToPlayWithMode:(long long)arg1 ;
-(BOOL)isIrisVideoHidden;
-(NSURL *)irisURL;
-(void)playWithMode:(long long)arg1 ;
-(void)pauseWithMode:(long long)arg1 ;
-(void)setPhoto:(id)arg1 allowIris:(BOOL)arg2 ;
-(NTKCachedPhoto *)cachedPhoto;
@end

