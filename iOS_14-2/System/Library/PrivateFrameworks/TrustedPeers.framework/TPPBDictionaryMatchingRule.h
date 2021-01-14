/*
* Generated on Thursday, January 14, 2021 at 2:26:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrustedPeers.framework/TrustedPeers
*/

#import <TrustedPeers/TrustedPeers-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, TPPBDictionaryMatchingRuleFieldExists, TPPBDictionaryMatchingRuleFieldRegexMatch;

@interface TPPBDictionaryMatchingRule : PBCodable <NSCopying> {

	NSMutableArray* _ands;
	TPPBDictionaryMatchingRuleFieldExists* _exists;
	TPPBDictionaryMatchingRuleFieldRegexMatch* _match;
	TPPBDictionaryMatchingRule* _not;
	NSMutableArray* _ors;
	int _type;
	SCD_Struct_TP3 _has;

}

@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                                                       //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSMutableArray * ands;                                          //@synthesize ands=_ands - In the implementation block
@property (nonatomic,retain) NSMutableArray * ors;                                           //@synthesize ors=_ors - In the implementation block
@property (nonatomic,readonly) BOOL hasNot; 
@property (nonatomic,retain) TPPBDictionaryMatchingRule * not;                               //@synthesize not=_not - In the implementation block
@property (nonatomic,readonly) BOOL hasMatch; 
@property (nonatomic,retain) TPPBDictionaryMatchingRuleFieldRegexMatch * match;              //@synthesize match=_match - In the implementation block
@property (nonatomic,readonly) BOOL hasExists; 
@property (nonatomic,retain) TPPBDictionaryMatchingRuleFieldExists * exists;                 //@synthesize exists=_exists - In the implementation block
+(Class)orType;
+(Class)andType;
-(id)dictionaryRepresentation;
-(NSMutableArray *)ors;
-(TPPBDictionaryMatchingRule *)not;
-(id)typeAsString:(int)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(NSMutableArray *)ands;
-(TPPBDictionaryMatchingRuleFieldRegexMatch *)match;
-(TPPBDictionaryMatchingRuleFieldExists *)exists;
-(BOOL)hasType;
-(void)mergeFrom:(id)arg1 ;
-(void)setType:(int)arg1 ;
-(void)addOr:(id)arg1 ;
-(BOOL)hasNot;
-(void)setMatch:(TPPBDictionaryMatchingRuleFieldRegexMatch *)arg1 ;
-(id)description;
-(int)type;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)addAnd:(id)arg1 ;
-(void)setOrs:(NSMutableArray *)arg1 ;
-(void)setNot:(TPPBDictionaryMatchingRule *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setExists:(TPPBDictionaryMatchingRuleFieldExists *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)clearAnds;
-(unsigned long long)andsCount;
-(id)andAtIndex:(unsigned long long)arg1 ;
-(void)clearOrs;
-(unsigned long long)orsCount;
-(id)orAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasMatch;
-(BOOL)hasExists;
-(void)setAnds:(NSMutableArray *)arg1 ;
-(BOOL)matches:(id)arg1 error:(id*)arg2 ;
-(BOOL)performOrMatch:(id)arg1 error:(id*)arg2 ;
-(BOOL)performAndMatch:(id)arg1 error:(id*)arg2 ;
-(BOOL)invertMatch:(id)arg1 error:(id*)arg2 ;
@end

