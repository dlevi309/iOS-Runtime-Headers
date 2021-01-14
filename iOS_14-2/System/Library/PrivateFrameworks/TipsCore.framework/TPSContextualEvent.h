/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
*/

#import <TipsCore/TipsCore-Structs.h>
#import <TipsCore/TPSSerializableObject.h>

@class NSDate, NSString, NSMutableDictionary, NSMutableSet;

@interface TPSContextualEvent : TPSSerializableObject {

	unsigned _minObservationCount;
	unsigned long long _status;
	long long _type;
	NSDate* _matchedDate;
	NSDate* _eventSinceDate;
	NSString* _key;
	NSString* _identifier;
	TPSContextualEvent* _state;
	NSMutableDictionary* _observationMap;
	NSMutableSet* _observerIdentifiers;

}

@property (assign,nonatomic) unsigned long long status;                         //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) long long type;                                    //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * identifier;                               //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) TPSContextualEvent * state;                          //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * observationMap;              //@synthesize observationMap=_observationMap - In the implementation block
@property (nonatomic,retain) NSMutableSet * observerIdentifiers;                //@synthesize observerIdentifiers=_observerIdentifiers - In the implementation block
@property (nonatomic,readonly) unsigned currentObservationCount; 
@property (assign,nonatomic) unsigned minObservationCount;                      //@synthesize minObservationCount=_minObservationCount - In the implementation block
@property (nonatomic,copy) NSDate * matchedDate;                                //@synthesize matchedDate=_matchedDate - In the implementation block
@property (nonatomic,copy) NSDate * eventSinceDate;                             //@synthesize eventSinceDate=_eventSinceDate - In the implementation block
@property (nonatomic,copy) NSString * key;                                      //@synthesize key=_key - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)classSet;
+(long long)typeFromEventDictionary:(id)arg1 ;
+(id)identifierFromEventInfoDictionary:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)newStateFromStateDictionary:(id)arg1 ;
-(id)debugDescription;
-(void)setType:(long long)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setObservationMap:(NSMutableDictionary *)arg1 ;
-(NSDate *)eventSinceDate;
-(unsigned)currentObservationCount;
-(unsigned)minObservationCount;
-(id)description;
-(void)setMinObservationCount:(unsigned)arg1 ;
-(void)removeOutdatedObservationDates;
-(void)setMatchedDate:(NSDate *)arg1 ;
-(void)setObserverIdentifiers:(NSMutableSet *)arg1 ;
-(BOOL)canBeRemoved;
-(void)addObserverIdentifier:(id)arg1 ;
-(BOOL)observedWithResults:(id)arg1 ;
-(void)removeAllObservations;
-(NSDate *)matchedDate;
-(void)setEventSinceDate:(NSDate *)arg1 ;
-(NSMutableDictionary *)observationMap;
-(NSMutableSet *)observerIdentifiers;
-(NSString *)key;
-(long long)type;
-(void)setState:(TPSContextualEvent *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(TPSContextualEvent *)state;
-(void)setStatus:(unsigned long long)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)removeObserverIdentifiers:(id)arg1 ;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(unsigned long long)status;
@end

