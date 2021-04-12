/*
* Generated on Monday, March 1, 2021 at 2:35:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDOSAnalyticsSubmissions : PBCodable <NSCopying> {

	unsigned long long _logs;
	unsigned long long _seconds;
	unsigned long long _sizeBytes;
	unsigned long long _timestamp;
	NSString* _connection;
	int _response;
	NSString* _routing;
	SCD_Struct_AW2 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasResponse; 
@property (assign,nonatomic) int response;                              //@synthesize response=_response - In the implementation block
@property (nonatomic,readonly) BOOL hasConnection; 
@property (nonatomic,retain) NSString * connection;                     //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) BOOL hasRouting; 
@property (nonatomic,retain) NSString * routing;                        //@synthesize routing=_routing - In the implementation block
@property (assign,nonatomic) BOOL hasSizeBytes; 
@property (assign,nonatomic) unsigned long long sizeBytes;              //@synthesize sizeBytes=_sizeBytes - In the implementation block
@property (assign,nonatomic) BOOL hasLogs; 
@property (assign,nonatomic) unsigned long long logs;                   //@synthesize logs=_logs - In the implementation block
@property (assign,nonatomic) BOOL hasSeconds; 
@property (assign,nonatomic) unsigned long long seconds;                //@synthesize seconds=_seconds - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(NSString *)connection;
-(unsigned long long)seconds;
-(void)setConnection:(NSString *)arg1 ;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)response;
-(void)setResponse:(int)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasResponse;
-(void)setSeconds:(unsigned long long)arg1 ;
-(void)setHasSeconds:(BOOL)arg1 ;
-(BOOL)hasSeconds;
-(unsigned long long)sizeBytes;
-(void)setRouting:(NSString *)arg1 ;
-(NSString *)routing;
-(void)setSizeBytes:(unsigned long long)arg1 ;
-(void)setLogs:(unsigned long long)arg1 ;
-(BOOL)hasConnection;
-(unsigned long long)logs;
-(void)setHasResponse:(BOOL)arg1 ;
-(BOOL)hasRouting;
-(void)setHasSizeBytes:(BOOL)arg1 ;
-(BOOL)hasSizeBytes;
-(void)setHasLogs:(BOOL)arg1 ;
-(BOOL)hasLogs;
@end

