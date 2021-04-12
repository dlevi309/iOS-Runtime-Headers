/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
*/

#import <CompanionSync/CompanionSync-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SYMessageHeader, NSString;

@interface SYBatchSyncStart : PBCodable <NSCopying> {

	unsigned _estimatedChangeCount;
	SYMessageHeader* _header;
	NSString* _syncID;
	SCD_Struct_SY5 _has;

}

@property (nonatomic,retain) SYMessageHeader * header;                   //@synthesize header=_header - In the implementation block
@property (nonatomic,retain) NSString * syncID;                          //@synthesize syncID=_syncID - In the implementation block
@property (assign,nonatomic) BOOL hasEstimatedChangeCount; 
@property (assign,nonatomic) unsigned estimatedChangeCount;              //@synthesize estimatedChangeCount=_estimatedChangeCount - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(SYMessageHeader *)header;
-(void)setHeader:(SYMessageHeader *)arg1 ;
-(NSString *)syncID;
-(void)setSyncID:(NSString *)arg1 ;
-(void)setEstimatedChangeCount:(unsigned)arg1 ;
-(void)setHasEstimatedChangeCount:(BOOL)arg1 ;
-(BOOL)hasEstimatedChangeCount;
-(unsigned)estimatedChangeCount;
@end

