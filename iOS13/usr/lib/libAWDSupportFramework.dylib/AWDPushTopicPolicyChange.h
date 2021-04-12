/*
* Generated on Monday, March 1, 2021 at 2:35:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(unsigned)change;
-(void)setChange:(unsigned)arg1 ;
-(BOOL)hasTopic;
-(void)setHasChange:(BOOL)arg1 ;
-(BOOL)hasChange;
-(void)setDidCauseFilterChange:(unsigned)arg1 ;
-(void)setHasDidCauseFilterChange:(BOOL)arg1 ;
-(BOOL)hasDidCauseFilterChange;
-(unsigned)didCauseFilterChange;
@end

