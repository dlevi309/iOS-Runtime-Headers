/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(Class)andType;
+(Class)orType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)type;
-(void)setType:(int)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(TPPBDictionaryMatchingRuleFieldExists *)exists;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(TPPBDictionaryMatchingRuleFieldRegexMatch *)match;
-(void)setExists:(TPPBDictionaryMatchingRuleFieldExists *)arg1 ;
-(void)clearAnds;
-(void)addAnd:(id)arg1 ;
-(unsigned long long)andsCount;
-(id)andAtIndex:(unsigned long long)arg1 ;
-(void)clearOrs;
-(void)addOr:(id)arg1 ;
-(unsigned long long)orsCount;
-(id)orAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasNot;
-(BOOL)hasMatch;
-(BOOL)hasExists;
-(NSMutableArray *)ands;
-(void)setAnds:(NSMutableArray *)arg1 ;
-(NSMutableArray *)ors;
-(void)setOrs:(NSMutableArray *)arg1 ;
-(TPPBDictionaryMatchingRule *)not;
-(void)setNot:(TPPBDictionaryMatchingRule *)arg1 ;
-(void)setMatch:(TPPBDictionaryMatchingRuleFieldRegexMatch *)arg1 ;
-(BOOL)matches:(id)arg1 error:(id*)arg2 ;
-(BOOL)performOrMatch:(id)arg1 error:(id*)arg2 ;
-(BOOL)performAndMatch:(id)arg1 error:(id*)arg2 ;
-(BOOL)invertMatch:(id)arg1 error:(id*)arg2 ;
@end

