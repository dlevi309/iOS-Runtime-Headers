/*
* Generated on Monday, March 1, 2021 at 2:30:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface GEOResourceManifestConfiguration : NSObject <NSSecureCoding> {

	unsigned _tileGroupIdentifier;
	NSString* _os;
	NSString* _osVersion;
	NSString* _osBuild;
	NSString* _countryCode;
	NSString* _hardwareIdentifier;
	NSString* _applicationIdentifier;
	NSString* _applicationVersion;
	NSString* _environment;
	NSString* _dataDirectory;
	int _defaultScale;
	BOOL _requiresLegacyFormat;
	NSArray* _tileSetOverrides;

}

@property (nonatomic,copy) NSArray * tileSetOverrides; 
@property (assign,nonatomic) unsigned tileGroupIdentifier;                //@synthesize tileGroupIdentifier=_tileGroupIdentifier - In the implementation block
@property (nonatomic,copy) NSString * os;                                 //@synthesize os=_os - In the implementation block
@property (nonatomic,copy) NSString * osVersion;                          //@synthesize osVersion=_osVersion - In the implementation block
@property (nonatomic,copy) NSString * osBuild;                            //@synthesize osBuild=_osBuild - In the implementation block
@property (nonatomic,copy) NSString * countryCode;                        //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,copy) NSString * hardwareIdentifier;                 //@synthesize hardwareIdentifier=_hardwareIdentifier - In the implementation block
@property (nonatomic,copy) NSString * applicationIdentifier;              //@synthesize applicationIdentifier=_applicationIdentifier - In the implementation block
@property (nonatomic,copy) NSString * applicationVersion;                 //@synthesize applicationVersion=_applicationVersion - In the implementation block
@property (nonatomic,copy) NSString * environment;                        //@synthesize environment=_environment - In the implementation block
@property (nonatomic,copy) NSString * dataDirectory;                      //@synthesize dataDirectory=_dataDirectory - In the implementation block
@property (nonatomic,readonly) int defaultScale;                          //@synthesize defaultScale=_defaultScale - In the implementation block
@property (nonatomic,readonly) BOOL requiresLegacyFormat;                 //@synthesize requiresLegacyFormat=_requiresLegacyFormat - In the implementation block
@property (nonatomic,readonly) NSString * directorySuffix; 
+(BOOL)supportsSecureCoding;
+(id)defaultConfiguration;
+(id)configurationWithPairedDevice:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)countryCode;
-(NSString *)environment;
-(void)setEnvironment:(NSString *)arg1 ;
-(NSString *)applicationIdentifier;
-(void)setApplicationIdentifier:(NSString *)arg1 ;
-(NSString *)osBuild;
-(NSString *)dataDirectory;
-(NSString *)hardwareIdentifier;
-(void)setApplicationVersion:(NSString *)arg1 ;
-(void)setCountryCode:(NSString *)arg1 ;
-(void)setTileGroupIdentifier:(unsigned)arg1 ;
-(BOOL)isDefaultConfiguration;
-(int)defaultScale;
-(NSString *)osVersion;
-(void)setHardwareIdentifier:(NSString *)arg1 ;
-(void)setOsVersion:(NSString *)arg1 ;
-(void)setOsBuild:(NSString *)arg1 ;
-(NSString *)directorySuffix;
-(void)setDataDirectory:(NSString *)arg1 ;
-(void)setOs:(NSString *)arg1 ;
-(NSString *)os;
-(NSString *)applicationVersion;
-(id)_directorySuffixParameters;
-(id)manifestDictionaryRepresentation;
-(void)setTileSetOverrides:(NSArray *)arg1 ;
-(NSArray *)tileSetOverrides;
-(unsigned)tileGroupIdentifier;
-(BOOL)requiresLegacyFormat;
@end

