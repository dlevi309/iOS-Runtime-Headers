/*
* Generated on Monday, March 1, 2021 at 2:30:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSString;

@interface UIDictationConnectionOptions : NSObject {

	BOOL _secureInput;
	BOOL _useAutomaticEndpointing;
	BOOL _acceptsDictationSearchResults;
	unsigned long long _version;
	unsigned long long _activationType;
	NSString* _languageCode;
	NSString* _regionCode;
	NSString* _fieldIdentifier;
	NSString* _activationIdentifier;
	NSString* _layoutIdentifier;
	long long _keyboardType;
	long long _returnKeyType;
	NSString* _prefixText;
	NSString* _selectedText;
	NSString* _postfixText;

}

@property (assign,nonatomic) unsigned long long version;                      //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) unsigned long long activationType;               //@synthesize activationType=_activationType - In the implementation block
@property (nonatomic,copy) NSString * languageCode;                           //@synthesize languageCode=_languageCode - In the implementation block
@property (nonatomic,copy) NSString * regionCode;                             //@synthesize regionCode=_regionCode - In the implementation block
@property (nonatomic,copy) NSString * fieldIdentifier;                        //@synthesize fieldIdentifier=_fieldIdentifier - In the implementation block
@property (nonatomic,copy) NSString * activationIdentifier;                   //@synthesize activationIdentifier=_activationIdentifier - In the implementation block
@property (nonatomic,copy) NSString * layoutIdentifier;                       //@synthesize layoutIdentifier=_layoutIdentifier - In the implementation block
@property (assign,nonatomic) long long keyboardType;                          //@synthesize keyboardType=_keyboardType - In the implementation block
@property (assign,nonatomic) long long returnKeyType;                         //@synthesize returnKeyType=_returnKeyType - In the implementation block
@property (assign,nonatomic) BOOL secureInput;                                //@synthesize secureInput=_secureInput - In the implementation block
@property (assign,nonatomic) BOOL useAutomaticEndpointing;                    //@synthesize useAutomaticEndpointing=_useAutomaticEndpointing - In the implementation block
@property (assign,nonatomic) BOOL acceptsDictationSearchResults;              //@synthesize acceptsDictationSearchResults=_acceptsDictationSearchResults - In the implementation block
@property (nonatomic,copy) NSString * prefixText;                             //@synthesize prefixText=_prefixText - In the implementation block
@property (nonatomic,copy) NSString * selectedText;                           //@synthesize selectedText=_selectedText - In the implementation block
@property (nonatomic,copy) NSString * postfixText;                            //@synthesize postfixText=_postfixText - In the implementation block
-(NSString *)languageCode;
-(unsigned long long)version;
-(void)setVersion:(unsigned long long)arg1 ;
-(long long)keyboardType;
-(void)setReturnKeyType:(long long)arg1 ;
-(void)setKeyboardType:(long long)arg1 ;
-(long long)returnKeyType;
-(BOOL)acceptsDictationSearchResults;
-(void)setAcceptsDictationSearchResults:(BOOL)arg1 ;
-(BOOL)useAutomaticEndpointing;
-(void)setUseAutomaticEndpointing:(BOOL)arg1 ;
-(NSString *)selectedText;
-(void)setActivationIdentifier:(NSString *)arg1 ;
-(NSString *)fieldIdentifier;
-(void)setFieldIdentifier:(NSString *)arg1 ;
-(NSString *)layoutIdentifier;
-(BOOL)secureInput;
-(NSString *)prefixText;
-(void)setPrefixText:(NSString *)arg1 ;
-(NSString *)postfixText;
-(void)setPostfixText:(NSString *)arg1 ;
-(void)setSelectedText:(NSString *)arg1 ;
-(unsigned long long)activationType;
-(NSString *)activationIdentifier;
-(void)setActivationType:(unsigned long long)arg1 ;
-(void)setLanguageCode:(NSString *)arg1 ;
-(void)setRegionCode:(NSString *)arg1 ;
-(void)setLayoutIdentifier:(NSString *)arg1 ;
-(void)setSecureInput:(BOOL)arg1 ;
-(NSString *)regionCode;
@end

