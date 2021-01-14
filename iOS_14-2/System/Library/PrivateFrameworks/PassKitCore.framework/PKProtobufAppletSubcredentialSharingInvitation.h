/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface PKProtobufAppletSubcredentialSharingInvitation : PBCodable <NSCopying> {

	NSString* _deviceModel;
	int _deviceType;
	unsigned _entitlement;
	NSString* _identifier;
	NSData* _invitation;
	NSString* _issuer;
	NSString* _pairedReaderIdentifier;
	NSString* _partnerIdentifier;
	NSString* _recipientName;
	NSData* _sharingSessionIdentifier;
	unsigned _version;
	SCD_Struct_PK7 _has;

}

@property (assign,nonatomic) unsigned version;                                //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) BOOL hasInvitation; 
@property (nonatomic,retain) NSData * invitation;                             //@synthesize invitation=_invitation - In the implementation block
@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;                           //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL hasPartnerIdentifier; 
@property (nonatomic,retain) NSString * partnerIdentifier;                    //@synthesize partnerIdentifier=_partnerIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasPairedReaderIdentifier; 
@property (nonatomic,retain) NSString * pairedReaderIdentifier;               //@synthesize pairedReaderIdentifier=_pairedReaderIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasRecipientName; 
@property (nonatomic,retain) NSString * recipientName;                        //@synthesize recipientName=_recipientName - In the implementation block
@property (nonatomic,readonly) BOOL hasSharingSessionIdentifier; 
@property (nonatomic,retain) NSData * sharingSessionIdentifier;               //@synthesize sharingSessionIdentifier=_sharingSessionIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasEntitlement; 
@property (assign,nonatomic) unsigned entitlement;                            //@synthesize entitlement=_entitlement - In the implementation block
@property (assign,nonatomic) BOOL hasDeviceType; 
@property (assign,nonatomic) int deviceType;                                  //@synthesize deviceType=_deviceType - In the implementation block
@property (nonatomic,readonly) BOOL hasIssuer; 
@property (nonatomic,retain) NSString * issuer;                               //@synthesize issuer=_issuer - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceModel; 
@property (nonatomic,retain) NSString * deviceModel;                          //@synthesize deviceModel=_deviceModel - In the implementation block
-(BOOL)hasDeviceType;
-(id)dictionaryRepresentation;
-(void)setDeviceModel:(NSString *)arg1 ;
-(int)deviceType;
-(NSString *)deviceModel;
-(int)StringAsDeviceType:(id)arg1 ;
-(unsigned)entitlement;
-(BOOL)hasDeviceModel;
-(NSString *)issuer;
-(void)setPairedReaderIdentifier:(NSString *)arg1 ;
-(BOOL)hasIdentifier;
-(void)setDeviceType:(int)arg1 ;
-(id)deviceTypeAsString:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)recipientName;
-(NSString *)partnerIdentifier;
-(id)description;
-(void)setIssuer:(NSString *)arg1 ;
-(void)setRecipientName:(NSString *)arg1 ;
-(NSString *)pairedReaderIdentifier;
-(BOOL)hasIssuer;
-(NSData *)sharingSessionIdentifier;
-(void)setSharingSessionIdentifier:(NSData *)arg1 ;
-(BOOL)hasRecipientName;
-(BOOL)hasEntitlement;
-(BOOL)hasPartnerIdentifier;
-(BOOL)hasPairedReaderIdentifier;
-(BOOL)hasSharingSessionIdentifier;
-(void)setHasEntitlement:(BOOL)arg1 ;
-(unsigned long long)hash;
-(void)setEntitlement:(unsigned)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setVersion:(unsigned)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setPartnerIdentifier:(NSString *)arg1 ;
-(void)setHasDeviceType:(BOOL)arg1 ;
-(NSData *)invitation;
-(void)setInvitation:(NSData *)arg1 ;
-(unsigned)version;
-(BOOL)hasInvitation;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

