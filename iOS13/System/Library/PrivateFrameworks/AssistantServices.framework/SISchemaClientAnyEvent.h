/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface SISchemaClientAnyEvent : PBCodable <NSCopying> {

	NSData* _eventData;
	int _eventType;
	SCD_Struct_SI10 _has;

}

@property (assign,nonatomic) BOOL hasEventType; 
@property (assign,nonatomic) int eventType;                    //@synthesize eventType=_eventType - In the implementation block
@property (nonatomic,readonly) BOOL hasEventData; 
@property (nonatomic,retain) NSData * eventData;               //@synthesize eventData=_eventData - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)eventType;
-(void)setEventType:(int)arg1 ;
-(void)setHasEventType:(BOOL)arg1 ;
-(BOOL)hasEventType;
-(id)si_dictionaryRepresentation;
-(NSData *)eventData;
-(void)setEventData:(NSData *)arg1 ;
-(BOOL)hasEventData;
@end

