/*
* Generated on Thursday, January 14, 2021 at 2:28:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDIDSWiFiSetupAttempt : PBCodable <NSCopying> {

	unsigned long long _duration;
	unsigned long long _result;
	unsigned long long _timestamp;
	unsigned long long _type;
	NSString* _client;
	SCD_Struct_AW1 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) unsigned long long type;                   //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) unsigned long long duration;               //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) BOOL hasResult; 
@property (assign,nonatomic) unsigned long long result;                 //@synthesize result=_result - In the implementation block
@property (nonatomic,readonly) BOOL hasClient; 
@property (nonatomic,retain) NSString * client;                         //@synthesize client=_client - In the implementation block
-(void)setResult:(unsigned long long)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasResult;
-(BOOL)hasDuration;
-(void)setHasDuration:(BOOL)arg1 ;
-(void)setDuration:(unsigned long long)arg1 ;
-(NSString *)client;
-(void)setClient:(NSString *)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(unsigned long long)timestamp;
-(void)setHasResult:(BOOL)arg1 ;
-(BOOL)hasClient;
-(BOOL)hasType;
-(void)mergeFrom:(id)arg1 ;
-(void)setType:(unsigned long long)arg1 ;
-(id)description;
-(unsigned long long)type;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)result;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned long long)duration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

