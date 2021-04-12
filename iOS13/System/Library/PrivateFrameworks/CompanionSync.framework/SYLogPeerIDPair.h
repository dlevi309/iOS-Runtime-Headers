/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
*/

#import <CompanionSync/CompanionSync-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SYLogPeerIDPair : PBCodable <NSCopying> {

	NSString* _generationID;
	NSString* _peerID;

}

@property (nonatomic,retain) NSString * peerID;                    //@synthesize peerID=_peerID - In the implementation block
@property (nonatomic,readonly) BOOL hasGenerationID; 
@property (nonatomic,retain) NSString * generationID;              //@synthesize generationID=_generationID - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)generationID;
-(void)setGenerationID:(NSString *)arg1 ;
-(NSString *)peerID;
-(void)setPeerID:(NSString *)arg1 ;
-(BOOL)hasGenerationID;
@end

