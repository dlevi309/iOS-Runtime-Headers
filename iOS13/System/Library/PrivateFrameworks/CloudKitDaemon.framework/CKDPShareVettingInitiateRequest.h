/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData, CKDPShareIdentifier;

@interface CKDPShareVettingInitiateRequest : PBRequest <NSCopying> {

	NSString* _baseToken;
	NSData* _encryptedKey;
	NSString* _participantId;
	CKDPShareIdentifier* _shareId;

}

@property (nonatomic,readonly) BOOL hasShareId; 
@property (nonatomic,retain) CKDPShareIdentifier * shareId;              //@synthesize shareId=_shareId - In the implementation block
@property (nonatomic,readonly) BOOL hasEncryptedKey; 
@property (nonatomic,retain) NSData * encryptedKey;                      //@synthesize encryptedKey=_encryptedKey - In the implementation block
@property (nonatomic,readonly) BOOL hasParticipantId; 
@property (nonatomic,retain) NSString * participantId;                   //@synthesize participantId=_participantId - In the implementation block
@property (nonatomic,readonly) BOOL hasBaseToken; 
@property (nonatomic,retain) NSString * baseToken;                       //@synthesize baseToken=_baseToken - In the implementation block
+(id)options;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(NSString *)baseToken;
-(void)setBaseToken:(NSString *)arg1 ;
-(NSData *)encryptedKey;
-(void)setEncryptedKey:(NSData *)arg1 ;
-(BOOL)hasEncryptedKey;
-(void)setShareId:(CKDPShareIdentifier *)arg1 ;
-(void)setParticipantId:(NSString *)arg1 ;
-(BOOL)hasShareId;
-(CKDPShareIdentifier *)shareId;
-(BOOL)hasParticipantId;
-(NSString *)participantId;
-(BOOL)hasBaseToken;
@end

