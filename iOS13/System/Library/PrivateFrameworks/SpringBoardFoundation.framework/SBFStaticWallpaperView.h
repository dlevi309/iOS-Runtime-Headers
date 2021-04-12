/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/

#import <SpringBoardFoundation/SpringBoardFoundation-Structs.h>
#import <SpringBoardFoundation/SBFWallpaperView.h>

@class SBFColorBoxes, UIImage, NSData, NSString;

@interface SBFStaticWallpaperView : SBFWallpaperView {

	double _overallContrast;
	SBFColorBoxes* _colorBoxes;
	BOOL _needsWallpaperDimmingTreatment;
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
-(double)contrast;
-(void)setContentsRect:(CGRect)arg1 ;
-(CGSize)_imageSize;
-(id)_displayedImage;
-(float)_zoomScale;
-(long long)wallpaperType;
-(id)wallpaperImage;
-(id)initWithFrame:(CGRect)arg1 configuration:(id)arg2 variant:(long long)arg3 cacheGroup:(id)arg4 delegate:(id)arg5 options:(unsigned long long)arg6 ;
-(BOOL)isDisplayingWallpaperWithConfiguration:(id)arg1 forVariant:(long long)arg2 ;
-(id)_computeAverageColor;
-(double)contrastInRect:(CGRect)arg1 contrastWithinBoxes:(double*)arg2 contrastBetweenBoxes:(double*)arg3 ;
-(id)snapshotImage;
-(void)_setUpStaticImageContentView:(id)arg1 ;
-(void)_setupContentViewWithOptions:(unsigned long long)arg1 ;
-(id)_averageColorInContentViewRect:(CGRect)arg1 smudgeRadius:(double)arg2 ;
-(double)_contrastInContentViewRect:(CGRect)arg1 contrastWithinBoxes:(double*)arg2 contrastBetweenBoxes:(double*)arg3 ;
-(id)cacheUniqueIdentifier;
-(void)setCropRect:(CGRect)arg1 zoomScale:(double)arg2 ;
-(double)cropZoomScale;
-(void)preheatImageData;
-(BOOL)hasContentOutsideVisibleBounds;
-(id)_createColorBoxes;
-(void)setColorBoxes:(SBFColorBoxes *)arg1 ;
-(id)_wallpaperImageForAnalysis;
-(void)setDisplayedImageHashData:(NSData *)arg1 ;
-(void)setDisplayedImageHashString:(NSString *)arg1 ;
-(void)_setSampleImage:(id)arg1 ;
-(void)_setDisplayedImage:(id)arg1 ;
-(void)_displayImage:(id)arg1 ;
-(void)_updateColorBoxesWithKey:(id)arg1 image:(id)arg2 ;
-(void)_generateImageForImage:(id)arg1 cacheKey:(id)arg2 options:(unsigned long long)arg3 downsampleFactor:(double)arg4 needsDimmingTreatment:(BOOL)arg5 averageColor:(id)arg6 generationHandler:(/*^block*/id)arg7 ;
-(BOOL)imageRequiresLuminanceTreatment;
-(NSString *)displayedImageHashString;
-(void)_setupWallpaperImageFromConfiguration:(id)arg1 options:(unsigned long long)arg2 ;
-(NSData *)displayedImageHashData;
-(SBFColorBoxes *)colorBoxes;
-(id)_sampleImage;
@end

