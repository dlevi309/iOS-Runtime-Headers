/*
* Generated on Monday, March 1, 2021 at 2:34:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMConfigurationBase.h>
#import <libobjc.A.dylib/CEMRegisteredTypeProtocol.h>

@class NSNumber, NSArray, NSString;

@interface CEMLegacyRestrictionsAppsDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {

	NSNumber* _payloadAllowChat;
	NSNumber* _payloadAllowiTunes;
	NSNumber* _payloadAllowNews;
	NSNumber* _payloadAllowPodcasts;
	NSNumber* _payloadAllowSafari;
	NSNumber* _payloadAllowVideoConferencing;
	NSArray* _payloadBlacklistedAppBundleIDs;

}

@property (assign,nonatomic) BOOL st_payloadAllowMail; 
@property (assign,nonatomic) BOOL st_payloadAllowWallet; 
@property (nonatomic,copy) NSNumber * payloadAllowChat;                           //@synthesize payloadAllowChat=_payloadAllowChat - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAllowiTunes;                         //@synthesize payloadAllowiTunes=_payloadAllowiTunes - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAllowNews;                           //@synthesize payloadAllowNews=_payloadAllowNews - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAllowPodcasts;                       //@synthesize payloadAllowPodcasts=_payloadAllowPodcasts - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAllowSafari;                         //@synthesize payloadAllowSafari=_payloadAllowSafari - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAllowVideoConferencing;              //@synthesize payloadAllowVideoConferencing=_payloadAllowVideoConferencing - In the implementation block
@property (nonatomic,copy) NSArray * payloadBlacklistedAppBundleIDs;              //@synthesize payloadBlacklistedAppBundleIDs=_payloadBlacklistedAppBundleIDs - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)profileType;
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 ;
+(id)allowedPayloadKeys;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)restrictionPayloadKeys;
+(id)buildWithIdentifier:(id)arg1 withAllowChat:(id)arg2 withAllowiTunes:(id)arg3 withAllowNews:(id)arg4 withAllowPodcasts:(id)arg5 withAllowSafari:(id)arg6 withAllowVideoConferencing:(id)arg7 withBlacklistedAppBundleIDs:(id)arg8 ;
-(BOOL)st_payloadAllowMail;
-(void)setSt_payloadAllowMail:(BOOL)arg1 ;
-(BOOL)st_payloadAllowWallet;
-(void)setSt_payloadAllowWallet:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)multipleAllowed;
-(BOOL)mustBeSupervised;
-(int)activationLevel;
-(id)assetReferences;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadAllowChat:(NSNumber *)arg1 ;
-(void)setPayloadAllowiTunes:(NSNumber *)arg1 ;
-(void)setPayloadAllowNews:(NSNumber *)arg1 ;
-(void)setPayloadAllowPodcasts:(NSNumber *)arg1 ;
-(void)setPayloadAllowSafari:(NSNumber *)arg1 ;
-(void)setPayloadAllowVideoConferencing:(NSNumber *)arg1 ;
-(void)setPayloadBlacklistedAppBundleIDs:(NSArray *)arg1 ;
-(NSNumber *)payloadAllowChat;
-(NSNumber *)payloadAllowiTunes;
-(NSNumber *)payloadAllowNews;
-(NSNumber *)payloadAllowPodcasts;
-(NSNumber *)payloadAllowSafari;
-(NSNumber *)payloadAllowVideoConferencing;
-(NSArray *)payloadBlacklistedAppBundleIDs;
@end

