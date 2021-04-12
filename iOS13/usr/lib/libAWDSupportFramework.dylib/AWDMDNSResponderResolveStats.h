/*
* Generated on Monday, March 1, 2021 at 2:35:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSMutableArray *)domains;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setDomains:(NSMutableArray *)arg1 ;
-(void)addDomain:(id)arg1 ;
-(NSMutableArray *)servers;
-(void)addServer:(id)arg1 ;
-(void)clearDomains;
-(unsigned long long)domainsCount;
-(void)setServers:(NSMutableArray *)arg1 ;
-(unsigned long long)serversCount;
-(void)clearServers;
-(id)serverAtIndex:(unsigned long long)arg1 ;
-(id)domainAtIndex:(unsigned long long)arg1 ;
@end

