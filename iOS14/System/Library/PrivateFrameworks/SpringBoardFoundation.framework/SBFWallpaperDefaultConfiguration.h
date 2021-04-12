/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/

#import <SpringBoardFoundation/SpringBoardFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NSString, NSDictionary, UIColor, SBFGradient;

@interface SBFWallpaperDefaultConfiguration : NSObject <NSCopying, BSDescriptionProviding, NSSecureCoding> {

	long long _wallpaperType;
	NSURL* _staticImageURL;
	NSURL* _videoURL;
	NSString* _proceduralWallpaperIdentifier;
	NSDictionary* _proceduralWallpaperOptions;
	UIColor* _wallpaperColor;
	NSString* _wallpaperColorName;
	SBFGradient* _wallpaperGradient;

}

@property (nonatomic,readonly) long long wallpaperType;                                     //@synthesize wallpaperType=_wallpaperType - In the implementation block
@property (nonatomic,copy,readonly) NSURL * staticImageURL;                                 //@synthesize staticImageURL=_staticImageURL - In the implementation block
@property (nonatomic,copy,readonly) NSURL * videoURL;                                       //@synthesize videoURL=_videoURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * proceduralWallpaperIdentifier;               //@synthesize proceduralWallpaperIdentifier=_proceduralWallpaperIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * proceduralWallpaperOptions;              //@synthesize proceduralWallpaperOptions=_proceduralWallpaperOptions - In the implementation block
@property (nonatomic,copy,readonly) UIColor * wallpaperColor;                               //@synthesize wallpaperColor=_wallpaperColor - In the implementation block
@property (nonatomic,copy,readonly) NSString * wallpaperColorName;                          //@synthesize wallpaperColorName=_wallpaperColorName - In the implementation block
@property (nonatomic,copy,readonly) SBFGradient * wallpaperGradient;                        //@synthesize wallpaperGradient=_wallpaperGradient - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(SBFGradient *)wallpaperGradient;
-(id)succinctDescription;
-(id)init;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)wallpaperColorName;
-(long long)wallpaperType;
-(NSURL *)staticImageURL;
-(id)initStaticWithImageURL:(id)arg1 ;
-(id)initVideoWithStaticImageURL:(id)arg1 videoURL:(id)arg2 ;
-(id)initProceduralWithIdentifier:(id)arg1 options:(id)arg2 ;
-(id)initColorWithColor:(id)arg1 ;
-(id)initColorWithColorName:(id)arg1 ;
-(id)initGradientWithGradient:(id)arg1 ;
-(NSString *)proceduralWallpaperIdentifier;
-(NSString *)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)videoURL;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(NSDictionary *)proceduralWallpaperOptions;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(UIColor *)wallpaperColor;
@end

