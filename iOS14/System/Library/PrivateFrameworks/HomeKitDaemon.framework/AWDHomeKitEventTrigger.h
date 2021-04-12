/*
* Generated on Thursday, January 14, 2021 at 2:25:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	SCD_Struct_AW8 _has;

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
-(id)dictionaryRepresentation;
-(void)addEvents:(id)arg1 ;
-(AWDHomeKitPredicate *)predicate;
-(int)activationState;
-(void)clearEvents;
-(int)activationType;
-(void)setActivationType:(int)arg1 ;
-(void)setPredicate:(AWDHomeKitPredicate *)arg1 ;
-(void)setEvents:(NSMutableArray *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)eventsAtIndex:(unsigned long long)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSMutableArray *)events;
-(unsigned long long)eventsCount;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setExecuteOnce:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setActivationState:(int)arg1 ;
-(BOOL)executeOnce;
-(BOOL)hasPredicate;
-(BOOL)containsRecurrences;
-(void)setContainsRecurrences:(BOOL)arg1 ;
-(void)setHasExecuteOnce:(BOOL)arg1 ;
-(BOOL)hasExecuteOnce;
-(void)setHasContainsRecurrences:(BOOL)arg1 ;
-(BOOL)hasContainsRecurrences;
-(void)setHasActivationState:(BOOL)arg1 ;
-(BOOL)hasActivationState;
-(id)activationStateAsString:(int)arg1 ;
-(int)StringAsActivationState:(id)arg1 ;
-(void)setHasActivationType:(BOOL)arg1 ;
-(BOOL)hasActivationType;
-(id)activationTypeAsString:(int)arg1 ;
-(int)StringAsActivationType:(id)arg1 ;
@end

