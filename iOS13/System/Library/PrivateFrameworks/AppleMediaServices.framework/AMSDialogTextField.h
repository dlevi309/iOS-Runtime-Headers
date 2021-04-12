/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface AMSDialogTextField : NSObject <NSSecureCoding> {

	BOOL _secure;
	long long _keyboardType;
	NSString* _placeholder;
	long long _tag;
	NSString* _text;

}

@property (assign,nonatomic) long long keyboardType;              //@synthesize keyboardType=_keyboardType - In the implementation block
@property (nonatomic,copy) NSString * placeholder;                //@synthesize placeholder=_placeholder - In the implementation block
@property (assign,nonatomic) BOOL secure;                         //@synthesize secure=_secure - In the implementation block
@property (assign,nonatomic) long long tag;                       //@synthesize tag=_tag - In the implementation block
@property (nonatomic,copy) NSString * text;                       //@synthesize text=_text - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)textFieldWithPlaceholder:(id)arg1 secure:(BOOL)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)keyboardType;
-(long long)tag;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setPlaceholder:(NSString *)arg1 ;
-(void)setTag:(long long)arg1 ;
-(void)setKeyboardType:(long long)arg1 ;
-(NSString *)placeholder;
-(void)setSecure:(BOOL)arg1 ;
-(BOOL)secure;
@end

