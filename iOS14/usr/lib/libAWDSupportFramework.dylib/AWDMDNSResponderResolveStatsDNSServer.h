/*
* Generated on Thursday, January 14, 2021 at 2:28:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface AWDMDNSResponderResolveStatsDNSServer : PBCodable <NSCopying> {

	NSData* _address;
	int _networkType;
	unsigned _serverID;
	SCD_Struct_AW3 _has;

}

@property (nonatomic,readonly) BOOL hasAddress; 
@property (nonatomic,retain) NSData * address;                 //@synthesize address=_address - In the implementation block
@property (assign,nonatomic) BOOL hasNetworkType; 
@property (assign,nonatomic) int networkType;                  //@synthesize networkType=_networkType - In the implementation block
@property (assign,nonatomic) BOOL hasServerID; 
@property (assign,nonatomic) unsigned serverID;                //@synthesize serverID=_serverID - In the implementation block
-(int)networkType;
-(void)setNetworkType:(int)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasAddress;
-(BOOL)hasNetworkType;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasNetworkType:(BOOL)arg1 ;
-(id)description;
-(void)setServerID:(unsigned)arg1 ;
-(NSData *)address;
-(void)setAddress:(NSData *)arg1 ;
-(id)networkTypeAsString:(int)arg1 ;
-(int)StringAsNetworkType:(id)arg1 ;
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

