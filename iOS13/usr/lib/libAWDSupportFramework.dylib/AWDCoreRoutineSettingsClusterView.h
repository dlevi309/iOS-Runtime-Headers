/*
* Generated on Monday, March 1, 2021 at 2:35:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDCoreRoutineSettingsClusterView : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _clusterCount;
	int _elsewhereCount;
	NSString* _sessionId;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasSessionId; 
@property (nonatomic,retain) NSString * sessionId;                      //@synthesize sessionId=_sessionId - In the implementation block
@property (assign,nonatomic) BOOL hasClusterCount; 
@property (assign,nonatomic) int clusterCount;                          //@synthesize clusterCount=_clusterCount - In the implementation block
@property (assign,nonatomic) BOOL hasElsewhereCount; 
@property (assign,nonatomic) int elsewhereCount;                        //@synthesize elsewhereCount=_elsewhereCount - In the implementation block
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
-(void)setHasTimestamp:(BOOL)arg1 ;
-(NSString *)sessionId;
-(void)setSessionId:(NSString *)arg1 ;
-(BOOL)hasSessionId;
-(int)clusterCount;
-(void)setClusterCount:(int)arg1 ;
-(void)setHasClusterCount:(BOOL)arg1 ;
-(BOOL)hasClusterCount;
-(void)setElsewhereCount:(int)arg1 ;
-(void)setHasElsewhereCount:(BOOL)arg1 ;
-(BOOL)hasElsewhereCount;
-(int)elsewhereCount;
@end

