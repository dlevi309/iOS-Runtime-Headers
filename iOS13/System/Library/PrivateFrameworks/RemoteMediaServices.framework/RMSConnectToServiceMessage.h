/*
* Generated on Monday, March 1, 2021 at 2:35:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
*/

#import <RemoteMediaServices/RemoteMediaServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, RMSServiceMessage;

@interface RMSConnectToServiceMessage : PBCodable <NSCopying> {

	NSString* _pairingGUID;
	RMSServiceMessage* _service;
	BOOL _allowPairing;
	SCD_Struct_RM1 _has;

}

@property (nonatomic,readonly) BOOL hasService; 
@property (nonatomic,retain) RMSServiceMessage * service;              //@synthesize service=_service - In the implementation block
@property (nonatomic,readonly) BOOL hasPairingGUID; 
@property (nonatomic,retain) NSString * pairingGUID;                   //@synthesize pairingGUID=_pairingGUID - In the implementation block
@property (assign,nonatomic) BOOL hasAllowPairing; 
@property (assign,nonatomic) BOOL allowPairing;                        //@synthesize allowPairing=_allowPairing - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(RMSServiceMessage *)service;
-(void)setService:(RMSServiceMessage *)arg1 ;
-(BOOL)hasService;
-(void)setPairingGUID:(NSString *)arg1 ;
-(BOOL)hasPairingGUID;
-(void)setAllowPairing:(BOOL)arg1 ;
-(void)setHasAllowPairing:(BOOL)arg1 ;
-(BOOL)hasAllowPairing;
-(NSString *)pairingGUID;
-(BOOL)allowPairing;
@end

