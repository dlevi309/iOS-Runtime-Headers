/*
* Generated on Thursday, January 14, 2021 at 2:27:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
@class PVColorSpace;

@interface JTVideoMediaUtils : NSObject {

	BOOL _cachedAssetInformationValid;
	BOOL _cacheWillDieDuringLoad;
	float _cachedFrameRate;
	unsigned _cachedCodec4cc;
	int _cachedDurationAt30fps;
	PVColorSpace* _cachedColorSpace;
	unsigned long long _cachedVideoTrackCount;
	unsigned long long _cachedAudioTrackCount;
	CGSize _cachedNaturalSize;
	SCD_Struct_JF3 _cachedPreciseAssetDuration;
	CGAffineTransform _cachedTransform;

}

@property (assign,nonatomic) BOOL cachedAssetInformationValid;                       //@synthesize cachedAssetInformationValid=_cachedAssetInformationValid - In the implementation block
@property (assign,nonatomic) CGSize cachedNaturalSize;                               //@synthesize cachedNaturalSize=_cachedNaturalSize - In the implementation block
@property (assign,nonatomic) float cachedFrameRate;                                  //@synthesize cachedFrameRate=_cachedFrameRate - In the implementation block
@property (assign,nonatomic) CGAffineTransform cachedTransform;                      //@synthesize cachedTransform=_cachedTransform - In the implementation block
@property (assign,nonatomic) unsigned cachedCodec4cc;                                //@synthesize cachedCodec4cc=_cachedCodec4cc - In the implementation block
@property (nonatomic,retain) PVColorSpace * cachedColorSpace;                        //@synthesize cachedColorSpace=_cachedColorSpace - In the implementation block
@property (assign,nonatomic) int cachedDurationAt30fps;                              //@synthesize cachedDurationAt30fps=_cachedDurationAt30fps - In the implementation block
@property (assign,nonatomic) SCD_Struct_JF3 cachedPreciseAssetDuration;              //@synthesize cachedPreciseAssetDuration=_cachedPreciseAssetDuration - In the implementation block
@property (assign,nonatomic) unsigned long long cachedVideoTrackCount;               //@synthesize cachedVideoTrackCount=_cachedVideoTrackCount - In the implementation block
@property (assign,nonatomic) unsigned long long cachedAudioTrackCount;               //@synthesize cachedAudioTrackCount=_cachedAudioTrackCount - In the implementation block
@property (assign,nonatomic) BOOL cacheWillDieDuringLoad;                            //@synthesize cacheWillDieDuringLoad=_cacheWillDieDuringLoad - In the implementation block
-(id)colorSpace;
-(CGAffineTransform)transform;
-(float)frameRate;
-(BOOL)cachedAssetInformationValid;
-(void)setCachedAssetInformationValid:(BOOL)arg1 ;
-(void)setCachedVideoTrackCount:(unsigned long long)arg1 ;
-(void)setCachedNaturalSize:(CGSize)arg1 ;
-(void)setCachedFrameRate:(float)arg1 ;
-(void)setCachedTransform:(CGAffineTransform)arg1 ;
-(unsigned long long)cachedVideoTrackCount;
-(SCD_Struct_JF3)cachedPreciseAssetDuration;
-(void)setCachedPreciseAssetDuration:(SCD_Struct_JF3)arg1 ;
-(void)setCachedCodec4cc:(unsigned)arg1 ;
-(void)setCachedColorSpace:(PVColorSpace *)arg1 ;
-(void)setCachedDurationAt30fps:(int)arg1 ;
-(void)setCachedAudioTrackCount:(unsigned long long)arg1 ;
-(unsigned long long)cachedAudioTrackCount;
-(void)setCacheWillDieDuringLoad:(BOOL)arg1 ;
-(BOOL)cacheWillDieDuringLoad;
-(float)cachedFrameRate;
-(int)cachedDurationAt30fps;
-(unsigned)cachedCodec4cc;
-(CGSize)cachedNaturalSize;
-(BOOL)isUnsupportedAudio;
-(CGAffineTransform)cachedTransform;
-(PVColorSpace *)cachedColorSpace;
-(void)cacheTrackInformationWithAVAsset:(id)arg1 ;
-(void)requestAVAssetAsyncWithAsset:(id)arg1 needsDerivativeMedia:(BOOL)arg2 frameRate:(float)arg3 completion:(/*^block*/id)arg4 ;
-(int)durationAt30fpsWithAssetDuration:(double)arg1 ;
-(BOOL)isOriginalHEVC4k;
-(BOOL)hasAudibleCharacteristicWithIsMissing:(BOOL)arg1 ;
-(CGSize)naturalSizeWithIsMissing:(BOOL)arg1 asset:(id)arg2 ;
-(BOOL)hasVideoTracks;
-(BOOL)hasAudioTracks;
-(void)invalidateCachedAssetInformation;
@end

