/*
* Generated on Monday, March 1, 2021 at 2:32:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _MRTextInputTraitsProtobuf : PBCodable <NSCopying> {

	SCD_Struct_MR25* _pINEntrySeparatorIndexes;
	unsigned long long _validTextRangeLength;
	unsigned long long _validTextRangeLocation;
	int _autocapitalizationType;
	int _keyboardType;
	int _returnKeyType;
	BOOL _autocorrection;
	BOOL _enablesReturnKeyAutomatically;
	BOOL _secureTextEntry;
	BOOL _spellchecking;
	SCD_Struct_MR26 _has;

}

@property (assign,nonatomic) BOOL hasAutocapitalizationType; 
@property (assign,nonatomic) int autocapitalizationType;                                      //@synthesize autocapitalizationType=_autocapitalizationType - In the implementation block
@property (assign,nonatomic) BOOL hasKeyboardType; 
@property (assign,nonatomic) int keyboardType;                                                //@synthesize keyboardType=_keyboardType - In the implementation block
@property (assign,nonatomic) BOOL hasReturnKeyType; 
@property (assign,nonatomic) int returnKeyType;                                               //@synthesize returnKeyType=_returnKeyType - In the implementation block
@property (assign,nonatomic) BOOL hasAutocorrection; 
@property (assign,nonatomic) BOOL autocorrection;                                             //@synthesize autocorrection=_autocorrection - In the implementation block
@property (assign,nonatomic) BOOL hasSpellchecking; 
@property (assign,nonatomic) BOOL spellchecking;                                              //@synthesize spellchecking=_spellchecking - In the implementation block
@property (assign,nonatomic) BOOL hasEnablesReturnKeyAutomatically; 
@property (assign,nonatomic) BOOL enablesReturnKeyAutomatically;                              //@synthesize enablesReturnKeyAutomatically=_enablesReturnKeyAutomatically - In the implementation block
@property (assign,nonatomic) BOOL hasSecureTextEntry; 
@property (assign,nonatomic) BOOL secureTextEntry;                                            //@synthesize secureTextEntry=_secureTextEntry - In the implementation block
@property (assign,nonatomic) BOOL hasValidTextRangeLocation; 
@property (assign,nonatomic) unsigned long long validTextRangeLocation;                       //@synthesize validTextRangeLocation=_validTextRangeLocation - In the implementation block
@property (assign,nonatomic) BOOL hasValidTextRangeLength; 
@property (assign,nonatomic) unsigned long long validTextRangeLength;                         //@synthesize validTextRangeLength=_validTextRangeLength - In the implementation block
@property (nonatomic,readonly) unsigned long long pINEntrySeparatorIndexesCount; 
@property (nonatomic,readonly) unsigned long long* pINEntrySeparatorIndexes; 
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(int)keyboardType;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setSecureTextEntry:(BOOL)arg1 ;
-(void)setAutocapitalizationType:(int)arg1 ;
-(void)setEnablesReturnKeyAutomatically:(BOOL)arg1 ;
-(void)setReturnKeyType:(int)arg1 ;
-(void)setKeyboardType:(int)arg1 ;
-(int)autocapitalizationType;
-(int)returnKeyType;
-(BOOL)enablesReturnKeyAutomatically;
-(BOOL)autocorrection;
-(BOOL)secureTextEntry;
-(BOOL)hasAutocorrection;
-(void)setAutocorrection:(BOOL)arg1 ;
-(void)setHasAutocorrection:(BOOL)arg1 ;
-(unsigned long long)pINEntrySeparatorIndexesCount;
-(void)clearPINEntrySeparatorIndexes;
-(unsigned long long)pINEntrySeparatorIndexesAtIndex:(unsigned long long)arg1 ;
-(void)addPINEntrySeparatorIndexes:(unsigned long long)arg1 ;
-(void)setHasAutocapitalizationType:(BOOL)arg1 ;
-(BOOL)hasAutocapitalizationType;
-(id)autocapitalizationTypeAsString:(int)arg1 ;
-(int)StringAsAutocapitalizationType:(id)arg1 ;
-(void)setHasKeyboardType:(BOOL)arg1 ;
-(BOOL)hasKeyboardType;
-(id)keyboardTypeAsString:(int)arg1 ;
-(int)StringAsKeyboardType:(id)arg1 ;
-(void)setHasReturnKeyType:(BOOL)arg1 ;
-(BOOL)hasReturnKeyType;
-(id)returnKeyTypeAsString:(int)arg1 ;
-(int)StringAsReturnKeyType:(id)arg1 ;
-(void)setSpellchecking:(BOOL)arg1 ;
-(void)setHasSpellchecking:(BOOL)arg1 ;
-(BOOL)hasSpellchecking;
-(void)setHasEnablesReturnKeyAutomatically:(BOOL)arg1 ;
-(BOOL)hasEnablesReturnKeyAutomatically;
-(void)setHasSecureTextEntry:(BOOL)arg1 ;
-(BOOL)hasSecureTextEntry;
-(void)setValidTextRangeLocation:(unsigned long long)arg1 ;
-(void)setHasValidTextRangeLocation:(BOOL)arg1 ;
-(BOOL)hasValidTextRangeLocation;
-(void)setValidTextRangeLength:(unsigned long long)arg1 ;
-(void)setHasValidTextRangeLength:(BOOL)arg1 ;
-(BOOL)hasValidTextRangeLength;
-(unsigned long long*)pINEntrySeparatorIndexes;
-(void)setPINEntrySeparatorIndexes:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)spellchecking;
-(unsigned long long)validTextRangeLocation;
-(unsigned long long)validTextRangeLength;
@end
