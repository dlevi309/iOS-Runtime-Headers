/*
* Generated on Thursday, January 14, 2021 at 2:24:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
*/

#import <ProtocolBuffer/PBCodable.h>

@class NSArray, LCServiceLoggingParameters, NSData;

@interface LCServiceLoggingConfiguration : PBCodable {

	BOOL _hasDefaultParameters;
	BOOL _hasConfigurationVersion;
	int _configurationVersion;
	NSArray* _applications;
	NSArray* _blacklistedBundleIdentifiers;
	LCServiceLoggingParameters* _defaultParameters;

}

@property (nonatomic,retain) LCServiceLoggingParameters * defaultParameters;              //@synthesize defaultParameters=_defaultParameters - In the implementation block
@property (assign,nonatomic) BOOL hasDefaultParameters;                                   //@synthesize hasDefaultParameters=_hasDefaultParameters - In the implementation block
@property (assign,nonatomic) int configurationVersion;                                    //@synthesize configurationVersion=_configurationVersion - In the implementation block
@property (assign,nonatomic) BOOL hasConfigurationVersion;                                //@synthesize hasConfigurationVersion=_hasConfigurationVersion - In the implementation block
@property (nonatomic,copy) NSArray * applications;                                        //@synthesize applications=_applications - In the implementation block
@property (nonatomic,copy) NSArray * blacklistedBundleIdentifiers;                        //@synthesize blacklistedBundleIdentifiers=_blacklistedBundleIdentifiers - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(id)dictionaryRepresentation;
-(void)setConfigurationVersion:(int)arg1 ;
-(void)addBlacklistedBundleIdentifiers:(id)arg1 ;
-(void)setApplications:(NSArray *)arg1 ;
-(BOOL)hasDefaultParameters;
-(NSData *)jsonData;
-(int)configurationVersion;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)blacklistedBundleIdentifiersCount;
-(void)clearBlacklistedBundleIdentifiers;
-(NSArray *)applications;
-(void)clearApplications;
-(void)setHasDefaultParameters:(BOOL)arg1 ;
-(void)addApplications:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(id)blacklistedBundleIdentifiersAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasConfigurationVersion;
-(LCServiceLoggingParameters *)defaultParameters;
-(void)writeTo:(id)arg1 ;
-(unsigned long long)applicationsCount;
-(void)setHasConfigurationVersion:(BOOL)arg1 ;
-(NSArray *)blacklistedBundleIdentifiers;
-(void)setBlacklistedBundleIdentifiers:(NSArray *)arg1 ;
-(void)setDefaultParameters:(LCServiceLoggingParameters *)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(id)applicationsAtIndex:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

