/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)scannerWithString:(id)arg1 ;
+(id)localizedScannerWithString:(id)arg1 ;
-(NSString *)string;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLocale:(id)arg1 ;
-(id)initWithString:(id)arg1 ;
-(id)locale;
-(BOOL)isAtEnd;
-(unsigned long long)scanLocation;
-(void)setScanLocation:(unsigned long long)arg1 ;
-(id)_remainingString;
-(BOOL)_scanDecimal:(unsigned long long)arg1 into:(long long*)arg2 ;
-(void)setCharactersToBeSkipped:(NSCharacterSet *)arg1 ;
-(BOOL)scanCharactersFromSet:(id)arg1 intoString:(id*)arg2 ;
-(BOOL)scanUpToCharactersFromSet:(id)arg1 intoString:(id*)arg2 ;
-(BOOL)scanString:(id)arg1 intoString:(id*)arg2 ;
-(BOOL)scanInt:(int*)arg1 ;
-(NSCharacterSet *)charactersToBeSkipped;
-(BOOL)caseSensitive;
-(void)setCaseSensitive:(BOOL)arg1 ;
-(BOOL)scanLongLong:(long long*)arg1 ;
-(BOOL)scanUnsignedLongLong:(unsigned long long*)arg1 ;
-(BOOL)scanHexLongLong:(unsigned long long*)arg1 ;
-(id)_invertedSkipSet;
-(BOOL)scanDouble:(double*)arg1 ;
-(BOOL)scanFloat:(float*)arg1 ;
-(BOOL)scanHexDouble:(double*)arg1 ;
-(BOOL)scanHexFloat:(float*)arg1 ;
-(BOOL)scanInteger:(long long*)arg1 ;
-(BOOL)scanUnsignedInteger:(unsigned long long*)arg1 ;
-(BOOL)scanHexInt:(unsigned*)arg1 ;
-(BOOL)scanUpToString:(id)arg1 intoString:(id*)arg2 ;
-(BOOL)scanDecimal:(SCD_Struct_NS48*)arg1 ;
@end

