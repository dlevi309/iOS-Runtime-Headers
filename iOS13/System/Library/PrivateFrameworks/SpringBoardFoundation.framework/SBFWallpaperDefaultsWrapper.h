/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/


#import <SpringBoardFoundation/SpringBoardFoundation-Structs.h>
@class NSString, NSData, NSDictionary;

@interface SBFWallpaperDefaultsWrapper : NSObject {

	BOOL _supportsCropping;
	BOOL _magnifyEnabled;
	BOOL _portrait;
	BOOL _hasVideo;
	BOOL _wallpaperWasUserSet;
	double _parallaxFactor;
	double _zoomScale;
	NSString* _wallpaperName;
	NSData* _imageHashData;
	long long _wallpaperMode;
	double _stillTimeInVideo;
	NSString* _wallpaperIdentifier;
	NSDictionary* _wallpaperOptions;
	NSData* _colorData;
	NSString* _colorName;
	NSData* _gradientData;
	CGRect _cropRect;

}

@property (assign,nonatomic) double parallaxFactor;                        //@synthesize parallaxFactor=_parallaxFactor - In the implementation block
@property (assign,nonatomic) double zoomScale;                             //@synthesize zoomScale=_zoomScale - In the implementation block
@property (assign,nonatomic) CGRect cropRect;                              //@synthesize cropRect=_cropRect - In the implementation block
@property (assign,nonatomic) BOOL supportsCropping;                        //@synthesize supportsCropping=_supportsCropping - In the implementation block
@property (assign,nonatomic) BOOL magnifyEnabled;                          //@synthesize magnifyEnabled=_magnifyEnabled - In the implementation block
@property (assign,nonatomic) BOOL portrait;                                //@synthesize portrait=_portrait - In the implementation block
@property (nonatomic,retain) NSString * wallpaperName;                     //@synthesize wallpaperName=_wallpaperName - In the implementation block
@property (nonatomic,retain) NSData * imageHashData;                       //@synthesize imageHashData=_imageHashData - In the implementation block
@property (assign,nonatomic) long long wallpaperMode;                      //@synthesize wallpaperMode=_wallpaperMode - In the implementation block
@property (assign,nonatomic) BOOL hasVideo;                                //@synthesize hasVideo=_hasVideo - In the implementation block
@property (assign,nonatomic) double stillTimeInVideo;                      //@synthesize stillTimeInVideo=_stillTimeInVideo - In the implementation block
@property (nonatomic,retain) NSString * wallpaperIdentifier;               //@synthesize wallpaperIdentifier=_wallpaperIdentifier - In the implementation block
@property (nonatomic,retain) NSDictionary * wallpaperOptions;              //@synthesize wallpaperOptions=_wallpaperOptions - In the implementation block
@property (assign,nonatomic) BOOL wallpaperWasUserSet;                     //@synthesize wallpaperWasUserSet=_wallpaperWasUserSet - In the implementation block
@property (nonatomic,retain) NSData * colorData;                           //@synthesize colorData=_colorData - In the implementation block
@property (nonatomic,retain) NSString * colorName;                         //@synthesize colorName=_colorName - In the implementation block
@property (nonatomic,retain) NSData * gradientData;                        //@synthesize gradientData=_gradientData - In the implementation block
+(id)lockScreenWrapperForLegacyDefaults:(id)arg1 ;
+(id)homeScreenWrapperForLegacyDefaults:(id)arg1 ;
-(void)setZoomScale:(double)arg1 ;
-(double)zoomScale;
-(CGRect)cropRect;
-(void)setCropRect:(CGRect)arg1 ;
-(BOOL)hasVideo;
-(void)setHasVideo:(BOOL)arg1 ;
-(NSString *)colorName;
-(double)parallaxFactor;
-(BOOL)supportsCropping;
-(double)stillTimeInVideo;
-(long long)wallpaperMode;
-(void)setParallaxFactor:(double)arg1 ;
-(void)setMagnifyEnabled:(BOOL)arg1 ;
-(void)setSupportsCropping:(BOOL)arg1 ;
-(void)setPortrait:(BOOL)arg1 ;
-(void)setStillTimeInVideo:(double)arg1 ;
-(void)setWallpaperMode:(long long)arg1 ;
-(void)setImageHashData:(NSData *)arg1 ;
-(NSDictionary *)wallpaperOptions;
-(void)setWallpaperOptions:(NSDictionary *)arg1 ;
-(void)setWallpaperName:(NSString *)arg1 ;
-(void)setColorData:(NSData *)arg1 ;
-(void)setColorName:(NSString *)arg1 ;
-(void)setGradientData:(NSData *)arg1 ;
-(void)setWallpaperIdentifier:(NSString *)arg1 ;
-(void)setWallpaperWasUserSet:(BOOL)arg1 ;
-(BOOL)magnifyEnabled;
-(BOOL)portrait;
-(NSString *)wallpaperName;
-(NSData *)imageHashData;
-(NSData *)colorData;
-(NSData *)gradientData;
-(NSString *)wallpaperIdentifier;
-(BOOL)wallpaperWasUserSet;
-(id)initWithWallpaperDefaultsDict:(id)arg1 ;
-(id)wallpaperDefaultsDict;
@end

