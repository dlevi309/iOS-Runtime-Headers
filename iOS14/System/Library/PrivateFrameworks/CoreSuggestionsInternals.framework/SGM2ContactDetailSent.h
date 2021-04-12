/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/

#import <CoreSuggestionsInternals/CoreSuggestionsInternals-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SGM2ContactDetailSent : PBCodable <NSCopying> {

	int _detail;
	int _foundIn;
	NSString* _key;
	int _source;
	int _tokens;
	BOOL _hasName;
	SCD_Struct_SG5 _has;

}

@property (nonatomic,readonly) BOOL hasKey; 
@property (nonatomic,retain) NSString * key;               //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) BOOL hasSource; 
@property (assign,nonatomic) int source;                   //@synthesize source=_source - In the implementation block
@property (assign,nonatomic) BOOL hasDetail; 
@property (assign,nonatomic) int detail;                   //@synthesize detail=_detail - In the implementation block
@property (assign,nonatomic) BOOL hasFoundIn; 
@property (assign,nonatomic) int foundIn;                  //@synthesize foundIn=_foundIn - In the implementation block
@property (assign,nonatomic) BOOL hasHasName; 
@property (assign,nonatomic) BOOL hasName;                 //@synthesize hasName=_hasName - In the implementation block
@property (assign,nonatomic) BOOL hasTokens; 
@property (assign,nonatomic) int tokens;                   //@synthesize tokens=_tokens - In the implementation block
-(BOOL)hasKey;
-(void)setTokens:(int)arg1 ;
-(id)dictionaryRepresentation;
-(int)StringAsSource:(id)arg1 ;
-(void)setHasSource:(BOOL)arg1 ;
-(id)sourceAsString:(int)arg1 ;
-(BOOL)hasSource;
-(int)tokens;
-(int)detail;
-(BOOL)hasName;
-(BOOL)hasDetail;
-(void)mergeFrom:(id)arg1 ;
-(void)setSource:(int)arg1 ;
-(id)description;
-(void)setHasName:(BOOL)arg1 ;
-(NSString *)key;
-(int)foundIn;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setDetail:(int)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(int)source;
-(void)setHasDetail:(BOOL)arg1 ;
-(id)detailAsString:(int)arg1 ;
-(int)StringAsDetail:(id)arg1 ;
-(void)setFoundIn:(int)arg1 ;
-(void)setHasFoundIn:(BOOL)arg1 ;
-(BOOL)hasFoundIn;
-(id)foundInAsString:(int)arg1 ;
-(int)StringAsFoundIn:(id)arg1 ;
-(void)setHasHasName:(BOOL)arg1 ;
-(BOOL)hasHasName;
-(void)setHasTokens:(BOOL)arg1 ;
-(BOOL)hasTokens;
-(id)tokensAsString:(int)arg1 ;
-(int)StringAsTokens:(id)arg1 ;
@end

