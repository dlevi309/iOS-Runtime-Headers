/*
* Generated on Thursday, January 14, 2021 at 2:21:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INJSONSerializable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber, NSArray;

@interface INPrivateMediaItemValueData : NSObject <INJSONSerializable, NSCopying, NSSecureCoding> {

	NSString* _recommendationId;
	NSString* _assetInfo;
	NSString* _sharedUserIdFromPlayableMusicAccount;
	NSString* _punchoutURI;
	NSNumber* _requiresSubscription;
	NSString* _provider;
	NSNumber* _isAvailable;
	NSNumber* _isHardBan;
	NSString* _bundleId;
	NSString* _universalResourceLink;
	NSString* _providerAppName;
	NSArray* _internalSignals;
	NSNumber* _ampConfidenceScore;
	long long _ampConfidenceLevel;
	NSArray* _mediaSubItems;

}

@property (nonatomic,copy,readonly) NSString * recommendationId;                                  //@synthesize recommendationId=_recommendationId - In the implementation block
@property (nonatomic,copy,readonly) NSString * assetInfo;                                         //@synthesize assetInfo=_assetInfo - In the implementation block
@property (nonatomic,copy,readonly) NSString * sharedUserIdFromPlayableMusicAccount;              //@synthesize sharedUserIdFromPlayableMusicAccount=_sharedUserIdFromPlayableMusicAccount - In the implementation block
@property (nonatomic,copy,readonly) NSString * punchoutURI;                                       //@synthesize punchoutURI=_punchoutURI - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * requiresSubscription;                              //@synthesize requiresSubscription=_requiresSubscription - In the implementation block
@property (nonatomic,copy,readonly) NSString * provider;                                          //@synthesize provider=_provider - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * isAvailable;                                       //@synthesize isAvailable=_isAvailable - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * isHardBan;                                         //@synthesize isHardBan=_isHardBan - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleId;                                          //@synthesize bundleId=_bundleId - In the implementation block
@property (nonatomic,copy,readonly) NSString * universalResourceLink;                             //@synthesize universalResourceLink=_universalResourceLink - In the implementation block
@property (nonatomic,copy,readonly) NSString * providerAppName;                                   //@synthesize providerAppName=_providerAppName - In the implementation block
@property (nonatomic,copy,readonly) NSArray * internalSignals;                                    //@synthesize internalSignals=_internalSignals - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * ampConfidenceScore;                                //@synthesize ampConfidenceScore=_ampConfidenceScore - In the implementation block
@property (nonatomic,readonly) long long ampConfidenceLevel;                                      //@synthesize ampConfidenceLevel=_ampConfidenceLevel - In the implementation block
@property (nonatomic,copy,readonly) NSArray * mediaSubItems;                                      //@synthesize mediaSubItems=_mediaSubItems - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3 ;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(NSNumber *)isAvailable;
-(id)initWithRecommendationId:(id)arg1 assetInfo:(id)arg2 sharedUserIdFromPlayableMusicAccount:(id)arg3 punchoutURI:(id)arg4 requiresSubscription:(id)arg5 provider:(id)arg6 isAvailable:(id)arg7 isHardBan:(id)arg8 bundleId:(id)arg9 universalResourceLink:(id)arg10 providerAppName:(id)arg11 mediaSubItems:(id)arg12 ;
-(id)initWithRecommendationId:(id)arg1 assetInfo:(id)arg2 sharedUserIdFromPlayableMusicAccount:(id)arg3 punchoutURI:(id)arg4 requiresSubscription:(id)arg5 provider:(id)arg6 isAvailable:(id)arg7 isHardBan:(id)arg8 bundleId:(id)arg9 universalResourceLink:(id)arg10 providerAppName:(id)arg11 internalSignals:(id)arg12 mediaSubItems:(id)arg13 ;
-(id)initWithRecommendationId:(id)arg1 assetInfo:(id)arg2 sharedUserIdFromPlayableMusicAccount:(id)arg3 punchoutURI:(id)arg4 requiresSubscription:(id)arg5 provider:(id)arg6 isAvailable:(id)arg7 isHardBan:(id)arg8 bundleId:(id)arg9 universalResourceLink:(id)arg10 providerAppName:(id)arg11 internalSignals:(id)arg12 ampConfidenceScore:(id)arg13 ampConfidenceLevel:(long long)arg14 mediaSubItems:(id)arg15 ;
-(NSString *)assetInfo;
-(NSString *)provider;
-(NSNumber *)isHardBan;
-(long long)ampConfidenceLevel;
-(NSNumber *)ampConfidenceScore;
-(NSArray *)internalSignals;
-(NSArray *)mediaSubItems;
-(NSString *)providerAppName;
-(NSString *)punchoutURI;
-(NSString *)recommendationId;
-(NSString *)bundleId;
-(NSNumber *)requiresSubscription;
-(NSString *)sharedUserIdFromPlayableMusicAccount;
-(NSString *)universalResourceLink;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(NSString *)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithRecommendationId:(id)arg1 assetInfo:(id)arg2 sharedUserIdFromPlayableMusicAccount:(id)arg3 punchoutURI:(id)arg4 mediaSubItems:(id)arg5 ;
-(id)initWithRecommendationId:(id)arg1 assetInfo:(id)arg2 mediaSubItems:(id)arg3 ;
-(id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

