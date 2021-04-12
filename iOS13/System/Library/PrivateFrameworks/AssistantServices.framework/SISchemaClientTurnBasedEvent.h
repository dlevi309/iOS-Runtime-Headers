/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SISchemaClientAnyEvent, SISchemaClientTurnContext;

@interface SISchemaClientTurnBasedEvent : PBCodable <NSCopying> {

	SISchemaClientAnyEvent* _event;
	SISchemaClientTurnContext* _turnContext;

}

@property (nonatomic,readonly) BOOL hasTurnContext; 
@property (nonatomic,retain) SISchemaClientTurnContext * turnContext;              //@synthesize turnContext=_turnContext - In the implementation block
@property (nonatomic,readonly) BOOL hasEvent; 
@property (nonatomic,retain) SISchemaClientAnyEvent * event;                       //@synthesize event=_event - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(SISchemaClientAnyEvent *)event;
-(void)setEvent:(SISchemaClientAnyEvent *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasEvent;
-(id)si_dictionaryRepresentation;
-(void)setTurnContext:(SISchemaClientTurnContext *)arg1 ;
-(BOOL)hasTurnContext;
-(SISchemaClientTurnContext *)turnContext;
@end

