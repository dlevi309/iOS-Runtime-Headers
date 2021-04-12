/*
* Generated on Monday, March 1, 2021 at 2:35:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDCoreRoutineSettingsClusterLocationView : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _countInCluster;
	int _deletionCount;
	NSString* _sessionId;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasSessionId; 
@property (nonatomic,retain) NSString * sessionId;                      //@synthesize sessionId=_sessionId - In the implementation block
@property (assign,nonatomic) BOOL hasCountInCluster; 
@property (assign,nonatomic) int countInCluster;                        //@synthesize countInCluster=_countInCluster - In the implementation block
@property (assign,nonatomic) BOOL hasDeletionCount; 
@property (assign,nonatomic) int deletionCount;                         //@synthesize deletionCount=_deletionCount - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)deletionCount;
-(void)setDeletionCount:(int)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(NSString *)sessionId;
-(void)setSessionId:(NSString *)arg1 ;
-(BOOL)hasSessionId;
-(void)setCountInCluster:(int)arg1 ;
-(void)setHasCountInCluster:(BOOL)arg1 ;
-(BOOL)hasCountInCluster;
-(void)setHasDeletionCount:(BOOL)arg1 ;
-(BOOL)hasDeletionCount;
-(int)countInCluster;
@end

