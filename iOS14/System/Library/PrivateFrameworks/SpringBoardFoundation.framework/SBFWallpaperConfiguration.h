/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/

#import <SpringBoardFoundation/SpringBoardFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class SBWallpaperImage, UIImage, NSData, SBFWallpaperOptions, NSDictionary, NSURL, UIColor, NSString, SBFGradient;

@interface SBFWallpaperConfiguration : NSObject <NSCopying, BSDescriptionProviding, NSSecureCoding> {

	BOOL _needsWallpaperDimmingTreatment;
	long long _wallpaperType;
	SBWallpaperImage* _wallpaperImage;
	UIImage* _wallpaperOriginalImage;
	UIImage* _wallpaperThumbnailImage;
	NSData* _wallpaperThumbnailImageData;
	NSData* _wallpaperImageHashData;
	SBFWallpaperOptions* _wallpaperOptions;
	NSDictionary* _proceduralWallpaperInfo;
	NSURL* _videoURL;
	NSURL* _originalVideoURL;
	UIColor* _wallpaperColor;
	NSString* _wallpaperColorName;
	SBFGradient* _wallpaperGradient;
	long long _variant;

}

@property (nonatomic,readonly) long long variant;                                           //@synthesize variant=_variant - In the implementation block
@property (assign,nonatomic) BOOL needsWallpaperDimmingTreatment;                           //@synthesize needsWallpaperDimmingTreatment=_needsWallpaperDimmingTreatment - In the implementation block
@property (nonatomic,retain) SBWallpaperImage * wallpaperImage;                             //@synthesize wallpaperImage=_wallpaperImage - In the implementation block
@property (nonatomic,retain) UIImage * wallpaperOriginalImage;                              //@synthesize wallpaperOriginalImage=_wallpaperOriginalImage - In the implementation block
@property (nonatomic,retain) UIImage * wallpaperThumbnailImage;                             //@synthesize wallpaperThumbnailImage=_wallpaperThumbnailImage - In the implementation block
@property (nonatomic,copy) NSData * wallpaperThumbnailImageData;                            //@synthesize wallpaperThumbnailImageData=_wallpaperThumbnailImageData - In the implementation block
@property (nonatomic,copy) NSData * wallpaperImageHashData;                                 //@synthesize wallpaperImageHashData=_wallpaperImageHashData - In the implementation block
@property (nonatomic,copy) NSDictionary * proceduralWallpaperInfo;                          //@synthesize proceduralWallpaperInfo=_proceduralWallpaperInfo - In the implementation block
@property (nonatomic,copy) NSURL * videoURL;                                                //@synthesize videoURL=_videoURL - In the implementation block
@property (nonatomic,copy) NSURL * originalVideoURL;                                        //@synthesize originalVideoURL=_originalVideoURL - In the implementation block
@property (nonatomic,copy) SBFWallpaperOptions * wallpaperOptions;                          //@synthesize wallpaperOptions=_wallpaperOptions - In the implementation block
@property (nonatomic,copy) UIColor * wallpaperColor;                                        //@synthesize wallpaperColor=_wallpaperColor - In the implementation block
@property (nonatomic,copy) NSString * wallpaperColorName;                                   //@synthesize wallpaperColorName=_wallpaperColorName - In the implementation block
@property (nonatomic,copy) SBFGradient * wallpaperGradient;                                 //@synthesize wallpaperGradient=_wallpaperGradient - In the implementation block
@property (nonatomic,readonly) long long wallpaperType;                                     //@synthesize wallpaperType=_wallpaperType - In the implementation block
@property (nonatomic,copy,readonly) NSString * proceduralWallpaperIdentifier; 
@property (nonatomic,copy,readonly) NSDictionary * proceduralWallpaperOptions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)setWallpaperImage:(SBWallpaperImage *)arg1 ;
-(SBFGradient *)wallpaperGradient;
-(id)succinctDescription;
-(void)setWallpaperColor:(UIColor *)arg1 ;
-(NSDictionary *)proceduralWallpaperInfo;
-(SBWallpaperImage *)wallpaperImage;
-(id)init;
-(void)setWallpaperColorName:(NSString *)arg1 ;
-(void)setVideoURL:(NSURL *)arg1 ;
-(void)setWallpaperOriginalImage:(UIImage *)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(long long)variant;
-(void)setWallpaperThumbnailImageData:(NSData *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)needsWallpaperDimmingTreatment;
-(id)initWithVariant:(long long)arg1 type:(long long)arg2 ;
-(void)setWallpaperThumbnailImage:(UIImage *)arg1 ;
-(NSData *)wallpaperImageHashData;
-(NSString *)wallpaperColorName;
-(long long)wallpaperType;
-(void)setNeedsWallpaperDimmingTreatment:(BOOL)arg1 ;
-(NSData *)wallpaperThumbnailImageData;
-(NSString *)proceduralWallpaperIdentifier;
-(NSString *)description;
-(void)setWallpaperOptions:(SBFWallpaperOptions *)arg1 ;
-(NSURL *)originalVideoURL;
-(void)setOriginalVideoURL:(NSURL *)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(UIImage *)wallpaperOriginalImage;
-(NSURL *)videoURL;
-(void)setProceduralWallpaperInfo:(NSDictionary *)arg1 ;
-(UIImage *)wallpaperThumbnailImage;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(void)setWallpaperGradient:(SBFGradient *)arg1 ;
-(id)succinctDescriptionBuilder;
-(NSDictionary *)proceduralWallpaperOptions;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setWallpaperImageHashData:(NSData *)arg1 ;
-(SBFWallpaperOptions *)wallpaperOptions;
-(BOOL)isEqual:(id)arg1 ;
-(UIColor *)wallpaperColor;
@end

