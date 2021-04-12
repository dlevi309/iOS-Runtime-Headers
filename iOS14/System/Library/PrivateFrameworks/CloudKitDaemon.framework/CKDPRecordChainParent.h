/*
* Generated on Thursday, January 14, 2021 at 2:26:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, CKDPRecordReference;

@interface CKDPRecordChainParent : PBCodable <NSCopying> {

	NSData* _publicKeyID;
	CKDPRecordReference* _reference;

}

@property (nonatomic,readonly) BOOL hasPublicKeyID; 
@property (nonatomic,retain) NSData * publicKeyID;                         //@synthesize publicKeyID=_publicKeyID - In the implementation block
@property (nonatomic,readonly) BOOL hasReference; 
@property (nonatomic,retain) CKDPRecordReference * reference;              //@synthesize reference=_reference - In the implementation block
-(id)dictionaryRepresentation;
-(CKDPRecordReference *)reference;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setReference:(CKDPRecordReference *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasReference;
-(void)setPublicKeyID:(NSData *)arg1 ;
-(BOOL)hasPublicKeyID;
-(NSData *)publicKeyID;
@end

