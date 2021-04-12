/*
* Generated on Thursday, January 14, 2021 at 2:28:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface AWDMDNSResponderResolveStatsResult : PBCodable <NSCopying> {

	unsigned _count;
	NSData* _data;
	unsigned _serverID;
	int _type;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                       //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL hasCount; 
@property (assign,nonatomic) unsigned count;                 //@synthesize count=_count - In the implementation block
@property (assign,nonatomic) BOOL hasServerID; 
@property (assign,nonatomic) unsigned serverID;              //@synthesize serverID=_serverID - In the implementation block
@property (nonatomic,readonly) BOOL hasData; 
@property (nonatomic,retain) NSData * data;                  //@synthesize data=_data - In the implementation block
-(id)dictionaryRepresentation;
-(void)setCount:(unsigned)arg1 ;
-(id)typeAsString:(int)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(BOOL)hasData;
-(BOOL)hasType;
-(void)mergeFrom:(id)arg1 ;
-(unsigned)count;
-(void)setType:(int)arg1 ;
-(void)setData:(NSData *)arg1 ;
-(void)setHasCount:(BOOL)arg1 ;
-(id)description;
-(void)setServerID:(unsigned)arg1 ;
-(BOOL)hasCount;
-(NSData *)data;
-(int)type;
-(unsigned long long)hash;
-(unsigned)serverID;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setHasServerID:(BOOL)arg1 ;
-(BOOL)hasServerID;
@end

