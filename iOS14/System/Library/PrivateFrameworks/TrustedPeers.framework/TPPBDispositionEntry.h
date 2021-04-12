/*
* Generated on Thursday, January 14, 2021 at 2:26:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrustedPeers.framework/TrustedPeers
*/

#import <TrustedPeers/TrustedPeers-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class TPPBDisposition, NSString;

@interface TPPBDispositionEntry : PBCodable <NSCopying> {

	TPPBDisposition* _disposition;
	NSString* _peerID;

}

@property (nonatomic,readonly) BOOL hasPeerID; 
@property (nonatomic,retain) NSString * peerID;                          //@synthesize peerID=_peerID - In the implementation block
@property (nonatomic,readonly) BOOL hasDisposition; 
@property (nonatomic,retain) TPPBDisposition * disposition;              //@synthesize disposition=_disposition - In the implementation block
-(id)dictionaryRepresentation;
-(void)setPeerID:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)peerID;
-(void)setDisposition:(TPPBDisposition *)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(TPPBDisposition *)disposition;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasPeerID;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasDisposition;
@end

