/*
* Generated on Monday, March 1, 2021 at 2:31:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)keyboardType;
-(id)initWithKeyboardType:(long long)arg1 ;
-(void)addString:(id)arg1 forKeyCode:(unsigned long long)arg2 ;
-(CGRect)_frameForKeyCode:(unsigned long long)arg1 ;
-(id)_ANSIFrames;
-(id)_ISOFrames;
-(id)_JISFrames;
@end

