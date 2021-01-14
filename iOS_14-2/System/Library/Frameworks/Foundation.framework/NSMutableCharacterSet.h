/*
* Generated on Thursday, January 14, 2021 at 2:20:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSCharacterSet.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface NSMutableCharacterSet : NSCharacterSet <NSCopying, NSMutableCopying, NSSecureCoding>
+(BOOL)supportsSecureCoding;
+(id)nonBaseCharacterSet;
+(id)decomposableCharacterSet;
+(id)illegalCharacterSet;
+(id)decimalDigitCharacterSet;
+(id)characterSetWithContentsOfFile:(id)arg1 ;
+(id)uppercaseLetterCharacterSet;
+(id)characterSetWithRange:(NSRange)arg1 ;
+(id)punctuationCharacterSet;
+(id)controlCharacterSet;
+(id)whitespaceCharacterSet;
+(id)alphanumericCharacterSet;
+(id)characterSetWithCharactersInString:(id)arg1 ;
+(id)lowercaseLetterCharacterSet;
+(id)newlineCharacterSet;
+(id)capitalizedLetterCharacterSet;
+(id)letterCharacterSet;
+(id)whitespaceAndNewlineCharacterSet;
+(id)symbolCharacterSet;
+(id)characterSetWithBitmapRepresentation:(id)arg1 ;
-(void)formUnionWithCharacterSet:(id)arg1 ;
-(id)init;
-(void)removeCharactersInString:(id)arg1 ;
-(void)addCharactersInRange:(NSRange)arg1 ;
-(BOOL)isMutable;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)formIntersectionWithCharacterSet:(id)arg1 ;
-(void)removeCharactersInRange:(NSRange)arg1 ;
-(void)invert;
-(void)addCharactersInString:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

