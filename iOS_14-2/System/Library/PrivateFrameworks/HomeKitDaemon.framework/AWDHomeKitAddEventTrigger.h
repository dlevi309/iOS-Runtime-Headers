/*
* Generated on Thursday, January 14, 2021 at 2:25:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AWDHomeKitEventTrigger;

@interface AWDHomeKitAddEventTrigger : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	AWDHomeKitEventTrigger* _eventTrigger;
	int _requestOrigin;
	unsigned _resultErrorCode;
	SCD_Struct_AW2 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                       //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasResultErrorCode; 
@property (assign,nonatomic) unsigned resultErrorCode;                           //@synthesize resultErrorCode=_resultErrorCode - In the implementation block
@property (nonatomic,readonly) BOOL hasEventTrigger; 
@property (nonatomic,retain) AWDHomeKitEventTrigger * eventTrigger;              //@synthesize eventTrigger=_eventTrigger - In the implementation block
@property (assign,nonatomic) BOOL hasRequestOrigin; 
@property (assign,nonatomic) int requestOrigin;                                  //@synthesize requestOrigin=_requestOrigin - In the implementation block
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(AWDHomeKitEventTrigger *)eventTrigger;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)setEventTrigger:(AWDHomeKitEventTrigger *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setRequestOrigin:(int)arg1 ;
-(void)setResultErrorCode:(unsigned)arg1 ;
-(void)setHasResultErrorCode:(BOOL)arg1 ;
-(BOOL)hasResultErrorCode;
-(unsigned)resultErrorCode;
-(BOOL)hasEventTrigger;
-(int)requestOrigin;
-(void)setHasRequestOrigin:(BOOL)arg1 ;
-(BOOL)hasRequestOrigin;
-(id)requestOriginAsString:(int)arg1 ;
-(int)StringAsRequestOrigin:(id)arg1 ;
@end

