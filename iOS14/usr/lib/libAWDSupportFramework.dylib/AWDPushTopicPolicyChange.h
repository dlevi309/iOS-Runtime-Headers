/*
* Generated on Thursday, January 14, 2021 at 2:29:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDPushTopicPolicyChange : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _change;
	unsigned _didCauseFilterChange;
	NSString* _guid;
	NSString* _topic;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;               //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasGuid; 
@property (nonatomic,retain) NSString * guid;                            //@synthesize guid=_guid - In the implementation block
@property (nonatomic,readonly) BOOL hasTopic; 
@property (nonatomic,retain) NSString * topic;                           //@synthesize topic=_topic - In the implementation block
@property (assign,nonatomic) BOOL hasChange; 
@property (assign,nonatomic) unsigned change;                            //@synthesize change=_change - In the implementation block
@property (assign,nonatomic) BOOL hasDidCauseFilterChange; 
@property (assign,nonatomic) unsigned didCauseFilterChange;              //@synthesize didCauseFilterChange=_didCauseFilterChange - In the implementation block
-(id)dictionaryRepresentation;
-(void)setTopic:(NSString *)arg1 ;
-(NSString *)guid;
-(void)setChange:(unsigned)arg1 ;
-(NSString *)topic;
-(void)setHasDidCauseFilterChange:(BOOL)arg1 ;
-(unsigned long long)timestamp;
-(unsigned)change;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasChange:(BOOL)arg1 ;
-(void)setDidCauseFilterChange:(unsigned)arg1 ;
-(id)description;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(unsigned)didCauseFilterChange;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasDidCauseFilterChange;
-(BOOL)hasChange;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasGuid;
-(void)setGuid:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)hasTopic;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

