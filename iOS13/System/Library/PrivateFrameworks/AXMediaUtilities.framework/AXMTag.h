/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/


#import <AXMediaUtilities/AXMediaUtilities-Structs.h>
@class NSString, AXMSpeechFormatter, NSTextCheckingResult;

@interface AXMTag : NSObject {

	NSString* _originalText;
	AXMSpeechFormatter* _speechFormatter;
	SCD_Struct_AX9 _nlToken;
	NSString* _nlType;
	NSString* _nlLexicalClass;
	NSString* _nlLanguage;
	NSString* _nlScript;
	NSString* _nlNamedEntity;
	NSString* _nlDerivedSubtoken;
	unsigned long long _datatype;
	NSTextCheckingResult* _textCheckingResult;

}

@property (nonatomic,readonly) NSRange range; 
@property (nonatomic,readonly) NSString * originalText; 
@property (nonatomic,readonly) NSString * speakableText; 
@property (nonatomic,readonly) BOOL isPunctuation; 
@property (nonatomic,readonly) BOOL isWhitespace; 
@property (nonatomic,readonly) BOOL isSentenceTerminator; 
@property (nonatomic,readonly) BOOL isOpenQuote; 
@property (nonatomic,readonly) BOOL isCloseQuote; 
@property (nonatomic,readonly) BOOL isPhoneNumber; 
@property (nonatomic,readonly) BOOL isDate; 
@property (nonatomic,readonly) BOOL isEmailAddress; 
-(id)description;
-(id)_init;
-(NSRange)range;
-(NSString *)originalText;
-(id)_debugType;
-(BOOL)isPunctuation;
-(NSString *)speakableText;
-(BOOL)isPhoneNumber;
-(BOOL)isDate;
-(BOOL)isEmailAddress;
-(id)initWithNLToken:(SCD_Struct_AX10)arg1 text:(id)arg2 type:(id)arg3 lexicalClass:(id)arg4 language:(id)arg5 script:(id)arg6 namedEntity:(id)arg7 derivedSubtoken:(id)arg8 speechFormatter:(id)arg9 ;
-(id)initWithdatatype:(unsigned long long)arg1 text:(id)arg2 textCheckingResult:(id)arg3 speechFormatter:(id)arg4 ;
-(BOOL)isWhitespace;
-(BOOL)isSentenceTerminator;
-(BOOL)isOpenQuote;
-(BOOL)isCloseQuote;
@end

