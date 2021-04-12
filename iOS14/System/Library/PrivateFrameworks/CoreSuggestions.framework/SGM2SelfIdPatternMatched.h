/*
* Generated on Thursday, January 14, 2021 at 2:22:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
*/

#import <CoreSuggestions/CoreSuggestions-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SGM2SelfIdPatternMatched : PBCodable <NSCopying> {

	NSString* _key;
	unsigned _messageIndex;
	int _nameClass;
	unsigned _nameTokens;
	NSString* _patternHash;
	int _patternType;
	SCD_Struct_SG3 _has;

}

@property (nonatomic,readonly) BOOL hasKey; 
@property (nonatomic,retain) NSString * key;                      //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) BOOL hasPatternType; 
@property (assign,nonatomic) int patternType;                     //@synthesize patternType=_patternType - In the implementation block
@property (nonatomic,readonly) BOOL hasPatternHash; 
@property (nonatomic,retain) NSString * patternHash;              //@synthesize patternHash=_patternHash - In the implementation block
@property (assign,nonatomic) BOOL hasNameTokens; 
@property (assign,nonatomic) unsigned nameTokens;                 //@synthesize nameTokens=_nameTokens - In the implementation block
@property (assign,nonatomic) BOOL hasNameClass; 
@property (assign,nonatomic) int nameClass;                       //@synthesize nameClass=_nameClass - In the implementation block
@property (assign,nonatomic) BOOL hasMessageIndex; 
@property (assign,nonatomic) unsigned messageIndex;               //@synthesize messageIndex=_messageIndex - In the implementation block
-(BOOL)hasKey;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(int)nameClass;
-(int)patternType;
-(void)setPatternType:(int)arg1 ;
-(void)setHasPatternType:(BOOL)arg1 ;
-(BOOL)hasPatternType;
-(BOOL)hasPatternHash;
-(id)patternTypeAsString:(int)arg1 ;
-(int)StringAsPatternType:(id)arg1 ;
-(void)setNameTokens:(unsigned)arg1 ;
-(void)setHasNameTokens:(BOOL)arg1 ;
-(BOOL)hasNameTokens;
-(void)setNameClass:(int)arg1 ;
-(void)setHasNameClass:(BOOL)arg1 ;
-(BOOL)hasNameClass;
-(id)nameClassAsString:(int)arg1 ;
-(NSString *)patternHash;
-(int)StringAsNameClass:(id)arg1 ;
-(void)setMessageIndex:(unsigned)arg1 ;
-(void)setHasMessageIndex:(BOOL)arg1 ;
-(BOOL)hasMessageIndex;
-(void)setPatternHash:(NSString *)arg1 ;
-(unsigned)nameTokens;
-(unsigned)messageIndex;
-(NSString *)key;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

