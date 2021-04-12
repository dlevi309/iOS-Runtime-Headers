/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/

#import <SpringBoardFoundation/SpringBoardFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData;

@interface SBFWallpaperOptions : NSObject <NSCopying, BSDescriptionProviding, NSSecureCoding> {

	BOOL _magnifyEnabled;
	BOOL _supportsCropping;
	BOOL _portrait;
	BOOL _hasVideo;
	NSString* _name;
	double _parallaxFactor;
	double _zoomScale;
	double _stillTimeInVideo;
	long long _wallpaperMode;
	long long _wallpaperStatus;
	CGRect _cropRect;

}

@property (nonatomic,copy) NSString * name;                                             //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) BOOL parallaxEnabled; 
@property (assign,nonatomic) double parallaxFactor;                                     //@synthesize parallaxFactor=_parallaxFactor - In the implementation block
@property (assign,getter=isMagnifyEnabled,nonatomic) BOOL magnifyEnabled;               //@synthesize magnifyEnabled=_magnifyEnabled - In the implementation block
@property (assign,nonatomic) double zoomScale;                                          //@synthesize zoomScale=_zoomScale - In the implementation block
@property (assign,nonatomic) BOOL supportsCropping;                                     //@synthesize supportsCropping=_supportsCropping - In the implementation block
@property (assign,nonatomic) CGRect cropRect;                                           //@synthesize cropRect=_cropRect - In the implementation block
@property (assign,getter=isPortrait,nonatomic) BOOL portrait;                           //@synthesize portrait=_portrait - In the implementation block
@property (assign,nonatomic) BOOL hasVideo;                                             //@synthesize hasVideo=_hasVideo - In the implementation block
@property (assign,nonatomic) double stillTimeInVideo;                                   //@synthesize stillTimeInVideo=_stillTimeInVideo - In the implementation block
@property (assign,nonatomic) long long wallpaperMode;                                   //@synthesize wallpaperMode=_wallpaperMode - In the implementation block
@property (assign,nonatomic) long long wallpaperStatus;                                 //@synthesize wallpaperStatus=_wallpaperStatus - In the implementation block
@property (nonatomic,copy,readonly) NSData * persistentDataRepresentation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)optionsWithName:(id)arg1 parallaxFactor:(double)arg2 zoomScale:(double)arg3 supportsCropping:(BOOL)arg4 cropRect:(CGRect)arg5 portrait:(BOOL)arg6 ;
+(id)optionsWithName:(id)arg1 parallaxFactor:(double)arg2 zoomScale:(double)arg3 supportsCropping:(BOOL)arg4 cropRect:(CGRect)arg5 portrait:(BOOL)arg6 hasVideo:(BOOL)arg7 stillTimeInVideo:(double)arg8 ;
+(id)optionsWithName:(id)arg1 parallaxFactor:(double)arg2 zoomScale:(double)arg3 supportsCropping:(BOOL)arg4 cropRect:(CGRect)arg5 portrait:(BOOL)arg6 hasVideo:(BOOL)arg7 stillTimeInVideo:(double)arg8 wallpaperMode:(long long)arg9 wallpaperStatus:(long long)arg10 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithContentsOfURL:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(BOOL)writeToURL:(id)arg1 error:(id*)arg2 ;
-(id)initWithStream:(id)arg1 ;
-(BOOL)isPortrait;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)setZoomScale:(double)arg1 ;
-(double)zoomScale;
-(CGRect)cropRect;
-(void)setCropRect:(CGRect)arg1 ;
-(BOOL)hasVideo;
-(void)setHasVideo:(BOOL)arg1 ;
-(BOOL)parallaxEnabled;
-(id)initWithName:(id)arg1 parallaxFactor:(double)arg2 zoomScale:(double)arg3 supportsCropping:(BOOL)arg4 cropRect:(CGRect)arg5 portrait:(BOOL)arg6 hasVideo:(BOOL)arg7 stillTimeInVideo:(double)arg8 wallpaperMode:(long long)arg9 wallpaperStatus:(long long)arg10 ;
-(double)parallaxFactor;
-(BOOL)supportsCropping;
-(BOOL)isMagnifyEnabled;
-(double)stillTimeInVideo;
-(long long)wallpaperMode;
-(id)persistentPropertyList;
-(id)initWithPersistentDataRepresentation:(id)arg1 ;
-(CGSize)bestWallpaperSizeForWallpaperSize:(CGSize)arg1 wallpaperScale:(double)arg2 deviceType:(long long)arg3 imageScale:(double)arg4 ;
-(BOOL)isLooselyEqualToWallpaperOptions:(id)arg1 ;
-(NSData *)persistentDataRepresentation;
-(void)setParallaxFactor:(double)arg1 ;
-(void)setMagnifyEnabled:(BOOL)arg1 ;
-(void)setSupportsCropping:(BOOL)arg1 ;
-(void)setPortrait:(BOOL)arg1 ;
-(void)setStillTimeInVideo:(double)arg1 ;
-(void)setWallpaperMode:(long long)arg1 ;
-(long long)wallpaperStatus;
-(void)setWallpaperStatus:(long long)arg1 ;
@end

