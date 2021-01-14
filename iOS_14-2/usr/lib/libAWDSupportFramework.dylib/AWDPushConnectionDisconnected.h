/*
* Generated on Thursday, January 14, 2021 at 2:29:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDPushConnectionDisconnected : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _connectionType;
	unsigned _error;
	int _genericError;
	NSString* _guid;
	int _linkQuality;
	unsigned _sslError;
	SCD_Struct_AW10 _has;

}

@property (nonatomic,readonly) BOOL hasGuid; 
@property (nonatomic,retain) NSString * guid;                           //@synthesize guid=_guid - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasConnectionType; 
@property (assign,nonatomic) unsigned connectionType;                   //@synthesize connectionType=_connectionType - In the implementation block
@property (assign,nonatomic) BOOL hasLinkQuality; 
@property (assign,nonatomic) int linkQuality;                           //@synthesize linkQuality=_linkQuality - In the implementation block
@property (assign,nonatomic) BOOL hasError; 
@property (assign,nonatomic) unsigned error;                            //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) BOOL hasSslError; 
@property (assign,nonatomic) unsigned sslError;                         //@synthesize sslError=_sslError - In the implementation block
@property (assign,nonatomic) BOOL hasGenericError; 
@property (assign,nonatomic) int genericError;                          //@synthesize genericError=_genericError - In the implementation block
-(id)dictionaryRepresentation;
-(NSString *)guid;
-(void)setHasConnectionType:(BOOL)arg1 ;
-(int)linkQuality;
-(unsigned)connectionType;
-(void)setLinkQuality:(int)arg1 ;
-(void)setConnectionType:(unsigned)arg1 ;
-(unsigned long long)timestamp;
-(BOOL)hasConnectionType;
-(void)setHasError:(BOOL)arg1 ;
-(void)setHasLinkQuality:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setError:(unsigned)arg1 ;
-(unsigned)error;
-(id)description;
-(BOOL)hasLinkQuality;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(int)genericError;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasError;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasGuid;
-(void)setGuid:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setGenericError:(int)arg1 ;
-(void)setHasGenericError:(BOOL)arg1 ;
-(BOOL)hasGenericError;
-(void)setSslError:(unsigned)arg1 ;
-(void)setHasSslError:(BOOL)arg1 ;
-(BOOL)hasSslError;
-(unsigned)sslError;
@end

