/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
*/


#import <AssetsLibraryServices/AssetsLibraryServices-Structs.h>
@class PLDeviceConfiguration, PLImageFormat, NSArray;

@interface PLFormatChooser : NSObject {

	PLDeviceConfiguration* _deviceConfiguration;
	PLImageFormat* _posterThumbnailFormat;
	NSArray* _supportedDerivativeFormats;
	PLImageFormat* _fullScreenFormatForCurrentDevice;
	PLImageFormat* _indexSheetUnbakedFormat;
	PLImageFormat* _largestUncroppedNonJPEGThumbnailFormat;
	PLImageFormat* _masterThumbnailFormat;
	PLImageFormat* _portraitScrubberThumbnailFormat;
	PLImageFormat* _landscapeScrubberThumbnailFormat;

}

@property (nonatomic,readonly) NSArray * supportedDerivativeFormats;                                //@synthesize supportedDerivativeFormats=_supportedDerivativeFormats - In the implementation block
@property (nonatomic,readonly) PLImageFormat * fullScreenFormatForCurrentDevice;                    //@synthesize fullScreenFormatForCurrentDevice=_fullScreenFormatForCurrentDevice - In the implementation block
@property (nonatomic,readonly) PLImageFormat * indexSheetUnbakedFormat;                             //@synthesize indexSheetUnbakedFormat=_indexSheetUnbakedFormat - In the implementation block
@property (nonatomic,readonly) PLImageFormat * largestUncroppedNonJPEGThumbnailFormat;              //@synthesize largestUncroppedNonJPEGThumbnailFormat=_largestUncroppedNonJPEGThumbnailFormat - In the implementation block
@property (nonatomic,readonly) PLImageFormat * masterThumbnailFormat;                               //@synthesize masterThumbnailFormat=_masterThumbnailFormat - In the implementation block
@property (nonatomic,readonly) PLImageFormat * portraitScrubberThumbnailFormat;                     //@synthesize portraitScrubberThumbnailFormat=_portraitScrubberThumbnailFormat - In the implementation block
@property (nonatomic,readonly) PLImageFormat * landscapeScrubberThumbnailFormat;                    //@synthesize landscapeScrubberThumbnailFormat=_landscapeScrubberThumbnailFormat - In the implementation block
+(id)defaultFormatChooser;
+(CGSize)_desiredImageSizeForRequestedViewSizeInPixels:(CGSize)arg1 isAspectFill:(BOOL)arg2 srcAspectRatio:(double)arg3 ;
+(id)_suppportedFullSizeFormatIDs;
-(PLImageFormat *)masterThumbnailFormat;
-(PLImageFormat *)indexSheetUnbakedFormat;
-(PLImageFormat *)fullScreenFormatForCurrentDevice;
-(PLImageFormat *)landscapeScrubberThumbnailFormat;
-(PLImageFormat *)portraitScrubberThumbnailFormat;
-(CGSize)posterThumbnailSize;
-(id)initWithDeviceConfiguration:(id)arg1 ;
-(id)derivativeFormatThatFitsSize:(CGSize)arg1 contentMode:(long long)arg2 demoteFactor:(double)arg3 srcAspectRatio:(double)arg4 desiredImagePixelSize:(CGSize*)arg5 ;
-(id)_bestFormatWithSize:(CGSize)arg1 specificVersionType:(long long)arg2 contentMode:(long long)arg3 demoteFactor:(double)arg4 srcAspectRatio:(double)arg5 hasAdjustmentsHandler:(/*^block*/id)arg6 desiredImagePixelSize:(CGSize*)arg7 ;
-(id)_nextLargestAcceptableFormatForFormat:(id)arg1 ;
-(id)_standardDegradedFormatFallingBackFromFormat:(id)arg1 ;
-(id)_fastestDegradedFormatFallingBackFromFormat:(id)arg1 ;
-(void)chooseFormatsForSize:(CGSize)arg1 specificVersionType:(long long)arg2 contentMode:(long long)arg3 demoteFactor:(double)arg4 srcAspectRatio:(double)arg5 degradedFormatPolicy:(long long)arg6 hasAdjustmentsHandler:(/*^block*/id)arg7 desiredImagePixelSize:(CGSize*)arg8 bestFormat:(id*)arg9 degradedFormat:(id*)arg10 ;
-(NSArray *)supportedDerivativeFormats;
-(PLImageFormat *)largestUncroppedNonJPEGThumbnailFormat;
@end

