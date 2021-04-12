/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSMutableString.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableString, NSDictionary;

@interface __NSLocalizedString : NSMutableString <NSSecureCoding> {

	NSMutableString* original;
	NSDictionary* config;

}
+(BOOL)supportsSecureCoding;
-(const char*)_fastCStringContents:(BOOL)arg1 ;
-(void)dealloc;
-(unsigned long long)length;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)replaceCharactersInRange:(NSRange)arg1 withString:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)replaceOccurrencesOfString:(id)arg1 withString:(id)arg2 options:(unsigned long long)arg3 range:(NSRange)arg4 ;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
-(const unsigned short*)_fastCharacterContents;
-(id)substringWithRange:(NSRange)arg1 ;
-(BOOL)isEqualToString:(id)arg1 ;
-(unsigned long long)fastestEncoding;
-(Class)classForCoder;
-(void)insertString:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)appendString:(id)arg1 ;
-(void)deleteCharactersInRange:(NSRange)arg1 ;
-(void)appendFormat:(id)arg1 ;
-(void)setString:(id)arg1 ;
-(void)appendCharacters:(const unsigned short*)arg1 length:(unsigned long long)arg2 ;
-(long long)compare:(id)arg1 options:(unsigned long long)arg2 range:(NSRange)arg3 locale:(id)arg4 ;
-(id)formatConfiguration;
-(id)substringFromIndex:(unsigned long long)arg1 ;
-(BOOL)_allowsDirectEncoding;
-(id)substringToIndex:(unsigned long long)arg1 ;
-(id)initWithString:(id)arg1 withFormatConfiguration:(id)arg2 ;
-(id)baseString;
@end

