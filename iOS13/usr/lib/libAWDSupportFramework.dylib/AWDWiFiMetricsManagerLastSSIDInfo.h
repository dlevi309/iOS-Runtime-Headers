/*
* Generated on Monday, March 1, 2021 at 2:35:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setLastSSIDAttempted:(NSData *)arg1 ;
-(void)setLastSSIDConnectedTo:(NSData *)arg1 ;
-(BOOL)hasLastSSIDAttempted;
-(BOOL)hasLastSSIDConnectedTo;
-(NSData *)lastSSIDAttempted;
-(NSData *)lastSSIDConnectedTo;
@end

