/*
* Generated on Thursday, January 14, 2021 at 2:28:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDCompanionSyncErrorEvent : PBCodable <NSCopying> {

	unsigned long long _sequenceNumber;
	unsigned long long _timestamp;
	int _error;
	NSString* _service;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                   //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasService; 
@property (nonatomic,retain) NSString * service;                             //@synthesize service=_service - In the implementation block
@property (assign,nonatomic) BOOL hasSequenceNumber; 
@property (assign,nonatomic) unsigned long long sequenceNumber;              //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (assign,nonatomic) BOOL hasError; 
@property (assign,nonatomic) int error;                                      //@synthesize error=_error - In the implementation block
-(void)setHasSequenceNumber:(BOOL)arg1 ;
-(id)dictionaryRepresentation;
-(void)setSequenceNumber:(unsigned long long)arg1 ;
-(unsigned long long)timestamp;
-(void)setHasError:(BOOL)arg1 ;
-(unsigned long long)sequenceNumber;
-(void)mergeFrom:(id)arg1 ;
-(void)setError:(int)arg1 ;
-(int)error;
-(id)description;
-(BOOL)hasService;
-(void)setService:(NSString *)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasError;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)service;
-(void)dealloc;
-(BOOL)hasSequenceNumber;
-(id)errorAsString:(int)arg1 ;
-(int)StringAsError:(id)arg1 ;
@end

