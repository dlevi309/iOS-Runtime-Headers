/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/

#import <SpringBoardFoundation/SpringBoardFoundation-Structs.h>
#import <SpringBoardFoundation/SBFWallpaperView.h>

@class SBFColorBoxes, UIImage, NSData, NSString;

@interface SBFStaticWallpaperView : SBFWallpaperView {

	double _overallContrast;
	SBFColorBoxes* _colorBoxes;
	UIImage* _displayedImage;
	UIImage* _sampleImage;
	NSData* _displayedImageHashData;
	NSString* _displayedImageHashString;

}

@property (setter=_setDisplayedImage:,getter=_displayedImage,nonatomic,retain) UIImage * displayedImage;              //@synthesize displayedImage=_displayedImage - In the implementation block
@property (setter=_setSampleImage:,getter=_sampleImage,nonatomic,retain) UIImage * sampleImage;                       //@synthesize sampleImage=_sampleImage - In the implementation block
@property (nonatomic,copy) NSData * displayedImageHashData;                                                           //@synthesize displayedImageHashData=_displayedImageHashData - In the implementation block
@property (nonatomic,copy) NSString * displayedImageHashString;                                                       //@synthesize displayedImageHashString=_displayedImageHashString - In the implementation block
@property (nonatomic,retain) SBFColorBoxes * colorBoxes; 
+(BOOL)_allowsParallax;
+(BOOL)_allowsRasterization;
+(BOOL)_canCacheImages;
+(BOOL)_canDownscaleSampleImage;
-(void)_generateImageForImage:(id)arg1 cacheKey:(id)arg2 options:(unsigned long long)arg3 downsampleFactor:(double)arg4 needsDimmingTreatment:(BOOL)arg5 averageColor:(id)arg6 generationHandler:(/*^block*/id)arg7 ;
-(void)preheatImageData;
-(id)_sampleImage;
-(NSData *)displayedImageHashData;
-(double)contrast;
-(id)wallpaperImage;
-(id)_createColorBoxes;
-(void)setColorBoxes:(SBFColorBoxes *)arg1 ;
-(void)_setupContentViewWithOptions:(unsigned long long)arg1 ;
-(id)_displayedImage;
-(id)cacheUniqueIdentifier;
-(void)_setupWallpaperImageFromConfiguration:(id)arg1 options:(unsigned long long)arg2 ;
-(BOOL)imageRequiresLuminanceTreatment;
-(void)_setDisplayedImage:(id)arg1 ;
-(void)_setUpStaticImageContentView:(id)arg1 ;
-(id)_computeAverageColor;
-(void)_setSampleImage:(id)arg1 ;
-(void)_displayImage:(id)arg1 ;
-(double)contrastInRect:(CGRect)arg1 contrastWithinBoxes:(double*)arg2 contrastBetweenBoxes:(double*)arg3 ;
-(double)_contrastInContentViewRect:(CGRect)arg1 contrastWithinBoxes:(double*)arg2 contrastBetweenBoxes:(double*)arg3 ;
-(BOOL)isDisplayingWallpaperWithConfiguration:(id)arg1 forVariant:(long long)arg2 ;
-(NSString *)displayedImageHashString;
-(id)_averageColorInContentViewRect:(CGRect)arg1 smudgeRadius:(double)arg2 ;
-(long long)wallpaperType;
-(float)_zoomScale;
-(void)setContentsRect:(CGRect)arg1 ;
-(SBFColorBoxes *)colorBoxes;
-(void)setDisplayedImageHashData:(NSData *)arg1 ;
-(void)setDisplayedImageHashString:(NSString *)arg1 ;
-(id)_wallpaperImageForAnalysis;
-(CGSize)_imageSize;
-(double)cropZoomScale;
-(id)initWithFrame:(CGRect)arg1 configuration:(id)arg2 variant:(long long)arg3 cacheGroup:(id)arg4 delegate:(id)arg5 options:(unsigned long long)arg6 ;
-(void)_updateColorBoxesWithKey:(id)arg1 image:(id)arg2 ;
-(BOOL)hasContentOutsideVisibleBounds;
-(id)snapshotImage;
-(void)setCropRect:(CGRect)arg1 zoomScale:(double)arg2 ;
@end

