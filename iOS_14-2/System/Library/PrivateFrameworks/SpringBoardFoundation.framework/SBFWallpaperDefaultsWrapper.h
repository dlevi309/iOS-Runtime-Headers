/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	NSDictionary* _wallpaperKitData;
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
@property (nonatomic,retain) NSDictionary * wallpaperKitData;              //@synthesize wallpaperKitData=_wallpaperKitData - In the implementation block
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
-(void)setWallpaperMode:(long long)arg1 ;
-(CGRect)cropRect;
-(NSDictionary *)wallpaperKitData;
-(double)zoomScale;
-(void)setMagnifyEnabled:(BOOL)arg1 ;
-(void)setWallpaperKitData:(NSDictionary *)arg1 ;
-(void)setStillTimeInVideo:(double)arg1 ;
-(void)setSupportsCropping:(BOOL)arg1 ;
-(void)setPortrait:(BOOL)arg1 ;
-(void)setZoomScale:(double)arg1 ;
-(void)setCropRect:(CGRect)arg1 ;
-(double)parallaxFactor;
-(NSData *)colorData;
-(long long)wallpaperMode;
-(void)setHasVideo:(BOOL)arg1 ;
-(BOOL)portrait;
-(double)stillTimeInVideo;
-(BOOL)supportsCropping;
-(void)setParallaxFactor:(double)arg1 ;
-(void)setWallpaperWasUserSet:(BOOL)arg1 ;
-(void)setWallpaperOptions:(NSDictionary *)arg1 ;
-(NSString *)wallpaperIdentifier;
-(NSString *)wallpaperName;
-(NSString *)colorName;
-(BOOL)wallpaperWasUserSet;
-(BOOL)magnifyEnabled;
-(void)setColorData:(NSData *)arg1 ;
-(id)initWithWallpaperDefaultsDict:(id)arg1 ;
-(id)wallpaperDefaultsDict;
-(void)setImageHashData:(NSData *)arg1 ;
-(void)setWallpaperIdentifier:(NSString *)arg1 ;
-(NSData *)gradientData;
-(NSData *)imageHashData;
-(void)setGradientData:(NSData *)arg1 ;
-(NSDictionary *)wallpaperOptions;
-(void)setColorName:(NSString *)arg1 ;
-(BOOL)hasVideo;
-(void)setWallpaperName:(NSString *)arg1 ;
@end

