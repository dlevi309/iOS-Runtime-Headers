/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/

#import <SpringBoardFoundation/SpringBoardFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary, NSData;

@interface SBFWallpaperOptions : NSObject <NSCopying, BSDescriptionProviding, NSSecureCoding> {

	BOOL _magnifyEnabled;
	BOOL _supportsCropping;
	BOOL _supportsRotation;
	BOOL _portrait;
	BOOL _hasVideo;
	NSString* _name;
	double _parallaxFactor;
	double _zoomScale;
	double _rotationAngle;
	double _stillTimeInVideo;
	long long _wallpaperMode;
	long long _wallpaperStatus;
	NSDictionary* _wallpaperKitData;
	CGRect _cropRect;

}

@property (nonatomic,copy) NSString * name;                                             //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) BOOL parallaxEnabled; 
@property (assign,nonatomic) double parallaxFactor;                                     //@synthesize parallaxFactor=_parallaxFactor - In the implementation block
@property (assign,getter=isMagnifyEnabled,nonatomic) BOOL magnifyEnabled;               //@synthesize magnifyEnabled=_magnifyEnabled - In the implementation block
@property (assign,nonatomic) double zoomScale;                                          //@synthesize zoomScale=_zoomScale - In the implementation block
@property (assign,nonatomic) BOOL supportsCropping;                                     //@synthesize supportsCropping=_supportsCropping - In the implementation block
@property (assign,nonatomic) CGRect cropRect;                                           //@synthesize cropRect=_cropRect - In the implementation block
@property (assign,nonatomic) BOOL supportsRotation;                                     //@synthesize supportsRotation=_supportsRotation - In the implementation block
@property (assign,nonatomic) double rotationAngle;                                      //@synthesize rotationAngle=_rotationAngle - In the implementation block
@property (assign,getter=isPortrait,nonatomic) BOOL portrait;                           //@synthesize portrait=_portrait - In the implementation block
@property (assign,nonatomic) BOOL hasVideo;                                             //@synthesize hasVideo=_hasVideo - In the implementation block
@property (assign,nonatomic) double stillTimeInVideo;                                   //@synthesize stillTimeInVideo=_stillTimeInVideo - In the implementation block
@property (assign,nonatomic) long long wallpaperMode;                                   //@synthesize wallpaperMode=_wallpaperMode - In the implementation block
@property (assign,nonatomic) long long wallpaperStatus;                                 //@synthesize wallpaperStatus=_wallpaperStatus - In the implementation block
@property (nonatomic,copy) NSDictionary * wallpaperKitData;                             //@synthesize wallpaperKitData=_wallpaperKitData - In the implementation block
@property (nonatomic,copy,readonly) NSData * persistentDataRepresentation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)optionsWithName:(id)arg1 parallaxFactor:(double)arg2 zoomScale:(double)arg3 supportsCropping:(BOOL)arg4 cropRect:(CGRect)arg5 portrait:(BOOL)arg6 ;
+(id)optionsWithName:(id)arg1 parallaxFactor:(double)arg2 zoomScale:(double)arg3 supportsCropping:(BOOL)arg4 cropRect:(CGRect)arg5 portrait:(BOOL)arg6 hasVideo:(BOOL)arg7 stillTimeInVideo:(double)arg8 ;
+(id)optionsWithName:(id)arg1 parallaxFactor:(double)arg2 zoomScale:(double)arg3 supportsCropping:(BOOL)arg4 cropRect:(CGRect)arg5 portrait:(BOOL)arg6 hasVideo:(BOOL)arg7 stillTimeInVideo:(double)arg8 wallpaperKitData:(id)arg9 ;
+(id)optionsWithName:(id)arg1 parallaxFactor:(double)arg2 zoomScale:(double)arg3 supportsCropping:(BOOL)arg4 cropRect:(CGRect)arg5 portrait:(BOOL)arg6 hasVideo:(BOOL)arg7 stillTimeInVideo:(double)arg8 wallpaperMode:(long long)arg9 wallpaperStatus:(long long)arg10 ;
+(id)optionsWithName:(id)arg1 parallaxFactor:(double)arg2 zoomScale:(double)arg3 supportsCropping:(BOOL)arg4 cropRect:(CGRect)arg5 supportsRotation:(BOOL)arg6 rotationAngle:(double)arg7 portrait:(BOOL)arg8 hasVideo:(BOOL)arg9 stillTimeInVideo:(double)arg10 wallpaperMode:(long long)arg11 wallpaperStatus:(long long)arg12 ;
+(id)optionsWithName:(id)arg1 parallaxFactor:(double)arg2 zoomScale:(double)arg3 supportsCropping:(BOOL)arg4 cropRect:(CGRect)arg5 portrait:(BOOL)arg6 hasVideo:(BOOL)arg7 stillTimeInVideo:(double)arg8 wallpaperMode:(long long)arg9 wallpaperStatus:(long long)arg10 wallpaperKitData:(id)arg11 ;
-(double)rotationAngle;
-(void)setWallpaperMode:(long long)arg1 ;
-(BOOL)writeToURL:(id)arg1 error:(id*)arg2 ;
-(CGRect)cropRect;
-(id)initWithStream:(id)arg1 ;
-(NSDictionary *)wallpaperKitData;
-(id)succinctDescription;
-(double)zoomScale;
-(id)initWithContentsOfURL:(id)arg1 ;
-(void)setMagnifyEnabled:(BOOL)arg1 ;
-(void)setWallpaperKitData:(NSDictionary *)arg1 ;
-(void)setRotationAngle:(double)arg1 ;
-(id)persistentPropertyList;
-(void)setStillTimeInVideo:(double)arg1 ;
-(void)setSupportsCropping:(BOOL)arg1 ;
-(void)setPortrait:(BOOL)arg1 ;
-(void)setZoomScale:(double)arg1 ;
-(BOOL)isPortrait;
-(void)setCropRect:(CGRect)arg1 ;
-(id)init;
-(void)setWallpaperStatus:(long long)arg1 ;
-(double)parallaxFactor;
-(long long)wallpaperMode;
-(void)setHasVideo:(BOOL)arg1 ;
-(BOOL)parallaxEnabled;
-(void)setSupportsRotation:(BOOL)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)initWithName:(id)arg1 parallaxFactor:(double)arg2 zoomScale:(double)arg3 supportsCropping:(BOOL)arg4 cropRect:(CGRect)arg5 supportsRotation:(BOOL)arg6 rotationAngle:(double)arg7 portrait:(BOOL)arg8 hasVideo:(BOOL)arg9 stillTimeInVideo:(double)arg10 wallpaperMode:(long long)arg11 wallpaperStatus:(long long)arg12 wallpaperKitData:(id)arg13 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)wallpaperStatus;
-(BOOL)supportsRotation;
-(double)stillTimeInVideo;
-(BOOL)isMagnifyEnabled;
-(BOOL)supportsCropping;
-(NSString *)name;
-(NSString *)description;
-(void)setParallaxFactor:(double)arg1 ;
-(NSData *)persistentDataRepresentation;
-(BOOL)isLooselyEqualToWallpaperOptions:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithPersistentDataRepresentation:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGSize)bestWallpaperSizeForWallpaperSize:(CGSize)arg1 wallpaperScale:(double)arg2 deviceType:(long long)arg3 imageScale:(double)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasVideo;
@end

