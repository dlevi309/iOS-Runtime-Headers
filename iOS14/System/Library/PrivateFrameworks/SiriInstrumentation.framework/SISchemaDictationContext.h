/*
* Generated on Thursday, January 14, 2021 at 2:24:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
*/

#import <ProtocolBuffer/PBCodable.h>

@class NSString, SISchemaLocaleIdentifier, NSArray, NSData;

@interface SISchemaDictationContext : PBCodable {

	NSString* _keyboardLanguage;
	SISchemaLocaleIdentifier* _keyboardLocale;
	SISchemaLocaleIdentifier* _dictationLocale;
	SISchemaLocaleIdentifier* _userSelectedLocale;
	SISchemaLocaleIdentifier* _siriSelectedLocale;
	NSArray* _keyboardLocalesEnableds;
	NSArray* _dictationLocalesEnableds;
	NSString* _bundleId;
	BOOL _hasKeyboardLanguage;
	BOOL _hasKeyboardLocale;
	BOOL _hasDictationLocale;
	BOOL _hasUserSelectedLocale;
	BOOL _hasSiriSelectedLocale;
	BOOL _hasBundleId;

}

@property (nonatomic,copy) NSString * keyboardLanguage;                                  //@synthesize keyboardLanguage=_keyboardLanguage - In the implementation block
@property (assign,nonatomic) BOOL hasKeyboardLanguage;                                   //@synthesize hasKeyboardLanguage=_hasKeyboardLanguage - In the implementation block
@property (nonatomic,retain) SISchemaLocaleIdentifier * keyboardLocale;                  //@synthesize keyboardLocale=_keyboardLocale - In the implementation block
@property (assign,nonatomic) BOOL hasKeyboardLocale;                                     //@synthesize hasKeyboardLocale=_hasKeyboardLocale - In the implementation block
@property (nonatomic,retain) SISchemaLocaleIdentifier * dictationLocale;                 //@synthesize dictationLocale=_dictationLocale - In the implementation block
@property (assign,nonatomic) BOOL hasDictationLocale;                                    //@synthesize hasDictationLocale=_hasDictationLocale - In the implementation block
@property (nonatomic,retain) SISchemaLocaleIdentifier * userSelectedLocale;              //@synthesize userSelectedLocale=_userSelectedLocale - In the implementation block
@property (assign,nonatomic) BOOL hasUserSelectedLocale;                                 //@synthesize hasUserSelectedLocale=_hasUserSelectedLocale - In the implementation block
@property (nonatomic,retain) SISchemaLocaleIdentifier * siriSelectedLocale;              //@synthesize siriSelectedLocale=_siriSelectedLocale - In the implementation block
@property (assign,nonatomic) BOOL hasSiriSelectedLocale;                                 //@synthesize hasSiriSelectedLocale=_hasSiriSelectedLocale - In the implementation block
@property (nonatomic,copy) NSArray * keyboardLocalesEnableds;                            //@synthesize keyboardLocalesEnableds=_keyboardLocalesEnableds - In the implementation block
@property (nonatomic,copy) NSArray * dictationLocalesEnableds;                           //@synthesize dictationLocalesEnableds=_dictationLocalesEnableds - In the implementation block
@property (nonatomic,copy) NSString * bundleId;                                          //@synthesize bundleId=_bundleId - In the implementation block
@property (assign,nonatomic) BOOL hasBundleId;                                           //@synthesize hasBundleId=_hasBundleId - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(id)dictionaryRepresentation;
-(NSString *)keyboardLanguage;
-(void)setBundleId:(NSString *)arg1 ;
-(void)setKeyboardLanguage:(NSString *)arg1 ;
-(NSString *)bundleId;
-(NSData *)jsonData;
-(BOOL)hasBundleId;
-(void)setKeyboardLocale:(SISchemaLocaleIdentifier *)arg1 ;
-(void)setDictationLocale:(SISchemaLocaleIdentifier *)arg1 ;
-(void)setUserSelectedLocale:(SISchemaLocaleIdentifier *)arg1 ;
-(void)setSiriSelectedLocale:(SISchemaLocaleIdentifier *)arg1 ;
-(void)addKeyboardLocalesEnabled:(id)arg1 ;
-(void)addDictationLocalesEnabled:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(SISchemaLocaleIdentifier *)keyboardLocale;
-(SISchemaLocaleIdentifier *)dictationLocale;
-(SISchemaLocaleIdentifier *)userSelectedLocale;
-(SISchemaLocaleIdentifier *)siriSelectedLocale;
-(NSArray *)keyboardLocalesEnableds;
-(NSArray *)dictationLocalesEnableds;
-(BOOL)hasKeyboardLanguage;
-(BOOL)hasKeyboardLocale;
-(BOOL)hasDictationLocale;
-(BOOL)hasUserSelectedLocale;
-(BOOL)hasSiriSelectedLocale;
-(void)clearKeyboardLocalesEnabled;
-(unsigned long long)keyboardLocalesEnabledCount;
-(id)keyboardLocalesEnabledAtIndex:(unsigned long long)arg1 ;
-(void)clearDictationLocalesEnabled;
-(unsigned long long)dictationLocalesEnabledCount;
-(id)dictationLocalesEnabledAtIndex:(unsigned long long)arg1 ;
-(void)setKeyboardLocalesEnableds:(NSArray *)arg1 ;
-(void)setDictationLocalesEnableds:(NSArray *)arg1 ;
-(void)setHasKeyboardLanguage:(BOOL)arg1 ;
-(void)setHasKeyboardLocale:(BOOL)arg1 ;
-(void)setHasDictationLocale:(BOOL)arg1 ;
-(void)setHasUserSelectedLocale:(BOOL)arg1 ;
-(void)setHasSiriSelectedLocale:(BOOL)arg1 ;
-(void)setHasBundleId:(BOOL)arg1 ;
@end

