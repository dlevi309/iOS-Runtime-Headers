/*
* Generated on Thursday, January 14, 2021 at 2:28:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Phoenix.framework/Phoenix
*/


@class NSString, AXPhoenixClassifierConfiguration, AXPhoenixMitigatorConfiguration;

@interface AXPhoenixConfiguration : NSObject {

	unsigned long long _assetVersion;
	NSString* _majorVersion;
	NSString* _minorVersion;
	AXPhoenixClassifierConfiguration* _classifierConfiguration;
	AXPhoenixMitigatorConfiguration* _mitigatorConfiguration;
	NSString* _majorVersionKey;
	NSString* _minorVersionKey;
	NSString* _classifierConfigurationKey;
	NSString* _mitigatorConfigurationKey;

}

@property (nonatomic,retain) NSString * majorVersionKey;                                              //@synthesize majorVersionKey=_majorVersionKey - In the implementation block
@property (nonatomic,retain) NSString * minorVersionKey;                                              //@synthesize minorVersionKey=_minorVersionKey - In the implementation block
@property (nonatomic,retain) NSString * classifierConfigurationKey;                                   //@synthesize classifierConfigurationKey=_classifierConfigurationKey - In the implementation block
@property (nonatomic,retain) NSString * mitigatorConfigurationKey;                                    //@synthesize mitigatorConfigurationKey=_mitigatorConfigurationKey - In the implementation block
@property (assign,nonatomic) unsigned long long assetVersion;                                         //@synthesize assetVersion=_assetVersion - In the implementation block
@property (nonatomic,retain) NSString * majorVersion;                                                 //@synthesize majorVersion=_majorVersion - In the implementation block
@property (nonatomic,retain) NSString * minorVersion;                                                 //@synthesize minorVersion=_minorVersion - In the implementation block
@property (nonatomic,retain) AXPhoenixClassifierConfiguration * classifierConfiguration;              //@synthesize classifierConfiguration=_classifierConfiguration - In the implementation block
@property (nonatomic,retain) AXPhoenixMitigatorConfiguration * mitigatorConfiguration;                //@synthesize mitigatorConfiguration=_mitigatorConfiguration - In the implementation block
-(unsigned long long)assetVersion;
-(void)setMajorVersion:(NSString *)arg1 ;
-(void)setMinorVersion:(NSString *)arg1 ;
-(id)init;
-(void)setAssetVersion:(unsigned long long)arg1 ;
-(NSString *)majorVersion;
-(NSString *)minorVersion;
-(AXPhoenixClassifierConfiguration *)classifierConfiguration;
-(AXPhoenixMitigatorConfiguration *)mitigatorConfiguration;
-(id)toStringifiedJSON;
-(id)initWithContentsOfFileAtPath:(id)arg1 ;
-(void)setConfigurationAssetVersion:(unsigned long long)arg1 ;
-(void)_initializeKeys;
-(void)_setDefaultConfiguration;
-(id)_updateConfigWithContentsOfDictionary:(id)arg1 ;
-(void)setMajorVersionKey:(NSString *)arg1 ;
-(void)setMinorVersionKey:(NSString *)arg1 ;
-(void)setClassifierConfigurationKey:(NSString *)arg1 ;
-(void)setMitigatorConfigurationKey:(NSString *)arg1 ;
-(void)setClassifierConfiguration:(AXPhoenixClassifierConfiguration *)arg1 ;
-(void)setMitigatorConfiguration:(AXPhoenixMitigatorConfiguration *)arg1 ;
-(NSString *)majorVersionKey;
-(NSString *)minorVersionKey;
-(NSString *)classifierConfigurationKey;
-(NSString *)mitigatorConfigurationKey;
@end

