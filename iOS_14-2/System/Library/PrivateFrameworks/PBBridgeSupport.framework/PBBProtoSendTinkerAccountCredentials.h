/*
* Generated on Thursday, January 14, 2021 at 2:28:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
*/

#import <PBBridgeSupport/PBBridgeSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString;

@interface PBBProtoSendTinkerAccountCredentials : PBCodable <NSCopying> {

	NSData* _acceptedTermsData;
	NSString* _pairingParentAltDSID;
	NSString* _pairingParentAppleID;
	NSString* _password;
	NSString* _username;

}

@property (nonatomic,readonly) BOOL hasUsername; 
@property (nonatomic,retain) NSString * username;                          //@synthesize username=_username - In the implementation block
@property (nonatomic,readonly) BOOL hasPassword; 
@property (nonatomic,retain) NSString * password;                          //@synthesize password=_password - In the implementation block
@property (nonatomic,readonly) BOOL hasAcceptedTermsData; 
@property (nonatomic,retain) NSData * acceptedTermsData;                   //@synthesize acceptedTermsData=_acceptedTermsData - In the implementation block
@property (nonatomic,readonly) BOOL hasPairingParentAltDSID; 
@property (nonatomic,retain) NSString * pairingParentAltDSID;              //@synthesize pairingParentAltDSID=_pairingParentAltDSID - In the implementation block
@property (nonatomic,readonly) BOOL hasPairingParentAppleID; 
@property (nonatomic,retain) NSString * pairingParentAppleID;              //@synthesize pairingParentAppleID=_pairingParentAppleID - In the implementation block
-(id)dictionaryRepresentation;
-(void)setUsername:(NSString *)arg1 ;
-(BOOL)hasUsername;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)password;
-(NSString *)username;
-(id)description;
-(BOOL)hasPassword;
-(void)setPassword:(NSString *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)pairingParentAltDSID;
-(void)setPairingParentAltDSID:(NSString *)arg1 ;
-(void)setAcceptedTermsData:(NSData *)arg1 ;
-(void)setPairingParentAppleID:(NSString *)arg1 ;
-(BOOL)hasAcceptedTermsData;
-(BOOL)hasPairingParentAltDSID;
-(BOOL)hasPairingParentAppleID;
-(NSData *)acceptedTermsData;
-(NSString *)pairingParentAppleID;
@end

