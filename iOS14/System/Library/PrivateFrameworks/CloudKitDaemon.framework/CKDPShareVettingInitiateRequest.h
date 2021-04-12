/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dictionaryRepresentation;
-(Class)responseClass;
-(unsigned)requestTypeCode;
-(void)mergeFrom:(id)arg1 ;
-(NSData *)encryptedKey;
-(void)setEncryptedKey:(NSData *)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(CKDPShareIdentifier *)shareId;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)baseToken;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setBaseToken:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)participantId;
-(void)setParticipantId:(NSString *)arg1 ;
-(void)setShareId:(CKDPShareIdentifier *)arg1 ;
-(BOOL)hasShareId;
-(BOOL)hasParticipantId;
-(BOOL)hasEncryptedKey;
-(BOOL)hasBaseToken;
@end

