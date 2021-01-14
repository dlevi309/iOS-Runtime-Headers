/*
* Generated on Thursday, January 14, 2021 at 2:28:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface NPKProtoStandalonePaymentDigitalIssuanceMetadata : PBCodable <NSCopying> {

	NSString* _action;
	NSMutableArray* _defaultSuggestions;
	NSString* _merchantID;
	NSMutableArray* _serviceProviderAcceptedNetworks;
	NSMutableArray* _serviceProviderCapabilities;
	NSString* _serviceProviderCountryCode;
	NSString* _serviceProviderDictJson;
	NSString* _serviceProviderIdentifier;

}

@property (nonatomic,readonly) BOOL hasServiceProviderIdentifier; 
@property (nonatomic,retain) NSString * serviceProviderIdentifier;                          //@synthesize serviceProviderIdentifier=_serviceProviderIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasServiceProviderCountryCode; 
@property (nonatomic,retain) NSString * serviceProviderCountryCode;                         //@synthesize serviceProviderCountryCode=_serviceProviderCountryCode - In the implementation block
@property (nonatomic,retain) NSMutableArray * serviceProviderAcceptedNetworks;              //@synthesize serviceProviderAcceptedNetworks=_serviceProviderAcceptedNetworks - In the implementation block
@property (nonatomic,retain) NSMutableArray * serviceProviderCapabilities;                  //@synthesize serviceProviderCapabilities=_serviceProviderCapabilities - In the implementation block
@property (nonatomic,readonly) BOOL hasServiceProviderDictJson; 
@property (nonatomic,retain) NSString * serviceProviderDictJson;                            //@synthesize serviceProviderDictJson=_serviceProviderDictJson - In the implementation block
@property (nonatomic,readonly) BOOL hasAction; 
@property (nonatomic,retain) NSString * action;                                             //@synthesize action=_action - In the implementation block
@property (nonatomic,readonly) BOOL hasMerchantID; 
@property (nonatomic,retain) NSString * merchantID;                                         //@synthesize merchantID=_merchantID - In the implementation block
@property (nonatomic,retain) NSMutableArray * defaultSuggestions;                           //@synthesize defaultSuggestions=_defaultSuggestions - In the implementation block
+(Class)serviceProviderAcceptedNetworksType;
+(Class)serviceProviderCapabilitiesType;
+(Class)defaultSuggestionsType;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)action;
-(void)setAction:(NSString *)arg1 ;
-(id)description;
-(BOOL)hasAction;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setServiceProviderIdentifier:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)merchantID;
-(NSString *)serviceProviderIdentifier;
-(NSString *)serviceProviderCountryCode;
-(NSMutableArray *)serviceProviderAcceptedNetworks;
-(NSMutableArray *)serviceProviderCapabilities;
-(NSMutableArray *)defaultSuggestions;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setMerchantID:(NSString *)arg1 ;
-(BOOL)hasMerchantID;
-(void)setServiceProviderCountryCode:(NSString *)arg1 ;
-(void)addServiceProviderAcceptedNetworks:(id)arg1 ;
-(void)addServiceProviderCapabilities:(id)arg1 ;
-(void)setServiceProviderDictJson:(NSString *)arg1 ;
-(void)addDefaultSuggestions:(id)arg1 ;
-(unsigned long long)serviceProviderAcceptedNetworksCount;
-(void)clearServiceProviderAcceptedNetworks;
-(id)serviceProviderAcceptedNetworksAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)serviceProviderCapabilitiesCount;
-(void)clearServiceProviderCapabilities;
-(id)serviceProviderCapabilitiesAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)defaultSuggestionsCount;
-(void)clearDefaultSuggestions;
-(id)defaultSuggestionsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasServiceProviderIdentifier;
-(BOOL)hasServiceProviderCountryCode;
-(BOOL)hasServiceProviderDictJson;
-(void)setServiceProviderAcceptedNetworks:(NSMutableArray *)arg1 ;
-(void)setServiceProviderCapabilities:(NSMutableArray *)arg1 ;
-(NSString *)serviceProviderDictJson;
-(void)setDefaultSuggestions:(NSMutableArray *)arg1 ;
@end

