/*
* Generated on Thursday, January 14, 2021 at 2:20:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Accounts.framework/Accounts
*/

#import <Accounts/Accounts-Structs.h>
#import <Foundation/NSString.h>

@interface ACZeroingString : NSString {

	unsigned short* _characters;
	unsigned long long _length;

}

@property (readonly) unsigned short* characters;              //@synthesize characters=_characters - In the implementation block
@property (readonly) unsigned long long length; 
+(BOOL)supportsSecureCoding;
+(id)_emptyString;
+(Class)classForKeyedUnarchiver;
-(Class)classForKeyedArchiver;
-(id)initWithString:(id)arg1 ;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(id)replacementObjectForCoder:(id)arg1 ;
-(unsigned short*)characters;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithUTF8String:(const char*)arg1 ;
-(unsigned long long)length;
-(id)_compatibleCopy;
-(Class)classForCoder;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithBytes:(const void*)arg1 length:(unsigned long long)arg2 encoding:(unsigned long long)arg3 ;
-(BOOL)_allowsDirectEncoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithCharacters:(const unsigned short*)arg1 length:(unsigned long long)arg2 ;
-(void)dealloc;
@end

