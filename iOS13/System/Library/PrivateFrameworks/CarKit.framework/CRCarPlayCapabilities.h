/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)capabilitiesIdentifier;
+(id)fetchCarCapabilities;
+(id)newCapabilitiesFromGlobalDomain;
+(id)carPlayCapabilitiesCache;
+(void)invalidateCarPlayCapabilitiesCache;
+(void)setCarPlayCapabilitiesCache:(id)arg1 ;
+(void)setCapabilitiesIdentifier:(id)arg1 ;
+(void)setCapabilitiesVersion:(id)arg1 ;
+(id)capabilitiesVersion;
+(void)_resetCapabilitiesGlobalDomain;
+(void)waitForCarCapabilitiesValues;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)version;
-(id)dictionaryRepresentation;
-(void)setVersion:(NSString *)arg1 ;
-(long long)userInterfaceStyle;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(void)setUserInterfaceStyle:(long long)arg1 ;
-(id)informativeText;
-(BOOL)isEqualToCapabilities:(id)arg1 ;
-(long long)nowPlayingAlbumArtMode;
-(NSValue *)viewAreaInsets;
-(NSValue *)dashboardRoundedCorners;
-(void)setViewAreaInsets:(NSValue *)arg1 ;
-(void)setDashboardRoundedCorners:(NSValue *)arg1 ;
-(void)setNowPlayingAlbumArtMode:(long long)arg1 ;
-(void)setDisabledFeature:(unsigned long long)arg1 ;
-(unsigned long long)disabledFeature;
-(BOOL)persisted;
-(void)setPersisted:(BOOL)arg1 ;
-(void)persistCapabilitiesToGlobalDomain;
@end

