/*
* Generated on Thursday, January 14, 2021 at 2:28:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
*/


@class NSString;

@interface VSCredentialEntryField : NSObject {

	BOOL _secure;
	BOOL _required;
	NSString* _title;
	NSString* _placeholder;
	long long _keyboardType;
	NSString* _text;
	long long _autocapitalizationType;
	long long _autocorrectionType;
	long long _returnKeyType;
	NSString* _identifier;
	NSString* _recentsTitle;
	NSString* _recentsMessage;

}

@property (nonatomic,copy) NSString * recentsTitle;                         //@synthesize recentsTitle=_recentsTitle - In the implementation block
@property (nonatomic,copy) NSString * recentsMessage;                       //@synthesize recentsMessage=_recentsMessage - In the implementation block
@property (nonatomic,copy) NSString * title;                                //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * placeholder;                          //@synthesize placeholder=_placeholder - In the implementation block
@property (assign,nonatomic) long long keyboardType;                        //@synthesize keyboardType=_keyboardType - In the implementation block
@property (assign,getter=isSecure,nonatomic) BOOL secure;                   //@synthesize secure=_secure - In the implementation block
@property (nonatomic,copy) NSString * text;                                 //@synthesize text=_text - In the implementation block
@property (assign,getter=isRequired,nonatomic) BOOL required;               //@synthesize required=_required - In the implementation block
@property (assign,nonatomic) long long autocapitalizationType;              //@synthesize autocapitalizationType=_autocapitalizationType - In the implementation block
@property (assign,nonatomic) long long autocorrectionType;                  //@synthesize autocorrectionType=_autocorrectionType - In the implementation block
@property (assign,nonatomic) long long returnKeyType;                       //@synthesize returnKeyType=_returnKeyType - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                       //@synthesize identifier=_identifier - In the implementation block
-(BOOL)isSecure;
-(long long)autocapitalizationType;
-(void)setSecure:(BOOL)arg1 ;
-(long long)keyboardType;
-(void)setReturnKeyType:(long long)arg1 ;
-(long long)returnKeyType;
-(void)setAutocorrectionType:(long long)arg1 ;
-(void)setRequired:(BOOL)arg1 ;
-(long long)autocorrectionType;
-(BOOL)isRequired;
-(void)setKeyboardType:(long long)arg1 ;
-(id)init;
-(void)setAutocapitalizationType:(long long)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(void)setPlaceholder:(NSString *)arg1 ;
-(NSString *)text;
-(NSString *)placeholder;
-(NSString *)identifier;
-(NSString *)title;
-(void)setRecentsTitle:(NSString *)arg1 ;
-(void)setRecentsMessage:(NSString *)arg1 ;
-(NSString *)recentsTitle;
-(NSString *)recentsMessage;
@end

