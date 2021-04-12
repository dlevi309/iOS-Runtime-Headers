/*
* Generated on Thursday, January 14, 2021 at 2:28:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface AWDMDNSResponderResolveStats : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NSMutableArray* _domains;
	NSMutableArray* _servers;
	SCD_Struct_AW5 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) NSMutableArray * servers;                  //@synthesize servers=_servers - In the implementation block
@property (nonatomic,retain) NSMutableArray * domains;                  //@synthesize domains=_domains - In the implementation block
+(Class)domainType;
+(Class)serverType;
-(id)dictionaryRepresentation;
-(void)addDomain:(id)arg1 ;
-(void)setDomains:(NSMutableArray *)arg1 ;
-(void)addServer:(id)arg1 ;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(NSMutableArray *)servers;
-(id)description;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)clearDomains;
-(unsigned long long)domainsCount;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(NSMutableArray *)domains;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setServers:(NSMutableArray *)arg1 ;
-(unsigned long long)serversCount;
-(void)clearServers;
-(id)serverAtIndex:(unsigned long long)arg1 ;
-(id)domainAtIndex:(unsigned long long)arg1 ;
@end

