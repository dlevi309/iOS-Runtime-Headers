/*
* Generated on Thursday, January 14, 2021 at 2:22:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface SFRemoteTextSessionInfo : NSObject <NSSecureCoding> {

	BOOL _secureTextEntry;
	NSString* _identifier;
	long long _keyboardType;
	NSString* _prompt;
	long long _returnKeyType;
	NSDictionary* _rtiPayload;
	NSString* _text;
	NSString* _title;

}

@property (nonatomic,copy) NSString * identifier;                  //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) long long keyboardType;               //@synthesize keyboardType=_keyboardType - In the implementation block
@property (nonatomic,copy) NSString * prompt;                      //@synthesize prompt=_prompt - In the implementation block
@property (assign,nonatomic) long long returnKeyType;              //@synthesize returnKeyType=_returnKeyType - In the implementation block
@property (nonatomic,copy) NSDictionary * rtiPayload;              //@synthesize rtiPayload=_rtiPayload - In the implementation block
@property (assign,nonatomic) BOOL secureTextEntry;                 //@synthesize secureTextEntry=_secureTextEntry - In the implementation block
@property (nonatomic,copy) NSString * text;                        //@synthesize text=_text - In the implementation block
@property (nonatomic,copy) NSString * title;                       //@synthesize title=_title - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setPrompt:(NSString *)arg1 ;
-(NSString *)prompt;
-(id)dictionaryRepresentation;
-(long long)keyboardType;
-(void)setReturnKeyType:(long long)arg1 ;
-(long long)returnKeyType;
-(void)setSecureTextEntry:(BOOL)arg1 ;
-(void)setKeyboardType:(long long)arg1 ;
-(BOOL)secureTextEntry;
-(NSDictionary *)rtiPayload;
-(id)initWithRTIPayload:(id)arg1 ;
-(void)setRtiPayload:(NSDictionary *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(NSString *)text;
-(id)initWithCoder:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(NSString *)title;
@end

