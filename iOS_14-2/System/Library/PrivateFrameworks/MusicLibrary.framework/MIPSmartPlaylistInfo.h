/*
* Generated on Thursday, January 14, 2021 at 2:24:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface MIPSmartPlaylistInfo : PBCodable <NSCopying> {

	unsigned _evaluationOrder;
	int _limitKind;
	unsigned _limitOrder;
	unsigned _limitValue;
	NSData* _smartCriteria;
	BOOL _dynamic;
	BOOL _enabledItemsOnly;
	BOOL _filtered;
	BOOL _genius;
	BOOL _limited;
	BOOL _reverseLimitOrder;
	SCD_Struct_MI14 _has;

}

@property (assign,nonatomic) BOOL hasDynamic; 
@property (assign,nonatomic) BOOL dynamic;                           //@synthesize dynamic=_dynamic - In the implementation block
@property (assign,nonatomic) BOOL hasFiltered; 
@property (assign,nonatomic) BOOL filtered;                          //@synthesize filtered=_filtered - In the implementation block
@property (assign,nonatomic) BOOL hasLimited; 
@property (assign,nonatomic) BOOL limited;                           //@synthesize limited=_limited - In the implementation block
@property (assign,nonatomic) BOOL hasLimitKind; 
@property (assign,nonatomic) int limitKind;                          //@synthesize limitKind=_limitKind - In the implementation block
@property (assign,nonatomic) BOOL hasEvaluationOrder; 
@property (assign,nonatomic) unsigned evaluationOrder;               //@synthesize evaluationOrder=_evaluationOrder - In the implementation block
@property (assign,nonatomic) BOOL hasLimitOrder; 
@property (assign,nonatomic) unsigned limitOrder;                    //@synthesize limitOrder=_limitOrder - In the implementation block
@property (assign,nonatomic) BOOL hasLimitValue; 
@property (assign,nonatomic) unsigned limitValue;                    //@synthesize limitValue=_limitValue - In the implementation block
@property (assign,nonatomic) BOOL hasEnabledItemsOnly; 
@property (assign,nonatomic) BOOL enabledItemsOnly;                  //@synthesize enabledItemsOnly=_enabledItemsOnly - In the implementation block
@property (assign,nonatomic) BOOL hasReverseLimitOrder; 
@property (assign,nonatomic) BOOL reverseLimitOrder;                 //@synthesize reverseLimitOrder=_reverseLimitOrder - In the implementation block
@property (nonatomic,readonly) BOOL hasSmartCriteria; 
@property (nonatomic,retain) NSData * smartCriteria;                 //@synthesize smartCriteria=_smartCriteria - In the implementation block
@property (assign,nonatomic) BOOL hasGenius; 
@property (assign,nonatomic) BOOL genius;                            //@synthesize genius=_genius - In the implementation block
-(id)dictionaryRepresentation;
-(BOOL)filtered;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)genius;
-(unsigned)limitValue;
-(void)setLimitValue:(unsigned)arg1 ;
-(BOOL)hasLimitValue;
-(void)setHasLimitValue:(BOOL)arg1 ;
-(id)description;
-(BOOL)limited;
-(void)setFiltered:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setDynamic:(BOOL)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)dynamic;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)evaluationOrder;
-(BOOL)enabledItemsOnly;
-(int)limitKind;
-(unsigned)limitOrder;
-(BOOL)reverseLimitOrder;
-(NSData *)smartCriteria;
-(BOOL)hasEvaluationOrder;
-(BOOL)hasDynamic;
-(BOOL)hasFiltered;
-(BOOL)hasGenius;
-(BOOL)hasEnabledItemsOnly;
-(BOOL)hasLimited;
-(BOOL)hasLimitKind;
-(BOOL)hasLimitOrder;
-(BOOL)hasReverseLimitOrder;
-(BOOL)hasSmartCriteria;
-(void)setSmartCriteria:(NSData *)arg1 ;
-(void)setHasDynamic:(BOOL)arg1 ;
-(void)setHasFiltered:(BOOL)arg1 ;
-(void)setLimited:(BOOL)arg1 ;
-(void)setHasLimited:(BOOL)arg1 ;
-(void)setLimitKind:(int)arg1 ;
-(void)setHasLimitKind:(BOOL)arg1 ;
-(void)setEvaluationOrder:(unsigned)arg1 ;
-(void)setHasEvaluationOrder:(BOOL)arg1 ;
-(void)setLimitOrder:(unsigned)arg1 ;
-(void)setHasLimitOrder:(BOOL)arg1 ;
-(void)setEnabledItemsOnly:(BOOL)arg1 ;
-(void)setHasEnabledItemsOnly:(BOOL)arg1 ;
-(void)setReverseLimitOrder:(BOOL)arg1 ;
-(void)setHasReverseLimitOrder:(BOOL)arg1 ;
-(void)setGenius:(BOOL)arg1 ;
-(void)setHasGenius:(BOOL)arg1 ;
@end

