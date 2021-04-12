/*
* Generated on Monday, March 1, 2021 at 2:35:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

}

@property (nonatomic,copy) NSString * keyboardLanguage;                                  //@synthesize keyboardLanguage=_keyboardLanguage - In the implementation block
@property (nonatomic,retain) SISchemaLocaleIdentifier * keyboardLocale;                  //@synthesize keyboardLocale=_keyboardLocale - In the implementation block
@property (nonatomic,retain) SISchemaLocaleIdentifier * dictationLocale;                 //@synthesize dictationLocale=_dictationLocale - In the implementation block
@property (nonatomic,retain) SISchemaLocaleIdentifier * userSelectedLocale;              //@synthesize userSelectedLocale=_userSelectedLocale - In the implementation block
@property (nonatomic,retain) SISchemaLocaleIdentifier * siriSelectedLocale;              //@synthesize siriSelectedLocale=_siriSelectedLocale - In the implementation block
@property (nonatomic,copy) NSArray * keyboardLocalesEnableds;                            //@synthesize keyboardLocalesEnableds=_keyboardLocalesEnableds - In the implementation block
@property (nonatomic,copy) NSArray * dictationLocalesEnableds;                           //@synthesize dictationLocalesEnableds=_dictationLocalesEnableds - In the implementation block
@property (nonatomic,copy) NSString * bundleId;                                          //@synthesize bundleId=_bundleId - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(NSString *)bundleId;
-(void)setBundleId:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setKeyboardLocale:(SISchemaLocaleIdentifier *)arg1 ;
-(void)setDictationLocale:(SISchemaLocaleIdentifier *)arg1 ;
-(void)setUserSelectedLocale:(SISchemaLocaleIdentifier *)arg1 ;
-(void)setSiriSelectedLocale:(SISchemaLocaleIdentifier *)arg1 ;
-(void)addKeyboardLocalesEnabled:(id)arg1 ;
-(void)addDictationLocalesEnabled:(id)arg1 ;
-(NSData *)jsonData;
-(id)initWithJSON:(id)arg1 ;
-(void)setKeyboardLanguage:(NSString *)arg1 ;
-(NSString *)keyboardLanguage;
-(SISchemaLocaleIdentifier *)keyboardLocale;
-(SISchemaLocaleIdentifier *)dictationLocale;
-(SISchemaLocaleIdentifier *)userSelectedLocale;
-(SISchemaLocaleIdentifier *)siriSelectedLocale;
-(NSArray *)keyboardLocalesEnableds;
-(NSArray *)dictationLocalesEnableds;
-(void)clearKeyboardLocalesEnabled;
-(unsigned long long)keyboardLocalesEnabledCount;
-(id)keyboardLocalesEnabledAtIndex:(unsigned long long)arg1 ;
-(void)clearDictationLocalesEnabled;
-(unsigned long long)dictationLocalesEnabledCount;
-(id)dictationLocalesEnabledAtIndex:(unsigned long long)arg1 ;
-(void)setKeyboardLocalesEnableds:(NSArray *)arg1 ;
-(void)setDictationLocalesEnableds:(NSArray *)arg1 ;
@end

