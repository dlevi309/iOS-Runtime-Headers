/*
* Generated on Monday, March 1, 2021 at 2:35:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)count;
-(int)type;
-(void)setType:(int)arg1 ;
-(NSData *)data;
-(void)setCount:(unsigned)arg1 ;
-(void)setData:(NSData *)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(void)setHasCount:(BOOL)arg1 ;
-(BOOL)hasCount;
-(BOOL)hasData;
-(unsigned)serverID;
-(void)setServerID:(unsigned)arg1 ;
-(void)setHasServerID:(BOOL)arg1 ;
-(BOOL)hasServerID;
@end

