/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface SISchemaClientAnyEvent : PBCodable <NSCopying> {

	NSData* _eventData;
	int _eventType;
	SCD_Struct_SI13 _has;

}

@property (assign,nonatomic) BOOL hasEventType; 
@property (assign,nonatomic) int eventType;                    //@synthesize eventType=_eventType - In the implementation block
@property (nonatomic,readonly) BOOL hasEventData; 
@property (nonatomic,retain) NSData * eventData;               //@synthesize eventData=_eventData - In the implementation block
-(void)setHasEventType:(BOOL)arg1 ;
-(BOOL)hasEventType;
-(id)dictionaryRepresentation;
-(void)setEventType:(int)arg1 ;
-(int)eventType;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(NSData *)eventData;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setEventData:(NSData *)arg1 ;
-(BOOL)hasEventData;
-(id)si_dictionaryRepresentation;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

