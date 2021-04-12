/*
* Generated on Thursday, January 14, 2021 at 2:28:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface NPKProtoSetPeerPaymentPreferencesRequest : PBRequest <NSCopying> {

	NSData* _peerPaymentPreferencesData;

}

@property (nonatomic,readonly) BOOL hasPeerPaymentPreferencesData; 
@property (nonatomic,retain) NSData * peerPaymentPreferencesData;               //@synthesize peerPaymentPreferencesData=_peerPaymentPreferencesData - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setPeerPaymentPreferencesData:(NSData *)arg1 ;
-(BOOL)hasPeerPaymentPreferencesData;
-(NSData *)peerPaymentPreferencesData;
@end

