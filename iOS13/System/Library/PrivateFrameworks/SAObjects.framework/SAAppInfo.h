/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainObject.h>

@class NSString, SASyncAppIdentifyingInfo, NSDictionary, NSArray, SAGlance, NSNumber, SASiriSupport, SAStarkSupport;

@interface SAAppInfo : SADomainObject

@property (nonatomic,copy) NSString * adamId; 
@property (nonatomic,copy) NSString * appId; 
@property (nonatomic,retain) SASyncAppIdentifyingInfo * appIdentifyingInfo; 
@property (nonatomic,copy) NSString * appName; 
@property (nonatomic,copy) NSDictionary * appNameMap; 
@property (nonatomic,copy) NSArray * appNameSynonyms; 
@property (nonatomic,copy) NSDictionary * appNameSynonymsMap; 
@property (nonatomic,copy) NSString * appVersion; 
@property (assign,nonatomic) BOOL betaApp; 
@property (nonatomic,copy) NSString * carPlayAlternativeDisplayName; 
@property (nonatomic,copy) NSDictionary * carPlayAlternativeDisplayNameMap; 
@property (nonatomic,copy) NSString * containerName; 
@property (nonatomic,copy) NSString * displayAppName; 
@property (nonatomic,copy) NSDictionary * displayAppNameMap; 
@property (nonatomic,retain) SAGlance * glance; 
@property (assign,nonatomic) BOOL hasSiriIntegration; 
@property (assign,nonatomic) BOOL hidden; 
@property (assign,nonatomic) BOOL isMacApp; 
@property (assign,nonatomic) BOOL isNanoApp; 
@property (nonatomic,copy) NSNumber * nowPlayingAppWithBrowsableContent; 
@property (nonatomic,copy) NSString * providerName; 
@property (nonatomic,retain) SASiriSupport * siriSupport; 
@property (nonatomic,copy) NSString * spokenName; 
@property (nonatomic,copy) NSDictionary * spokenNameMap; 
@property (nonatomic,copy) NSString * spotlightName; 
@property (nonatomic,copy) NSDictionary * spotlightNameMap; 
@property (nonatomic,retain) SAStarkSupport * starkSupport; 
@property (nonatomic,copy) NSArray * supportedCommands; 
@property (nonatomic,copy) NSArray * supportedSchemes; 
@property (assign,nonatomic) BOOL supportsUniversalSearchSubscription; 
+(id)appInfo;
+(id)appInfoWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)containerName;
-(void)setContainerName:(NSString *)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(NSString *)appId;
-(NSString *)appName;
-(BOOL)hidden;
-(void)setAppName:(NSString *)arg1 ;
-(NSString *)spokenName;
-(void)setSpokenName:(NSString *)arg1 ;
-(void)setAppId:(NSString *)arg1 ;
-(NSString *)providerName;
-(NSString *)adamId;
-(void)setAdamId:(NSString *)arg1 ;
-(NSString *)appVersion;
-(void)setAppVersion:(NSString *)arg1 ;
-(void)setProviderName:(NSString *)arg1 ;
-(NSString *)spotlightName;
-(void)setSpotlightName:(NSString *)arg1 ;
-(id)encodedClassName;
-(SASyncAppIdentifyingInfo *)appIdentifyingInfo;
-(void)setAppIdentifyingInfo:(SASyncAppIdentifyingInfo *)arg1 ;
-(NSArray *)supportedCommands;
-(void)setSupportedCommands:(NSArray *)arg1 ;
-(void)setDisplayAppName:(NSString *)arg1 ;
-(NSString *)displayAppName;
-(SAGlance *)glance;
-(SAStarkSupport *)starkSupport;
-(NSDictionary *)appNameMap;
-(void)setAppNameMap:(NSDictionary *)arg1 ;
-(NSArray *)appNameSynonyms;
-(void)setAppNameSynonyms:(NSArray *)arg1 ;
-(NSDictionary *)appNameSynonymsMap;
-(void)setAppNameSynonymsMap:(NSDictionary *)arg1 ;
-(BOOL)betaApp;
-(void)setBetaApp:(BOOL)arg1 ;
-(NSString *)carPlayAlternativeDisplayName;
-(void)setCarPlayAlternativeDisplayName:(NSString *)arg1 ;
-(NSDictionary *)carPlayAlternativeDisplayNameMap;
-(void)setCarPlayAlternativeDisplayNameMap:(NSDictionary *)arg1 ;
-(NSDictionary *)displayAppNameMap;
-(void)setDisplayAppNameMap:(NSDictionary *)arg1 ;
-(void)setGlance:(SAGlance *)arg1 ;
-(BOOL)hasSiriIntegration;
-(void)setHasSiriIntegration:(BOOL)arg1 ;
-(BOOL)isMacApp;
-(void)setIsMacApp:(BOOL)arg1 ;
-(BOOL)isNanoApp;
-(void)setIsNanoApp:(BOOL)arg1 ;
-(NSNumber *)nowPlayingAppWithBrowsableContent;
-(void)setNowPlayingAppWithBrowsableContent:(NSNumber *)arg1 ;
-(SASiriSupport *)siriSupport;
-(void)setSiriSupport:(SASiriSupport *)arg1 ;
-(NSDictionary *)spokenNameMap;
-(void)setSpokenNameMap:(NSDictionary *)arg1 ;
-(NSDictionary *)spotlightNameMap;
-(void)setSpotlightNameMap:(NSDictionary *)arg1 ;
-(void)setStarkSupport:(SAStarkSupport *)arg1 ;
-(NSArray *)supportedSchemes;
-(void)setSupportedSchemes:(NSArray *)arg1 ;
-(BOOL)supportsUniversalSearchSubscription;
-(void)setSupportsUniversalSearchSubscription:(BOOL)arg1 ;
@end

