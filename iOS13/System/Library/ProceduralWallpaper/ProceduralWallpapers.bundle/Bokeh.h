/*
* Generated on Monday, March 1, 2021 at 2:35:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/ProceduralWallpaper/ProceduralWallpapers.bundle/ProceduralWallpapers
*/

#import <ProceduralWallpapers/ProceduralWallpapers-Structs.h>
#import <SpringBoardFoundation/SBFProceduralWallpaper.h>

@protocol OS_dispatch_queue, SBFProceduralWallpaperDelegate;
@class SKView, BokehScene, NSString, UIColor, NSObject;

@interface Bokeh : SBFProceduralWallpaper {

	SKView* _skView;
	BokehScene* _scene;
	long long _variant;
	NSString* _bokehColorVariantString;
	UIColor* _bgColor;
	BOOL _shouldGenerateBlurs;
	unsigned long long _blurFrameInterval;
	unsigned long long _blurFrameCount;
	NSObject*<OS_dispatch_queue> _skUpdateQueue;
	id<SBFProceduralWallpaperDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SBFProceduralWallpaperDelegate> delegate; 
+(id)identifier;
+(id)representativeThumbnailImageName;
+(id)thumbnailImageName;
+(id)presetWallpaperOptions;
+(BOOL)colorChangesSignificantly;
-(id)init;
-(id<SBFProceduralWallpaperDelegate>)delegate;
-(void)setDelegate:(id<SBFProceduralWallpaperDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setAnimating:(BOOL)arg1 ;
-(void)setWallpaperOptions:(id)arg1 ;
-(void)_initialize;
-(void)startGeneratingBlursForRect:(CGRect)arg1 ;
-(void)stopGeneratingBlurs;
-(IOSurfaceRef)copyBlurForRect:(inout CGRect*)arg1 ;
-(IOSurfaceRef)copySnapshotImageForRect:(inout CGRect*)arg1 ;
-(id)averageLifetimeColor;
-(id)averageColorForRect:(CGRect)arg1 ;
-(void)presimulateWallpaperAnimation;
-(void)setWallpaperVariant:(long long)arg1 ;
-(void)applyVariant:(long long)arg1 ;
@end

