/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/

#import <SpringBoardFoundation/SpringBoardFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class SBFWallpaperDefaultConfiguration, NSString;

@interface SBFWallpaperDefaultConfigurationSet : NSObject <NSCopying, BSDescriptionProviding, NSSecureCoding> {

	SBFWallpaperDefaultConfiguration* _lockScreenDefaultWallpaperConfiguration;
	SBFWallpaperDefaultConfiguration* _homeScreenDefaultWallpaperConfiguration;

}

@property (nonatomic,readonly) SBFWallpaperDefaultConfiguration * lockScreenDefaultWallpaperConfiguration;              //@synthesize lockScreenDefaultWallpaperConfiguration=_lockScreenDefaultWallpaperConfiguration - In the implementation block
@property (nonatomic,readonly) SBFWallpaperDefaultConfiguration * homeScreenDefaultWallpaperConfiguration;              //@synthesize homeScreenDefaultWallpaperConfiguration=_homeScreenDefaultWallpaperConfiguration - In the implementation block
@property (nonatomic,readonly) BOOL variantsShareDefaultWallpaperConfiguration; 
@property (nonatomic,readonly) SBFWallpaperDefaultConfiguration * sharedDefaultWallpaperConfiguration; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)defaultWallpaperDictionary;
+(id)defaultWallpaperConfigurationSetFromDefaultWallpaperDictionary:(id)arg1 ;
+(id)defaultWallpaperBaseURL;
+(id)defaultWallpaperConfigurationSetFromDirectoryURL:(id)arg1 ;
+(id)defaultWallpaperConfigurationFromWallpaperDictionary:(id)arg1 ;
+(id)verifiedPNGOrJPEGURLForImageName:(id)arg1 inDirectory:(id)arg2 ;
+(id)verifiedVideoURLForBaseName:(id)arg1 inDirectory:(id)arg2 ;
+(id)systemDefaultConfigurationSet;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)initWithSharedDefaultWallpaperConfiguration:(id)arg1 ;
-(id)initWithLockDefaultWallpaperConfiguration:(id)arg1 homeDefaultWallpaperConfiguration:(id)arg2 ;
-(SBFWallpaperDefaultConfiguration *)homeScreenDefaultWallpaperConfiguration;
-(SBFWallpaperDefaultConfiguration *)lockScreenDefaultWallpaperConfiguration;
-(BOOL)variantsShareDefaultWallpaperConfiguration;
-(SBFWallpaperDefaultConfiguration *)sharedDefaultWallpaperConfiguration;
-(id)defaultWallpaperConfigurationForVariant:(long long)arg1 ;
@end

