/*
* Generated on Thursday, January 14, 2021 at 2:28:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
*/


@class NSString;

@interface VSTwoFactorEntryTextField : NSObject {

	BOOL _autoShowKeyboard;
	NSString* _label;
	unsigned long long _expectedLength;
	NSString* _text;
	long long _keyboardType;
	long long _autocapitalizationType;
	long long _autocorrectionType;
	long long _returnKeyType;

}

@property (nonatomic,copy) NSString * label;                                 //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) unsigned long long expectedLength;              //@synthesize expectedLength=_expectedLength - In the implementation block
@property (assign,nonatomic) BOOL autoShowKeyboard;                          //@synthesize autoShowKeyboard=_autoShowKeyboard - In the implementation block
@property (nonatomic,copy) NSString * text;                                  //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) long long keyboardType;                         //@synthesize keyboardType=_keyboardType - In the implementation block
@property (assign,nonatomic) long long autocapitalizationType;               //@synthesize autocapitalizationType=_autocapitalizationType - In the implementation block
@property (assign,nonatomic) long long autocorrectionType;                   //@synthesize autocorrectionType=_autocorrectionType - In the implementation block
@property (assign,nonatomic) long long returnKeyType;                        //@synthesize returnKeyType=_returnKeyType - In the implementation block
-(long long)autocapitalizationType;
-(long long)keyboardType;
-(void)setReturnKeyType:(long long)arg1 ;
-(long long)returnKeyType;
-(void)setAutocorrectionType:(long long)arg1 ;
-(long long)autocorrectionType;
-(void)setKeyboardType:(long long)arg1 ;
-(id)init;
-(void)setAutocapitalizationType:(long long)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(NSString *)text;
-(void)setExpectedLength:(unsigned long long)arg1 ;
-(unsigned long long)expectedLength;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(void)setAutoShowKeyboard:(BOOL)arg1 ;
-(BOOL)autoShowKeyboard;
@end

