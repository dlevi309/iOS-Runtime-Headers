/*
* Generated on Thursday, January 14, 2021 at 2:20:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSCharacterSet;

@interface NSScanner : NSObject <NSCopying>

@property (copy,readonly) NSString * string; 
@property (assign) unsigned long long scanLocation; 
@property (copy) NSCharacterSet * charactersToBeSkipped; 
@property (assign) BOOL caseSensitive; 
@property (retain) id locale; 
+(id)scannerWithString:(id)arg1 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)localizedScannerWithString:(id)arg1 ;
-(id)initWithString:(id)arg1 ;
-(id)locale;
-(void)setLocale:(id)arg1 ;
-(void)setCaseSensitive:(BOOL)arg1 ;
-(BOOL)caseSensitive;
-(BOOL)scanUpToCharactersFromSet:(id)arg1 intoString:(id*)arg2 ;
-(BOOL)scanCharactersFromSet:(id)arg1 intoString:(id*)arg2 ;
-(BOOL)scanDouble:(double*)arg1 ;
-(BOOL)scanHexInt:(unsigned*)arg1 ;
-(BOOL)scanDecimal:(SCD_Struct_NS16*)arg1 ;
-(BOOL)scanFloat:(float*)arg1 ;
-(BOOL)scanInteger:(long long*)arg1 ;
-(id)_remainingString;
-(BOOL)scanHexFloat:(float*)arg1 ;
-(BOOL)scanString:(id)arg1 intoString:(id*)arg2 ;
-(BOOL)scanLongLong:(long long*)arg1 ;
-(BOOL)_scanDecimal:(unsigned long long)arg1 into:(long long*)arg2 ;
-(BOOL)scanUpToString:(id)arg1 intoString:(id*)arg2 ;
-(BOOL)scanUnsignedInteger:(unsigned long long*)arg1 ;
-(BOOL)scanHexDouble:(double*)arg1 ;
-(BOOL)scanHexLongLong:(unsigned long long*)arg1 ;
-(BOOL)scanUnsignedLongLong:(unsigned long long*)arg1 ;
-(void)setScanLocation:(unsigned long long)arg1 ;
-(id)_invertedSkipSet;
-(NSString *)string;
-(void)setCharactersToBeSkipped:(NSCharacterSet *)arg1 ;
-(BOOL)scanInt:(int*)arg1 ;
-(unsigned long long)scanLocation;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSCharacterSet *)charactersToBeSkipped;
-(BOOL)isAtEnd;
@end

