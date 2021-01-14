/*
* Generated on Thursday, January 14, 2021 at 2:25:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDHomeKitActionSetTriggered : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _duration;
	int _errorCode;
	unsigned _numAccessories;
	NSString* _transaction;
	int _triggerSource;
	SCD_Struct_AW5 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) unsigned duration;                         //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) BOOL hasErrorCode; 
@property (assign,nonatomic) int errorCode;                             //@synthesize errorCode=_errorCode - In the implementation block
@property (nonatomic,readonly) BOOL hasTransaction; 
@property (nonatomic,retain) NSString * transaction;                    //@synthesize transaction=_transaction - In the implementation block
@property (assign,nonatomic) BOOL hasTriggerSource; 
@property (assign,nonatomic) int triggerSource;                         //@synthesize triggerSource=_triggerSource - In the implementation block
@property (assign,nonatomic) BOOL hasNumAccessories; 
@property (assign,nonatomic) unsigned numAccessories;                   //@synthesize numAccessories=_numAccessories - In the implementation block
-(id)dictionaryRepresentation;
-(BOOL)hasDuration;
-(void)setHasDuration:(BOOL)arg1 ;
-(void)setDuration:(unsigned)arg1 ;
-(void)setTransaction:(NSString *)arg1 ;
-(NSString *)transaction;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(int)errorCode;
-(BOOL)hasErrorCode;
-(id)description;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)setErrorCode:(int)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned)duration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)setHasErrorCode:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasTransaction;
-(int)triggerSource;
-(void)setTriggerSource:(int)arg1 ;
-(void)setHasTriggerSource:(BOOL)arg1 ;
-(BOOL)hasTriggerSource;
-(id)triggerSourceAsString:(int)arg1 ;
-(int)StringAsTriggerSource:(id)arg1 ;
-(void)setNumAccessories:(unsigned)arg1 ;
-(void)setHasNumAccessories:(BOOL)arg1 ;
-(BOOL)hasNumAccessories;
-(unsigned)numAccessories;
@end

