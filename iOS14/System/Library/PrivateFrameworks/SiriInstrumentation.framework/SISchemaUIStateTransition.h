/*
* Generated on Thursday, January 14, 2021 at 2:24:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
*/

#import <SiriInstrumentation/SiriInstrumentation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class SISchemaUIStatePresenting, SISchemaUIStateDismissed, NSData;

@interface SISchemaUIStateTransition : PBCodable {

	int _currentState;
	int _previousState;
	int _siriPresentationType;
	int _dismissalReason;
	SISchemaUIStatePresenting* _presenting;
	SISchemaUIStateDismissed* _dismissed;
	SCD_Struct_LT2 _has;
	BOOL _hasPresenting;
	BOOL _hasDismissed;
	unsigned long long _whichPresentationstate;

}

@property (assign,nonatomic) int currentState;                                         //@synthesize currentState=_currentState - In the implementation block
@property (assign,nonatomic) BOOL hasCurrentState; 
@property (assign,nonatomic) int previousState;                                        //@synthesize previousState=_previousState - In the implementation block
@property (assign,nonatomic) BOOL hasPreviousState; 
@property (assign,nonatomic) int siriPresentationType;                                 //@synthesize siriPresentationType=_siriPresentationType - In the implementation block
@property (assign,nonatomic) BOOL hasSiriPresentationType; 
@property (assign,nonatomic) int dismissalReason;                                      //@synthesize dismissalReason=_dismissalReason - In the implementation block
@property (assign,nonatomic) BOOL hasDismissalReason; 
@property (nonatomic,retain) SISchemaUIStatePresenting * presenting;                   //@synthesize presenting=_presenting - In the implementation block
@property (assign,nonatomic) BOOL hasPresenting;                                       //@synthesize hasPresenting=_hasPresenting - In the implementation block
@property (nonatomic,retain) SISchemaUIStateDismissed * dismissed;                     //@synthesize dismissed=_dismissed - In the implementation block
@property (assign,nonatomic) BOOL hasDismissed;                                        //@synthesize hasDismissed=_hasDismissed - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
@property (nonatomic,readonly) unsigned long long whichPresentationstate;              //@synthesize whichPresentationstate=_whichPresentationstate - In the implementation block
-(void)setCurrentState:(int)arg1 ;
-(id)dictionaryRepresentation;
-(int)previousState;
-(void)setHasPreviousState:(BOOL)arg1 ;
-(BOOL)hasPreviousState;
-(int)currentState;
-(NSData *)jsonData;
-(void)setPreviousState:(int)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(int)dismissalReason;
-(SISchemaUIStatePresenting *)presenting;
-(void)setPresenting:(SISchemaUIStatePresenting *)arg1 ;
-(void)setDismissed:(SISchemaUIStateDismissed *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(SISchemaUIStateDismissed *)dismissed;
-(id)initWithJSON:(id)arg1 ;
-(void)setDismissalReason:(int)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasDismissalReason;
-(void)setHasDismissalReason:(BOOL)arg1 ;
-(void)setSiriPresentationType:(int)arg1 ;
-(unsigned long long)whichPresentationstate;
-(int)siriPresentationType;
-(BOOL)hasCurrentState;
-(void)setHasCurrentState:(BOOL)arg1 ;
-(BOOL)hasSiriPresentationType;
-(void)setHasSiriPresentationType:(BOOL)arg1 ;
-(BOOL)hasPresenting;
-(void)setHasPresenting:(BOOL)arg1 ;
-(BOOL)hasDismissed;
-(void)setHasDismissed:(BOOL)arg1 ;
@end

