/*
* Generated on Thursday, January 14, 2021 at 2:29:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dictionaryRepresentation;
-(void)setTopic:(NSString *)arg1 ;
-(NSString *)guid;
-(unsigned)changedReason;
-(BOOL)hasChangedReason;
-(NSString *)topic;
-(BOOL)hasChangedTopicsCount;
-(unsigned long long)timestamp;
-(void)setChangedReason:(unsigned)arg1 ;
-(void)setHasChangedTopicsCount:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasGuid;
-(unsigned)changedTopicsCount;
-(void)setGuid:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)hasTopic;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setChangedTopicsCount:(unsigned)arg1 ;
-(void)setHasChangedReason:(BOOL)arg1 ;
@end

