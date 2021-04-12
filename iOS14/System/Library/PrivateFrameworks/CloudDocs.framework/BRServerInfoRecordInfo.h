/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
*/

#import <CloudDocs/CloudDocs-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString;

@interface BRServerInfoRecordInfo : PBCodable <NSCopying> {

	unsigned long long _bounceNo;
	NSData* _encryptedBasename;
	NSString* _etag;
	NSString* _extension;
	NSString* _recordID;
	NSData* _recordProtectionInfo;
	NSString* _zoneName;
	NSData* _zoneProtectionInfo;
	SCD_Struct_BR1 _has;

}

@property (nonatomic,readonly) BOOL hasRecordID; 
@property (nonatomic,retain) NSString * recordID;                         //@synthesize recordID=_recordID - In the implementation block
@property (nonatomic,readonly) BOOL hasEtag; 
@property (nonatomic,retain) NSString * etag;                             //@synthesize etag=_etag - In the implementation block
@property (nonatomic,readonly) BOOL hasEncryptedBasename; 
@property (nonatomic,retain) NSData * encryptedBasename;                  //@synthesize encryptedBasename=_encryptedBasename - In the implementation block
@property (assign,nonatomic) BOOL hasBounceNo; 
@property (assign,nonatomic) unsigned long long bounceNo;                 //@synthesize bounceNo=_bounceNo - In the implementation block
@property (nonatomic,readonly) BOOL hasExtension; 
@property (nonatomic,retain) NSString * extension;                        //@synthesize extension=_extension - In the implementation block
@property (nonatomic,readonly) BOOL hasRecordProtectionInfo; 
@property (nonatomic,retain) NSData * recordProtectionInfo;               //@synthesize recordProtectionInfo=_recordProtectionInfo - In the implementation block
@property (nonatomic,readonly) BOOL hasZoneName; 
@property (nonatomic,retain) NSString * zoneName;                         //@synthesize zoneName=_zoneName - In the implementation block
@property (nonatomic,readonly) BOOL hasZoneProtectionInfo; 
@property (nonatomic,retain) NSData * zoneProtectionInfo;                 //@synthesize zoneProtectionInfo=_zoneProtectionInfo - In the implementation block
-(id)dictionaryRepresentation;
-(void)setEncryptedBasename:(NSData *)arg1 ;
-(void)setRecordProtectionInfo:(NSData *)arg1 ;
-(void)setZoneProtectionInfo:(NSData *)arg1 ;
-(BOOL)hasRecordID;
-(BOOL)hasEncryptedBasename;
-(void)setBounceNo:(unsigned long long)arg1 ;
-(void)setHasBounceNo:(BOOL)arg1 ;
-(BOOL)hasBounceNo;
-(BOOL)hasRecordProtectionInfo;
-(BOOL)hasZoneProtectionInfo;
-(NSData *)encryptedBasename;
-(NSData *)recordProtectionInfo;
-(NSData *)zoneProtectionInfo;
-(void)setRecordID:(NSString *)arg1 ;
-(NSString *)etag;
-(NSString *)zoneName;
-(void)setEtag:(NSString *)arg1 ;
-(BOOL)hasEtag;
-(void)setExtension:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(NSString *)extension;
-(BOOL)hasZoneName;
-(unsigned long long)hash;
-(unsigned long long)bounceNo;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setZoneName:(NSString *)arg1 ;
-(NSString *)recordID;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasExtension;
-(BOOL)isEqual:(id)arg1 ;
@end

