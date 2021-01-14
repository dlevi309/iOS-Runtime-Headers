/*
* Generated on Thursday, January 14, 2021 at 2:29:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface AWDWiFiMetricsManagerLastSSIDInfo : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NSData* _lastSSIDAttempted;
	NSData* _lastSSIDConnectedTo;
	SCD_Struct_AW5 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;               //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasLastSSIDAttempted; 
@property (nonatomic,retain) NSData * lastSSIDAttempted;                 //@synthesize lastSSIDAttempted=_lastSSIDAttempted - In the implementation block
@property (nonatomic,readonly) BOOL hasLastSSIDConnectedTo; 
@property (nonatomic,retain) NSData * lastSSIDConnectedTo;               //@synthesize lastSSIDConnectedTo=_lastSSIDConnectedTo - In the implementation block
-(id)dictionaryRepresentation;
-(void)setLastSSIDConnectedTo:(NSData *)arg1 ;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasLastSSIDAttempted;
-(void)setLastSSIDAttempted:(NSData *)arg1 ;
-(id)description;
-(NSData *)lastSSIDConnectedTo;
-(BOOL)hasLastSSIDConnectedTo;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(NSData *)lastSSIDAttempted;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

