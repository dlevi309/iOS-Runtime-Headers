/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
*/

#import <TextInput/TextInput-Structs.h>
#import <TextInput/TIKeyboardLayout.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface TIHardwareKeyboardLayout : TIKeyboardLayout <NSSecureCoding> {

	long long _keyboardType;

}

@property (nonatomic,readonly) long long keyboardType;              //@synthesize keyboardType=_keyboardType - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)flushLayoutCaches;
-(long long)keyboardType;
-(id)_ISOFrames;
-(id)initWithKeyboardType:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(CGRect)_frameForKeyCode:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_ANSIFrames;
-(id)_JISFrames;
-(BOOL)isEqual:(id)arg1 ;
-(void)addString:(id)arg1 forKeyCode:(unsigned long long)arg2 ;
@end

