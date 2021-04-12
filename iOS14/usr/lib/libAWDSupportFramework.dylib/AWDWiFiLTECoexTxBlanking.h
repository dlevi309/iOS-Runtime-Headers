/*
* Generated on Thursday, January 14, 2021 at 2:29:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDWiFiLTECoexTxBlanking : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned long long _type4BlankingCount;
	unsigned long long _type4BlankingTimeInMS;
	unsigned long long _type4ResumeCount;
	unsigned long long _type7BlankingCount;
	unsigned long long _type7BlankingTimeInMS;
	unsigned long long _type7ResumeCount;
	SCD_Struct_AW16 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                          //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasType4BlankingCount; 
@property (assign,nonatomic) unsigned long long type4BlankingCount;                 //@synthesize type4BlankingCount=_type4BlankingCount - In the implementation block
@property (assign,nonatomic) BOOL hasType4ResumeCount; 
@property (assign,nonatomic) unsigned long long type4ResumeCount;                   //@synthesize type4ResumeCount=_type4ResumeCount - In the implementation block
@property (assign,nonatomic) BOOL hasType4BlankingTimeInMS; 
@property (assign,nonatomic) unsigned long long type4BlankingTimeInMS;              //@synthesize type4BlankingTimeInMS=_type4BlankingTimeInMS - In the implementation block
@property (assign,nonatomic) BOOL hasType7BlankingCount; 
@property (assign,nonatomic) unsigned long long type7BlankingCount;                 //@synthesize type7BlankingCount=_type7BlankingCount - In the implementation block
@property (assign,nonatomic) BOOL hasType7ResumeCount; 
@property (assign,nonatomic) unsigned long long type7ResumeCount;                   //@synthesize type7ResumeCount=_type7ResumeCount - In the implementation block
@property (assign,nonatomic) BOOL hasType7BlankingTimeInMS; 
@property (assign,nonatomic) unsigned long long type7BlankingTimeInMS;              //@synthesize type7BlankingTimeInMS=_type7BlankingTimeInMS - In the implementation block
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setType4BlankingCount:(unsigned long long)arg1 ;
-(void)setHasType4BlankingCount:(BOOL)arg1 ;
-(BOOL)hasType4BlankingCount;
-(void)setType4ResumeCount:(unsigned long long)arg1 ;
-(void)setHasType4ResumeCount:(BOOL)arg1 ;
-(BOOL)hasType4ResumeCount;
-(void)setType4BlankingTimeInMS:(unsigned long long)arg1 ;
-(void)setHasType4BlankingTimeInMS:(BOOL)arg1 ;
-(BOOL)hasType4BlankingTimeInMS;
-(void)setType7BlankingCount:(unsigned long long)arg1 ;
-(void)setHasType7BlankingCount:(BOOL)arg1 ;
-(BOOL)hasType7BlankingCount;
-(void)setType7ResumeCount:(unsigned long long)arg1 ;
-(void)setHasType7ResumeCount:(BOOL)arg1 ;
-(BOOL)hasType7ResumeCount;
-(void)setType7BlankingTimeInMS:(unsigned long long)arg1 ;
-(void)setHasType7BlankingTimeInMS:(BOOL)arg1 ;
-(BOOL)hasType7BlankingTimeInMS;
-(unsigned long long)type4BlankingCount;
-(unsigned long long)type4ResumeCount;
-(unsigned long long)type4BlankingTimeInMS;
-(unsigned long long)type7BlankingCount;
-(unsigned long long)type7ResumeCount;
-(unsigned long long)type7BlankingTimeInMS;
@end

