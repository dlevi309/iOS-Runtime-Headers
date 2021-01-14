/*
* Generated on Thursday, January 14, 2021 at 2:29:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDWiFiMetricsHealthUIEvent : PBCodable <NSCopying> {

	unsigned long long _healthIssues;
	unsigned long long _timestamp;
	unsigned _eventType;
	NSString* _hashCode;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                 //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasEventType; 
@property (assign,nonatomic) unsigned eventType;                           //@synthesize eventType=_eventType - In the implementation block
@property (assign,nonatomic) BOOL hasHealthIssues; 
@property (assign,nonatomic) unsigned long long healthIssues;              //@synthesize healthIssues=_healthIssues - In the implementation block
@property (nonatomic,readonly) BOOL hasHashCode; 
@property (nonatomic,retain) NSString * hashCode;                          //@synthesize hashCode=_hashCode - In the implementation block
-(void)setHasEventType:(BOOL)arg1 ;
-(BOOL)hasEventType;
-(id)dictionaryRepresentation;
-(void)setEventType:(unsigned)arg1 ;
-(unsigned)eventType;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setHealthIssues:(unsigned long long)arg1 ;
-(void)setHashCode:(NSString *)arg1 ;
-(void)setHasHealthIssues:(BOOL)arg1 ;
-(BOOL)hasHealthIssues;
-(BOOL)hasHashCode;
-(unsigned long long)healthIssues;
-(NSString *)hashCode;
@end

