/*
* Generated on Thursday, January 14, 2021 at 2:28:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)sessionId;
-(void)setSessionId:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasSessionId;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(void)setDeletionCount:(int)arg1 ;
-(id)description;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(int)deletionCount;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setCountInCluster:(int)arg1 ;
-(void)setHasCountInCluster:(BOOL)arg1 ;
-(BOOL)hasCountInCluster;
-(void)setHasDeletionCount:(BOOL)arg1 ;
-(BOOL)hasDeletionCount;
-(int)countInCluster;
@end

