/*
* Generated on Thursday, January 14, 2021 at 2:24:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
*/

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface SISchemaConversationTrace : PBCodable {

	NSData* _previousTurnID;
	BOOL _hasPreviousTurnID;

}

@property (nonatomic,copy) NSData * previousTurnID;               //@synthesize previousTurnID=_previousTurnID - In the implementation block
@property (assign,nonatomic) BOOL hasPreviousTurnID;              //@synthesize hasPreviousTurnID=_hasPreviousTurnID - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(id)dictionaryRepresentation;
-(NSData *)jsonData;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setPreviousTurnID:(NSData *)arg1 ;
-(NSData *)previousTurnID;
-(BOOL)hasPreviousTurnID;
-(void)setHasPreviousTurnID:(BOOL)arg1 ;
@end

