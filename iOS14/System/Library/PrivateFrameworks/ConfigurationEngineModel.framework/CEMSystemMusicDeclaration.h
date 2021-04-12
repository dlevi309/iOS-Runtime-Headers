/*
* Generated on Thursday, January 14, 2021 at 2:24:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMConfigurationBase.h>
#import <libobjc.A.dylib/CEMRegisteredTypeProtocol.h>

@class NSNumber, NSString;

@interface CEMSystemMusicDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {

	NSNumber* _payloadAllowMusicService;
	NSNumber* _payloadAllowRadioService;
	NSNumber* _payloadAllowMusicArtistActivity;
	NSNumber* _payloadAllowMusicVideos;

}

@property (nonatomic,copy) NSNumber * payloadAllowMusicService;                     //@synthesize payloadAllowMusicService=_payloadAllowMusicService - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAllowRadioService;                     //@synthesize payloadAllowRadioService=_payloadAllowRadioService - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAllowMusicArtistActivity;              //@synthesize payloadAllowMusicArtistActivity=_payloadAllowMusicArtistActivity - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAllowMusicVideos;                      //@synthesize payloadAllowMusicVideos=_payloadAllowMusicVideos - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 ;
+(id)allowedPayloadKeys;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)profileType;
+(id)restrictionPayloadKeys;
+(id)buildWithIdentifier:(id)arg1 withAllowMusicService:(id)arg2 withAllowRadioService:(id)arg3 withAllowMusicArtistActivity:(id)arg4 withAllowMusicVideos:(id)arg5 ;
+(id)buildWithIdentifier:(id)arg1 withAllowMusicService:(id)arg2 withAllowRadioService:(id)arg3 withAllowMusicArtistActivity:(id)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)multipleAllowed;
-(BOOL)mustBeSupervised;
-(int)activationLevel;
-(id)assetReferences;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadAllowMusicService:(NSNumber *)arg1 ;
-(void)setPayloadAllowRadioService:(NSNumber *)arg1 ;
-(void)setPayloadAllowMusicArtistActivity:(NSNumber *)arg1 ;
-(void)setPayloadAllowMusicVideos:(NSNumber *)arg1 ;
-(NSNumber *)payloadAllowMusicService;
-(NSNumber *)payloadAllowRadioService;
-(NSNumber *)payloadAllowMusicArtistActivity;
-(NSNumber *)payloadAllowMusicVideos;
@end

