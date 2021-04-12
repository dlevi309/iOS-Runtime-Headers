/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <MapsSupport/MapsSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSString, NSMutableArray, GEOSharedNavState;

@interface MSPGroupSessionStorage : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	double _lastUpdateTimestamp;
	NSString* _fromID;
	NSString* _groupIdentifier;
	NSMutableArray* _liveStrategyIdentifiers;
	NSMutableArray* _messageStrategyIdentifiers;
	NSMutableArray* _minimalStrategyIdentifiers;
	NSString* _originatorIdentifier;
	NSString* _receivingAccountIdentifier;
	NSString* _receivingHandle;
	GEOSharedNavState* _state;
	SCD_Struct_MS3 _has;

}

@property (nonatomic,readonly) BOOL hasGroupIdentifier; 
@property (nonatomic,retain) NSString * groupIdentifier;                               //@synthesize groupIdentifier=_groupIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasOriginatorIdentifier; 
@property (nonatomic,retain) NSString * originatorIdentifier;                          //@synthesize originatorIdentifier=_originatorIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasState; 
@property (nonatomic,retain) GEOSharedNavState * state;                                //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) BOOL hasLastUpdateTimestamp; 
@property (assign,nonatomic) double lastUpdateTimestamp;                               //@synthesize lastUpdateTimestamp=_lastUpdateTimestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasFromID; 
@property (nonatomic,retain) NSString * fromID;                                        //@synthesize fromID=_fromID - In the implementation block
@property (nonatomic,retain) NSMutableArray * minimalStrategyIdentifiers;              //@synthesize minimalStrategyIdentifiers=_minimalStrategyIdentifiers - In the implementation block
@property (nonatomic,retain) NSMutableArray * liveStrategyIdentifiers;                 //@synthesize liveStrategyIdentifiers=_liveStrategyIdentifiers - In the implementation block
@property (nonatomic,retain) NSMutableArray * messageStrategyIdentifiers;              //@synthesize messageStrategyIdentifiers=_messageStrategyIdentifiers - In the implementation block
@property (nonatomic,readonly) BOOL hasReceivingHandle; 
@property (nonatomic,retain) NSString * receivingHandle;                               //@synthesize receivingHandle=_receivingHandle - In the implementation block
@property (nonatomic,readonly) BOOL hasReceivingAccountIdentifier; 
@property (nonatomic,retain) NSString * receivingAccountIdentifier;                    //@synthesize receivingAccountIdentifier=_receivingAccountIdentifier - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(id)groupStorageWithIdentifier:(id)arg1 originator:(id)arg2 receivingHandle:(id)arg3 receivingAccountIdentifier:(id)arg4 ;
+(Class)minimalStrategyIdentifierType;
+(Class)liveStrategyIdentifierType;
+(Class)messageStrategyIdentifierType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(GEOSharedNavState *)state;
-(NSString *)groupIdentifier;
-(void)setGroupIdentifier:(NSString *)arg1 ;
-(void)setState:(GEOSharedNavState *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(BOOL)hasGroupIdentifier;
-(void)setFromID:(NSString *)arg1 ;
-(NSString *)fromID;
-(BOOL)hasState;
-(NSString *)receivingHandle;
-(NSString *)receivingAccountIdentifier;
-(void)updateWithState:(id)arg1 ;
-(void)setOriginatorIdentifier:(NSString *)arg1 ;
-(void)setReceivingHandle:(NSString *)arg1 ;
-(void)setReceivingAccountIdentifier:(NSString *)arg1 ;
-(void)setLastUpdateTimestamp:(double)arg1 ;
-(void)setMinimalStrategyIdentifiers:(NSMutableArray *)arg1 ;
-(void)setLiveStrategyIdentifiers:(NSMutableArray *)arg1 ;
-(void)setMessageStrategyIdentifiers:(NSMutableArray *)arg1 ;
-(unsigned long long)minimalStrategyIdentifiersCount;
-(NSMutableArray *)minimalStrategyIdentifiers;
-(unsigned long long)liveStrategyIdentifiersCount;
-(NSMutableArray *)liveStrategyIdentifiers;
-(unsigned long long)messageStrategyIdentifiersCount;
-(NSMutableArray *)messageStrategyIdentifiers;
-(void)addMinimalStrategyIdentifier:(id)arg1 ;
-(void)addLiveStrategyIdentifier:(id)arg1 ;
-(void)addMessageStrategyIdentifier:(id)arg1 ;
-(void)clearMinimalStrategyIdentifiers;
-(id)minimalStrategyIdentifierAtIndex:(unsigned long long)arg1 ;
-(void)clearLiveStrategyIdentifiers;
-(id)liveStrategyIdentifierAtIndex:(unsigned long long)arg1 ;
-(void)clearMessageStrategyIdentifiers;
-(id)messageStrategyIdentifierAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasOriginatorIdentifier;
-(void)setHasLastUpdateTimestamp:(BOOL)arg1 ;
-(BOOL)hasLastUpdateTimestamp;
-(BOOL)hasFromID;
-(BOOL)hasReceivingHandle;
-(BOOL)hasReceivingAccountIdentifier;
-(NSString *)originatorIdentifier;
-(double)lastUpdateTimestamp;
@end

