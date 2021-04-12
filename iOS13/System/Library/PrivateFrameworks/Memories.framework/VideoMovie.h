/*
* Generated on Monday, March 1, 2021 at 2:35:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Memories/Memories-Structs.h>
#import <Memories/Movie.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL, AVAsset;

@interface VideoMovie : Movie <NSCoding, NSCopying> {

	BOOL _audioProxyExists;
	BOOL _cachedAssetInformationValid;
	BOOL _cacheMovieIsPlayable;
	BOOL _cacheWillDieDuringLoad;
	float _cachedFrameRate;
	unsigned _cachedCodec4cc;
	int _cachedDuration;
	NSURL* _audioProxyURL;
	unsigned long long _cachedVideoTrackCount;
	unsigned long long _cachedAudioTrackCount;
	unsigned long long _cachedAudioTrackChannels;
	AVAsset* _weakAVAsset;
	CGSize _cachedNaturalSize;
	CGSize _cachedEncodedPixelSize;
	SCD_Struct_PM5 _cachedPreciseAssetDuration;
	CGAffineTransform _cachedTransform;

}

@property (nonatomic,readonly) CGSize naturalSize; 
@property (nonatomic,readonly) CGAffineTransform transform; 
@property (nonatomic,readonly) float frameRate; 
@property (assign,nonatomic) CGSize cachedNaturalSize;                                 //@synthesize cachedNaturalSize=_cachedNaturalSize - In the implementation block
@property (assign,nonatomic) CGSize cachedEncodedPixelSize;                            //@synthesize cachedEncodedPixelSize=_cachedEncodedPixelSize - In the implementation block
@property (assign,nonatomic) float cachedFrameRate;                                    //@synthesize cachedFrameRate=_cachedFrameRate - In the implementation block
@property (assign,nonatomic) CGAffineTransform cachedTransform;                        //@synthesize cachedTransform=_cachedTransform - In the implementation block
@property (assign,nonatomic) unsigned cachedCodec4cc;                                  //@synthesize cachedCodec4cc=_cachedCodec4cc - In the implementation block
@property (assign,nonatomic) int cachedDuration;                                       //@synthesize cachedDuration=_cachedDuration - In the implementation block
@property (assign,nonatomic) SCD_Struct_PM5 cachedPreciseAssetDuration;                //@synthesize cachedPreciseAssetDuration=_cachedPreciseAssetDuration - In the implementation block
@property (assign,nonatomic) unsigned long long cachedVideoTrackCount;                 //@synthesize cachedVideoTrackCount=_cachedVideoTrackCount - In the implementation block
@property (assign,nonatomic) unsigned long long cachedAudioTrackCount;                 //@synthesize cachedAudioTrackCount=_cachedAudioTrackCount - In the implementation block
@property (assign,nonatomic) unsigned long long cachedAudioTrackChannels;              //@synthesize cachedAudioTrackChannels=_cachedAudioTrackChannels - In the implementation block
@property (assign,nonatomic) BOOL cachedAssetInformationValid;                         //@synthesize cachedAssetInformationValid=_cachedAssetInformationValid - In the implementation block
@property (assign,nonatomic) BOOL cacheMovieIsPlayable;                                //@synthesize cacheMovieIsPlayable=_cacheMovieIsPlayable - In the implementation block
@property (assign,nonatomic) BOOL cacheWillDieDuringLoad;                              //@synthesize cacheWillDieDuringLoad=_cacheWillDieDuringLoad - In the implementation block
@property (nonatomic,retain) AVAsset * weakAVAsset;                                    //@synthesize weakAVAsset=_weakAVAsset - In the implementation block
@property (nonatomic,copy) NSURL * audioProxyURL;                                      //@synthesize audioProxyURL=_audioProxyURL - In the implementation block
@property (assign,nonatomic) BOOL audioProxyExists;                                    //@synthesize audioProxyExists=_audioProxyExists - In the implementation block
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CGAffineTransform)transform;
-(id)initWithPath:(id)arg1 ;
-(int)duration;
-(CGSize)naturalSize;
-(unsigned)videoCodec;
-(id)avAsset;
-(double)durationInSeconds;
-(void)updateMetadata;
-(float)frameRate;
-(void)updateLocation;
-(BOOL)isMono;
-(CGSize)naturalSizeWithTransform;
-(BOOL)cachedAssetInformationValid;
-(void)setCachedAssetInformationValid:(BOOL)arg1 ;
-(void)setCachedVideoTrackCount:(unsigned long long)arg1 ;
-(void)setCachedNaturalSize:(CGSize)arg1 ;
-(void)setCachedFrameRate:(float)arg1 ;
-(void)setCachedTransform:(CGAffineTransform)arg1 ;
-(unsigned long long)cachedVideoTrackCount;
-(SCD_Struct_PM5)cachedPreciseAssetDuration;
-(void)setCachedPreciseAssetDuration:(SCD_Struct_PM5)arg1 ;
-(void)setCachedCodec4cc:(unsigned)arg1 ;
-(void)setCachedAudioTrackCount:(unsigned long long)arg1 ;
-(unsigned long long)cachedAudioTrackCount;
-(void)setCacheWillDieDuringLoad:(BOOL)arg1 ;
-(float)cachedFrameRate;
-(unsigned)cachedCodec4cc;
-(CGSize)cachedNaturalSize;
-(BOOL)cacheWillDieDuringLoad;
-(CGAffineTransform)cachedTransform;
-(BOOL)hasVideoTracks;
-(BOOL)hasAudioTracks;
-(void)setCachedDuration:(int)arg1 ;
-(void)mediaserverdCrashed;
-(int)cachedDuration;
-(void)cacheAssetInformation;
-(void)loadAVAssetWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)loadAVAsset;
-(void)loadAVPlayerItemWithCompletionHander:(/*^block*/id)arg1 progressHandler:(/*^block*/id)arg2 networkAccessAllowed:(BOOL)arg3 ;
-(void)updateAssetAvailability;
-(id)initWithIdentifierURL:(id)arg1 ;
-(BOOL)isUnsupportedFormat;
-(id)initWithIdentifierURL:(id)arg1 asset:(id)arg2 userInfo:(id)arg3 ;
-(AVAsset *)weakAVAsset;
-(void)setWeakAVAsset:(AVAsset *)arg1 ;
-(void)setCachedEncodedPixelSize:(CGSize)arg1 ;
-(void)setCachedAudioTrackChannels:(unsigned long long)arg1 ;
-(void)cacheVideoTrackInformationOfAsset:(id)arg1 ;
-(void)cacheAudioTrackFormatInformationOfAsset:(id)arg1 ;
-(void)resetCachedAssetInformation;
-(CGSize)cachedEncodedPixelSize;
-(CGSize)encodedPixelSize;
-(unsigned long long)cachedAudioTrackChannels;
-(BOOL)renderedAdjustmentsExist;
-(void)updateCreationDate;
-(id)initWithIdentifierURL:(id)arg1 asset:(id)arg2 ;
-(id)thumbnailImageWithSize:(CGSize)arg1 ;
-(void)cacheAssetInformationWithCompletionHandler:(/*^block*/id)arg1 ;
-(CGSize)encodedPixelSizeWithTransform;
-(NSURL *)audioProxyURL;
-(void)setAudioProxyURL:(NSURL *)arg1 ;
-(BOOL)audioProxyExists;
-(void)setAudioProxyExists:(BOOL)arg1 ;
-(BOOL)cacheMovieIsPlayable;
-(void)setCacheMovieIsPlayable:(BOOL)arg1 ;
@end

