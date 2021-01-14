/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)fastestEncoding;
-(BOOL)isEqualToString:(id)arg1 ;
-(void)appendString:(id)arg1 ;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
-(id)substringFromIndex:(unsigned long long)arg1 ;
-(long long)compare:(id)arg1 options:(unsigned long long)arg2 range:(NSRange)arg3 locale:(id)arg4 ;
-(void)appendFormat:(id)arg1 ;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(id)baseString;
-(id)initWithString:(id)arg1 withFormatConfiguration:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)length;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(unsigned long long)replaceOccurrencesOfString:(id)arg1 withString:(id)arg2 options:(unsigned long long)arg3 range:(NSRange)arg4 ;
-(const unsigned short*)_fastCharacterContents;
-(Class)classForCoder;
-(const char*)_fastCStringContents:(BOOL)arg1 ;
-(id)formatConfiguration;
-(void)deleteCharactersInRange:(NSRange)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)substringToIndex:(unsigned long long)arg1 ;
-(void)appendCharacters:(const unsigned short*)arg1 length:(unsigned long long)arg2 ;
-(void)insertString:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setString:(id)arg1 ;
-(id)substringWithRange:(NSRange)arg1 ;
-(BOOL)_allowsDirectEncoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)replaceCharactersInRange:(NSRange)arg1 withString:(id)arg2 ;
-(void)dealloc;
@end

