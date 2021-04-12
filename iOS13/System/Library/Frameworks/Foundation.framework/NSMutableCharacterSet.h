/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSCharacterSet.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface NSMutableCharacterSet : NSCharacterSet <NSCopying, NSMutableCopying, NSSecureCoding>
+(BOOL)supportsSecureCoding;
+(id)whitespaceAndNewlineCharacterSet;
+(id)whitespaceCharacterSet;
+(id)letterCharacterSet;
+(id)decimalDigitCharacterSet;
+(id)alphanumericCharacterSet;
+(id)controlCharacterSet;
+(id)lowercaseLetterCharacterSet;
+(id)uppercaseLetterCharacterSet;
+(id)nonBaseCharacterSet;
+(id)decomposableCharacterSet;
+(id)punctuationCharacterSet;
+(id)capitalizedLetterCharacterSet;
+(id)illegalCharacterSet;
+(id)symbolCharacterSet;
+(id)newlineCharacterSet;
+(id)characterSetWithContentsOfFile:(id)arg1 ;
+(id)characterSetWithRange:(NSRange)arg1 ;
+(id)characterSetWithCharactersInString:(id)arg1 ;
+(id)characterSetWithBitmapRepresentation:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)addCharactersInRange:(NSRange)arg1 ;
-(void)removeCharactersInRange:(NSRange)arg1 ;
-(void)addCharactersInString:(id)arg1 ;
-(void)removeCharactersInString:(id)arg1 ;
-(void)formUnionWithCharacterSet:(id)arg1 ;
-(void)formIntersectionWithCharacterSet:(id)arg1 ;
-(void)invert;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isMutable;
@end

