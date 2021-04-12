/*
* Generated on Thursday, January 14, 2021 at 2:28:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
*/

#import <TVRemoteCore/TVRemoteCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, TVRMSServiceMessage;

@interface TVRMSConnectToServiceMessage : PBCodable <NSCopying> {

	NSString* _pairingGUID;
	TVRMSServiceMessage* _service;

}

@property (nonatomic,readonly) BOOL hasService; 
@property (nonatomic,retain) TVRMSServiceMessage * service;              //@synthesize service=_service - In the implementation block
@property (nonatomic,readonly) BOOL hasPairingGUID; 
@property (nonatomic,retain) NSString * pairingGUID;                     //@synthesize pairingGUID=_pairingGUID - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(BOOL)hasService;
-(void)setService:(TVRMSServiceMessage *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(TVRMSServiceMessage *)service;
-(void)setPairingGUID:(NSString *)arg1 ;
-(BOOL)hasPairingGUID;
-(NSString *)pairingGUID;
@end

