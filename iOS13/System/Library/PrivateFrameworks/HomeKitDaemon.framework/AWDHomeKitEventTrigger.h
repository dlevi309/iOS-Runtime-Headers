/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, AWDHomeKitPredicate;

@interface AWDHomeKitEventTrigger : PBCodable <NSCopying> {

	int _activationState;
	int _activationType;
	NSMutableArray* _events;
	AWDHomeKitPredicate* _predicate;
	BOOL _containsRecurrences;
	BOOL _executeOnce;
	SCD_Struct_AW7 _has;

}

@property (nonatomic,retain) NSMutableArray * events;                      //@synthesize events=_events - In the implementation block
@property (assign,nonatomic) BOOL hasExecuteOnce; 
@property (assign,nonatomic) BOOL executeOnce;                             //@synthesize executeOnce=_executeOnce - In the implementation block
@property (assign,nonatomic) BOOL hasContainsRecurrences; 
@property (assign,nonatomic) BOOL containsRecurrences;                     //@synthesize containsRecurrences=_containsRecurrences - In the implementation block
@property (nonatomic,readonly) BOOL hasPredicate; 
@property (nonatomic,retain) AWDHomeKitPredicate * predicate;              //@synthesize predicate=_predicate - In the implementation block
@property (assign,nonatomic) BOOL hasActivationState; 
@property (assign,nonatomic) int activationState;                          //@synthesize activationState=_activationState - In the implementation block
@property (assign,nonatomic) BOOL hasActivationType; 
@property (assign,nonatomic) int activationType;                           //@synthesize activationType=_activationType - In the implementation block
+(Class)eventsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPredicate:(AWDHomeKitPredicate *)arg1 ;
-(AWDHomeKitPredicate *)predicate;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSMutableArray *)events;
-(void)setEvents:(NSMutableArray *)arg1 ;
-(void)addEvents:(id)arg1 ;
-(unsigned long long)eventsCount;
-(void)clearEvents;
-(id)eventsAtIndex:(unsigned long long)arg1 ;
-(int)activationState;
-(int)activationType;
-(void)setActivationType:(int)arg1 ;
-(void)setExecuteOnce:(BOOL)arg1 ;
-(void)setActivationState:(int)arg1 ;
-(BOOL)executeOnce;
-(BOOL)containsRecurrences;
-(void)setContainsRecurrences:(BOOL)arg1 ;
-(void)setHasExecuteOnce:(BOOL)arg1 ;
-(BOOL)hasExecuteOnce;
-(void)setHasContainsRecurrences:(BOOL)arg1 ;
-(BOOL)hasContainsRecurrences;
-(BOOL)hasPredicate;
-(void)setHasActivationState:(BOOL)arg1 ;
-(BOOL)hasActivationState;
-(id)activationStateAsString:(int)arg1 ;
-(int)StringAsActivationState:(id)arg1 ;
-(void)setHasActivationType:(BOOL)arg1 ;
-(BOOL)hasActivationType;
-(id)activationTypeAsString:(int)arg1 ;
-(int)StringAsActivationType:(id)arg1 ;
@end

