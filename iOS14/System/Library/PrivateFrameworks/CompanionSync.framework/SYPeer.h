/*
* Generated on Thursday, January 14, 2021 at 2:24:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
*/

#import <CompanionSync/CompanionSync-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SYPeer : PBCodable <NSCopying> {

	NSString* _generationID;
	NSString* _peerID;

}

@property (nonatomic,retain) NSString * peerID;                    //@synthesize peerID=_peerID - In the implementation block
@property (nonatomic,readonly) BOOL hasGenerationID; 
@property (nonatomic,retain) NSString * generationID;              //@synthesize generationID=_generationID - In the implementation block
-(id)dictionaryRepresentation;
-(void)setPeerID:(NSString *)arg1 ;
-(NSString *)generationID;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)peerID;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setGenerationID:(NSString *)arg1 ;
-(id)initWithPeerID:(id)arg1 generation:(id)arg2 ;
-(BOOL)hasGenerationID;
@end

