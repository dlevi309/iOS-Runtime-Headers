/*
* Generated on Thursday, January 14, 2021 at 2:28:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface NPKProtoPeerPaymentWebServiceContextDidChangeRequest : PBRequest <NSCopying> {

	NSData* _peerPaymentAccountData;
	NSData* _peerPaymentWebServiceContextData;

}

@property (nonatomic,readonly) BOOL hasPeerPaymentWebServiceContextData; 
@property (nonatomic,retain) NSData * peerPaymentWebServiceContextData;               //@synthesize peerPaymentWebServiceContextData=_peerPaymentWebServiceContextData - In the implementation block
@property (nonatomic,readonly) BOOL hasPeerPaymentAccountData; 
@property (nonatomic,retain) NSData * peerPaymentAccountData;                         //@synthesize peerPaymentAccountData=_peerPaymentAccountData - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setPeerPaymentWebServiceContextData:(NSData *)arg1 ;
-(void)setPeerPaymentAccountData:(NSData *)arg1 ;
-(BOOL)hasPeerPaymentWebServiceContextData;
-(BOOL)hasPeerPaymentAccountData;
-(NSData *)peerPaymentWebServiceContextData;
-(NSData *)peerPaymentAccountData;
@end

