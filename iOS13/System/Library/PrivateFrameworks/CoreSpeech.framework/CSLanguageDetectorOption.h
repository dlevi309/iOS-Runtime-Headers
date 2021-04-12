/*
* Generated on Monday, March 1, 2021 at 2:34:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/


@class NSSet, NSString, NSArray, NSDictionary;

@interface CSLanguageDetectorOption : NSObject {

	BOOL _wasLanguageToggled;
	float _samplingRate;
	NSSet* _dictationLanguages;
	NSString* _currentKeyboard;
	NSArray* _multilingualKeyboardLanguages;
	NSDictionary* _keyboardConvoLanguagePriors;
	NSDictionary* _keyboardGlobalLanguagePriors;
	NSString* _previousMessageLanguage;
	NSString* _globalLastKeyboardUsed;
	NSDictionary* _dictationLanguagePriors;
	NSArray* _conversationalMessages;

}

@property (assign,nonatomic) float samplingRate;                                       //@synthesize samplingRate=_samplingRate - In the implementation block
@property (nonatomic,retain) NSSet * dictationLanguages;                               //@synthesize dictationLanguages=_dictationLanguages - In the implementation block
@property (nonatomic,retain) NSString * currentKeyboard;                               //@synthesize currentKeyboard=_currentKeyboard - In the implementation block
@property (assign,nonatomic) BOOL wasLanguageToggled;                                  //@synthesize wasLanguageToggled=_wasLanguageToggled - In the implementation block
@property (nonatomic,retain) NSArray * multilingualKeyboardLanguages;                  //@synthesize multilingualKeyboardLanguages=_multilingualKeyboardLanguages - In the implementation block
@property (nonatomic,retain) NSDictionary * keyboardConvoLanguagePriors;               //@synthesize keyboardConvoLanguagePriors=_keyboardConvoLanguagePriors - In the implementation block
@property (nonatomic,retain) NSDictionary * keyboardGlobalLanguagePriors;              //@synthesize keyboardGlobalLanguagePriors=_keyboardGlobalLanguagePriors - In the implementation block
@property (nonatomic,retain) NSString * previousMessageLanguage;                       //@synthesize previousMessageLanguage=_previousMessageLanguage - In the implementation block
@property (nonatomic,retain) NSString * globalLastKeyboardUsed;                        //@synthesize globalLastKeyboardUsed=_globalLastKeyboardUsed - In the implementation block
@property (nonatomic,retain) NSDictionary * dictationLanguagePriors;                   //@synthesize dictationLanguagePriors=_dictationLanguagePriors - In the implementation block
@property (nonatomic,retain) NSArray * conversationalMessages;                         //@synthesize conversationalMessages=_conversationalMessages - In the implementation block
-(float)samplingRate;
-(void)setDictationLanguages:(NSSet *)arg1 ;
-(void)setWasLanguageToggled:(BOOL)arg1 ;
-(NSSet *)dictationLanguages;
-(NSString *)currentKeyboard;
-(void)setCurrentKeyboard:(NSString *)arg1 ;
-(void)setKeyboardGlobalLanguagePriors:(NSDictionary *)arg1 ;
-(BOOL)wasLanguageToggled;
-(NSDictionary *)keyboardGlobalLanguagePriors;
-(NSArray *)multilingualKeyboardLanguages;
-(NSDictionary *)keyboardConvoLanguagePriors;
-(NSString *)previousMessageLanguage;
-(NSString *)globalLastKeyboardUsed;
-(NSDictionary *)dictationLanguagePriors;
-(void)setMultilingualKeyboardLanguages:(NSArray *)arg1 ;
-(void)setKeyboardConvoLanguagePriors:(NSDictionary *)arg1 ;
-(void)setPreviousMessageLanguage:(NSString *)arg1 ;
-(void)setGlobalLastKeyboardUsed:(NSString *)arg1 ;
-(void)setDictationLanguagePriors:(NSDictionary *)arg1 ;
-(void)setSamplingRate:(float)arg1 ;
-(id)languageDetectorRequestContext;
-(void)setConversationalMessages:(NSArray *)arg1 ;
-(NSArray *)conversationalMessages;
@end

