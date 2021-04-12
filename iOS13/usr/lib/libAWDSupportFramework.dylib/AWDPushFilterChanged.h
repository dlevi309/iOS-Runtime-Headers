/*
* Generated on Monday, March 1, 2021 at 2:35:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDPushFilterChanged : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _changedReason;
	unsigned _changedTopicsCount;
	NSString* _guid;
	NSString* _topic;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasGuid; 
@property (nonatomic,retain) NSString * guid;                           //@synthesize guid=_guid - In the implementation block
@property (assign,nonatomic) BOOL hasChangedReason; 
@property (assign,nonatomic) unsigned changedReason;                    //@synthesize changedReason=_changedReason - In the implementation block
@property (assign,nonatomic) BOOL hasChangedTopicsCount; 
@property (assign,nonatomic) unsigned changedTopicsCount;               //@synthesize changedTopicsCount=_changedTopicsCount - In the implementation block
@property (nonatomic,readonly) BOOL hasTopic; 
@property (nonatomic,retain) NSString * topic;                          //@synthesize topic=_topic - In the implementation block
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
-(NSString *)topic;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setTopic:(NSString *)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setGuid:(NSString *)arg1 ;
-(NSString *)guid;
-(BOOL)hasGuid;
-(BOOL)hasTopic;
-(void)setChangedReason:(unsigned)arg1 ;
-(void)setHasChangedReason:(BOOL)arg1 ;
-(BOOL)hasChangedReason;
-(void)setChangedTopicsCount:(unsigned)arg1 ;
-(void)setHasChangedTopicsCount:(BOOL)arg1 ;
-(BOOL)hasChangedTopicsCount;
-(unsigned)changedReason;
-(unsigned)changedTopicsCount;
@end

