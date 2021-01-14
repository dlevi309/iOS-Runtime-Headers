/*
* Generated on Thursday, January 14, 2021 at 2:20:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSString.h>

@interface NSMutableString : NSString
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)stringWithCapacity:(unsigned long long)arg1 ;
-(void)_cfTrim:(CFStringRef)arg1 ;
-(void)_cfTrimWS;
-(void)_cfCapitalize:(const void*)arg1 ;
-(void)_cfLowercase:(const void*)arg1 ;
-(void)_cfUppercase:(const void*)arg1 ;
-(void)_cfNormalize:(long long)arg1 ;
-(void)_cfAppendCString:(const char*)arg1 length:(long long)arg2 ;
-(void)_cfPad:(CFStringRef)arg1 length:(unsigned)arg2 padIndex:(unsigned)arg3 ;
-(unsigned long long)_replaceOccurrencesOfRegularExpressionPattern:(id)arg1 withTemplate:(id)arg2 options:(unsigned long long)arg3 range:(NSRange)arg4 ;
-(void)replaceCharactersInRange:(NSRange)arg1 withCharacters:(const unsigned short*)arg2 length:(unsigned long long)arg3 ;
-(void)appendString:(id)arg1 ;
-(void)appendFormat:(id)arg1 ;
-(void)replaceCharactersInRange:(NSRange)arg1 withCString:(const char*)arg2 length:(unsigned long long)arg3 ;
-(BOOL)applyTransform:(id)arg1 reverse:(BOOL)arg2 range:(NSRange)arg3 updatedRange:(NSRange*)arg4 ;
-(unsigned long long)replaceOccurrencesOfString:(id)arg1 withString:(id)arg2 options:(unsigned long long)arg3 range:(NSRange)arg4 ;
-(void)_trimWithCharacterSet:(id)arg1 ;
-(Class)classForCoder;
-(void)deleteCharactersInRange:(NSRange)arg1 ;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(void)appendCharacters:(const unsigned short*)arg1 length:(unsigned long long)arg2 ;
-(void)insertString:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setString:(id)arg1 ;
-(void)replaceCharactersInRange:(NSRange)arg1 withString:(id)arg2 ;
@end

