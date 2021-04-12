/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(TPPBDisposition *)disposition;
-(void)setDisposition:(TPPBDisposition *)arg1 ;
-(NSString *)peerID;
-(void)setPeerID:(NSString *)arg1 ;
-(BOOL)hasPeerID;
-(BOOL)hasDisposition;
@end

