/*
* Generated on Thursday, January 14, 2021 at 2:26:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,readonly) NSURL * irisURL; 
@property (nonatomic,readonly) NSString * localIdentifier; 
@property (nonatomic,readonly) NTKCachedPhoto * cachedPhoto;                             //@synthesize cachedPhoto=_cachedPhoto - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)localIdentifier;
-(BOOL)isPlaying;
-(id<NTKPhotoImageViewDelegate>)delegate;
-(void)setDelegate:(id<NTKPhotoImageViewDelegate>)arg1 ;
-(BOOL)isPhotoIris;
-(void)reset;
-(NSURL *)irisURL;
-(id)initWithFrame:(CGRect)arg1 forDevice:(id)arg2 ;
-(void)interruptPlayback;
-(void)playWithMode:(long long)arg1 ;
-(void)resumeInterruptedPlayback;
-(void)setPhoto:(id)arg1 allowIris:(BOOL)arg2 ;
-(void)prepareToPlayWithMode:(long long)arg1 ;
-(void)_loadMediaAssetView;
-(void)_unloadMediaAssetView;
-(void)mediaAssetViewDidBeginPlaying:(id)arg1 ;
-(void)mediaAssetViewDidEndPlaying:(id)arg1 ;
-(void)pauseWithMode:(long long)arg1 ;
-(NTKCachedPhoto *)cachedPhoto;
@end

