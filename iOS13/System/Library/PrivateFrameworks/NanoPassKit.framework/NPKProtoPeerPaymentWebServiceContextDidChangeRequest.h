/*
* Generated on Monday, March 1, 2021 at 2:35:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setPeerPaymentWebServiceContextData:(NSData *)arg1 ;
-(void)setPeerPaymentAccountData:(NSData *)arg1 ;
-(BOOL)hasPeerPaymentWebServiceContextData;
-(BOOL)hasPeerPaymentAccountData;
-(NSData *)peerPaymentWebServiceContextData;
-(NSData *)peerPaymentAccountData;
@end

