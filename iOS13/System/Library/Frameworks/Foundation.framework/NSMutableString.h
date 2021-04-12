/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSString.h>

@interface NSMutableString : NSString
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)stringWithCapacity:(unsigned long long)arg1 ;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(void)replaceCharactersInRange:(NSRange)arg1 withString:(id)arg2 ;
-(unsigned long long)replaceOccurrencesOfString:(id)arg1 withString:(id)arg2 options:(unsigned long long)arg3 range:(NSRange)arg4 ;
-(Class)classForCoder;
-(void)insertString:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)appendString:(id)arg1 ;
-(void)deleteCharactersInRange:(NSRange)arg1 ;
-(void)appendFormat:(id)arg1 ;
-(void)setString:(id)arg1 ;
-(void)appendCharacters:(const unsigned short*)arg1 length:(unsigned long long)arg2 ;
-(void)_cfAppendCString:(const char*)arg1 length:(long long)arg2 ;
-(void)_cfPad:(CFStringRef)arg1 length:(unsigned)arg2 padIndex:(unsigned)arg3 ;
-(void)_cfTrim:(CFStringRef)arg1 ;
-(void)_cfTrimWS;
-(void)_cfLowercase:(const void*)arg1 ;
-(void)_cfUppercase:(const void*)arg1 ;
-(void)_cfCapitalize:(const void*)arg1 ;
-(void)_cfNormalize:(long long)arg1 ;
-(void)replaceCharactersInRange:(NSRange)arg1 withCharacters:(const unsigned short*)arg2 length:(unsigned long long)arg3 ;
-(void)replaceCharactersInRange:(NSRange)arg1 withCString:(const char*)arg2 length:(unsigned long long)arg3 ;
-(void)_trimWithCharacterSet:(id)arg1 ;
-(unsigned long long)_replaceOccurrencesOfRegularExpressionPattern:(id)arg1 withTemplate:(id)arg2 options:(unsigned long long)arg3 range:(NSRange)arg4 ;
-(BOOL)applyTransform:(id)arg1 reverse:(BOOL)arg2 range:(NSRange)arg3 updatedRange:(NSRange*)arg4 ;
@end

