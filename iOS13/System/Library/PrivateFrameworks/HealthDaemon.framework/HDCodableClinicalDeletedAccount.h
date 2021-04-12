/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HDCodableMessageVersion, NSData;

@interface HDCodableClinicalDeletedAccount : PBCodable <NSCopying> {

	double _deletionDate;
	HDCodableMessageVersion* _messageVersion;
	NSData* _syncIdentifier;
	SCD_Struct_HD7 _has;

}

@property (nonatomic,readonly) BOOL hasSyncIdentifier; 
@property (nonatomic,retain) NSData * syncIdentifier;                               //@synthesize syncIdentifier=_syncIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasDeletionDate; 
@property (assign,nonatomic) double deletionDate;                                   //@synthesize deletionDate=_deletionDate - In the implementation block
@property (nonatomic,readonly) BOOL hasMessageVersion; 
@property (nonatomic,retain) HDCodableMessageVersion * messageVersion;              //@synthesize messageVersion=_messageVersion - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSData *)syncIdentifier;
-(void)setMessageVersion:(HDCodableMessageVersion *)arg1 ;
-(BOOL)hasMessageVersion;
-(HDCodableMessageVersion *)messageVersion;
-(void)setSyncIdentifier:(NSData *)arg1 ;
-(BOOL)hasSyncIdentifier;
-(void)setDeletionDate:(double)arg1 ;
-(void)setHasDeletionDate:(BOOL)arg1 ;
-(BOOL)hasDeletionDate;
-(double)deletionDate;
@end

