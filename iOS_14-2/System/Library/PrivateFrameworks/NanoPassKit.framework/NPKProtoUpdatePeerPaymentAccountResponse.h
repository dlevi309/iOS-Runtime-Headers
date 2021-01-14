/*
* Generated on Thursday, January 14, 2021 at 2:28:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface NPKProtoUpdatePeerPaymentAccountResponse : PBCodable <NSCopying> {

	NSData* _peerPaymentAccountData;

}

@property (nonatomic,readonly) BOOL hasPeerPaymentAccountData; 
@property (nonatomic,retain) NSData * peerPaymentAccountData;               //@synthesize peerPaymentAccountData=_peerPaymentAccountData - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setPeerPaymentAccountData:(NSData *)arg1 ;
-(BOOL)hasPeerPaymentAccountData;
-(NSData *)peerPaymentAccountData;
@end

