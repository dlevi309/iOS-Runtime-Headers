/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
*/

#import <CarKit/CarKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSValue, NSString;

@interface CRCarPlayCapabilities : NSObject <NSSecureCoding> {

	BOOL _persisted;
	unsigned long long _disabledFeature;
	long long _nowPlayingAlbumArtMode;
	NSValue* _viewAreaInsets;
	NSValue* _dashboardRoundedCorners;
	long long _userInterfaceStyle;
	NSString* _version;

}

@property (assign,nonatomic) NSString * version;                              //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) BOOL persisted;                                  //@synthesize persisted=_persisted - In the implementation block
@property (assign,nonatomic) unsigned long long disabledFeature;              //@synthesize disabledFeature=_disabledFeature - In the implementation block
@property (assign,nonatomic) long long nowPlayingAlbumArtMode;                //@synthesize nowPlayingAlbumArtMode=_nowPlayingAlbumArtMode - In the implementation block
@property (nonatomic,retain) NSValue * viewAreaInsets;                        //@synthesize viewAreaInsets=_viewAreaInsets - In the implementation block
@property (nonatomic,retain) NSValue * dashboardRoundedCorners;               //@synthesize dashboardRoundedCorners=_dashboardRoundedCorners - In the implementation block
@property (assign,nonatomic) long long userInterfaceStyle;                    //@synthesize userInterfaceStyle=_userInterfaceStyle - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)setCapabilitiesVersion:(id)arg1 ;
+(void)_resetCapabilitiesGlobalDomain;
+(void)invalidateCarPlayCapabilitiesCache;
+(id)newCapabilitiesFromGlobalDomain;
+(void)setCapabilitiesIdentifier:(id)arg1 ;
+(id)fetchCarCapabilities;
+(void)waitForCarCapabilitiesValues;
+(id)carPlayCapabilitiesCache;
+(id)capabilitiesIdentifier;
+(void)setCarPlayCapabilitiesCache:(id)arg1 ;
+(id)capabilitiesVersion;
-(id)dictionaryRepresentation;
-(void)setPersisted:(BOOL)arg1 ;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(long long)userInterfaceStyle;
-(void)setViewAreaInsets:(NSValue *)arg1 ;
-(id)init;
-(unsigned long long)disabledFeature;
-(long long)nowPlayingAlbumArtMode;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqualToCapabilities:(id)arg1 ;
-(id)description;
-(void)setDisabledFeature:(unsigned long long)arg1 ;
-(void)setUserInterfaceStyle:(long long)arg1 ;
-(void)persistCapabilitiesToGlobalDomain;
-(id)initWithCoder:(id)arg1 ;
-(void)setNowPlayingAlbumArtMode:(long long)arg1 ;
-(NSValue *)viewAreaInsets;
-(void)setVersion:(NSString *)arg1 ;
-(void)setDashboardRoundedCorners:(NSValue *)arg1 ;
-(BOOL)persisted;
-(NSString *)version;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)informativeText;
-(NSValue *)dashboardRoundedCorners;
-(BOOL)isEqual:(id)arg1 ;
@end

