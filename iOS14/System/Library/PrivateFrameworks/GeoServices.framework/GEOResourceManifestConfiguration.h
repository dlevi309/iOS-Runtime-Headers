/*
* Generated on Thursday, January 14, 2021 at 2:20:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	NSString* _urlTemplate;

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
@property (nonatomic,copy) NSString * urlTemplate;                        //@synthesize urlTemplate=_urlTemplate - In the implementation block
@property (nonatomic,readonly) int defaultScale;                          //@synthesize defaultScale=_defaultScale - In the implementation block
@property (nonatomic,readonly) BOOL requiresLegacyFormat;                 //@synthesize requiresLegacyFormat=_requiresLegacyFormat - In the implementation block
@property (nonatomic,readonly) NSString * directorySuffix; 
+(BOOL)supportsSecureCoding;
+(id)defaultConfiguration;
+(id)configurationWithPairedDevice:(id)arg1 ;
-(void)setCountryCode:(NSString *)arg1 ;
-(NSString *)hardwareIdentifier;
-(void)setOsVersion:(NSString *)arg1 ;
-(void)setApplicationIdentifier:(NSString *)arg1 ;
-(NSString *)countryCode;
-(NSString *)dataDirectory;
-(id)init;
-(NSString *)osBuild;
-(void)setApplicationVersion:(NSString *)arg1 ;
-(NSArray *)tileSetOverrides;
-(int)defaultScale;
-(void)setDataDirectory:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)osVersion;
-(void)setUrlTemplate:(NSString *)arg1 ;
-(id)_directorySuffixParameters;
-(unsigned)tileGroupIdentifier;
-(NSString *)applicationIdentifier;
-(void)setTileGroupIdentifier:(unsigned)arg1 ;
-(void)setOsBuild:(NSString *)arg1 ;
-(void)setOs:(NSString *)arg1 ;
-(NSString *)os;
-(void)setTileSetOverrides:(NSArray *)arg1 ;
-(void)setEnvironment:(NSString *)arg1 ;
-(void)setHardwareIdentifier:(NSString *)arg1 ;
-(NSString *)urlTemplate;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)environment;
-(NSString *)applicationVersion;
-(BOOL)requiresLegacyFormat;
-(BOOL)isDefaultConfiguration;
-(id)manifestDictionaryRepresentation;
-(NSString *)directorySuffix;
-(BOOL)isEqual:(id)arg1 ;
@end

