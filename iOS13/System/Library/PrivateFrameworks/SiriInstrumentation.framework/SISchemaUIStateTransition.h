/*
* Generated on Monday, March 1, 2021 at 2:35:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
*/

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface SISchemaUIStateTransition : PBCodable {

	int _currentState;
	int _previousState;
	int _siriPresentationType;
	int _dismissalReason;

}

@property (assign,nonatomic) int currentState;                      //@synthesize currentState=_currentState - In the implementation block
@property (assign,nonatomic) int previousState;                     //@synthesize previousState=_previousState - In the implementation block
@property (assign,nonatomic) int siriPresentationType;              //@synthesize siriPresentationType=_siriPresentationType - In the implementation block
@property (assign,nonatomic) int dismissalReason;                   //@synthesize dismissalReason=_dismissalReason - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(int)currentState;
-(BOOL)readFrom:(id)arg1 ;
-(int)previousState;
-(void)setCurrentState:(int)arg1 ;
-(void)setPreviousState:(int)arg1 ;
-(NSData *)jsonData;
-(id)initWithJSON:(id)arg1 ;
-(void)setDismissalReason:(int)arg1 ;
-(int)dismissalReason;
-(void)setSiriPresentationType:(int)arg1 ;
-(int)siriPresentationType;
@end

