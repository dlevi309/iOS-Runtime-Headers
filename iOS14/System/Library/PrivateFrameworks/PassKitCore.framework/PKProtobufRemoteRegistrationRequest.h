/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PKProtobufRemoteRegistrationRequest : PBRequest <NSCopying> {

	unsigned _version;
	BOOL _registerBroker;
	BOOL _registerPeerPayment;
	SCD_Struct_PK7 _has;

}

@property (assign,nonatomic) unsigned version;                         //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) BOOL hasRegisterBroker; 
@property (assign,nonatomic) BOOL registerBroker;                      //@synthesize registerBroker=_registerBroker - In the implementation block
@property (assign,nonatomic) BOOL hasRegisterPeerPayment; 
@property (assign,nonatomic) BOOL registerPeerPayment;                 //@synthesize registerPeerPayment=_registerPeerPayment - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasRegisterBroker;
-(void)setHasRegisterBroker:(BOOL)arg1 ;
-(void)setHasRegisterPeerPayment:(BOOL)arg1 ;
-(BOOL)hasRegisterPeerPayment;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setVersion:(unsigned)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)registerBroker;
-(void)setRegisterBroker:(BOOL)arg1 ;
-(BOOL)registerPeerPayment;
-(void)setRegisterPeerPayment:(BOOL)arg1 ;
-(unsigned)version;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

