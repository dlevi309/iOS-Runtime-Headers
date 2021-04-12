/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface NPKProtoCompanionMigratedResponse : PBCodable <NSCopying> {

	NSData* _errorData;
	NSData* _paymentWebServiceContextData;
	NSData* _peerPaymentAccountData;
	NSData* _peerPaymentWebServiceContextData;
	BOOL _pending;
	BOOL _success;
	SCD_Struct_NP1 _has;

}

@property (assign,nonatomic) BOOL hasPending; 
@property (assign,nonatomic) BOOL pending;                                            //@synthesize pending=_pending - In the implementation block
@property (assign,nonatomic) BOOL hasSuccess; 
@property (assign,nonatomic) BOOL success;                                            //@synthesize success=_success - In the implementation block
@property (nonatomic,readonly) BOOL hasErrorData; 
@property (nonatomic,retain) NSData * errorData;                                      //@synthesize errorData=_errorData - In the implementation block
@property (nonatomic,readonly) BOOL hasPaymentWebServiceContextData; 
@property (nonatomic,retain) NSData * paymentWebServiceContextData;                   //@synthesize paymentWebServiceContextData=_paymentWebServiceContextData - In the implementation block
@property (nonatomic,readonly) BOOL hasPeerPaymentWebServiceContextData; 
@property (nonatomic,retain) NSData * peerPaymentWebServiceContextData;               //@synthesize peerPaymentWebServiceContextData=_peerPaymentWebServiceContextData - In the implementation block
@property (nonatomic,readonly) BOOL hasPeerPaymentAccountData; 
@property (nonatomic,retain) NSData * peerPaymentAccountData;                         //@synthesize peerPaymentAccountData=_peerPaymentAccountData - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)success;
-(void)setSuccess:(BOOL)arg1 ;
-(void)setPending:(BOOL)arg1 ;
-(BOOL)pending;
-(BOOL)hasSuccess;
-(void)setHasSuccess:(BOOL)arg1 ;
-(void)setHasPending:(BOOL)arg1 ;
-(BOOL)hasPending;
-(void)setErrorData:(NSData *)arg1 ;
-(BOOL)hasErrorData;
-(NSData *)errorData;
-(void)setPeerPaymentWebServiceContextData:(NSData *)arg1 ;
-(void)setPeerPaymentAccountData:(NSData *)arg1 ;
-(BOOL)hasPeerPaymentWebServiceContextData;
-(BOOL)hasPeerPaymentAccountData;
-(NSData *)peerPaymentWebServiceContextData;
-(NSData *)peerPaymentAccountData;
-(void)setPaymentWebServiceContextData:(NSData *)arg1 ;
-(BOOL)hasPaymentWebServiceContextData;
-(NSData *)paymentWebServiceContextData;
@end

