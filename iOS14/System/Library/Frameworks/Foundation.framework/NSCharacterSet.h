/*
* Generated on Thursday, January 14, 2021 at 2:20:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface NSCharacterSet : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (copy,readonly) NSData * bitmapRepresentation; 
@property (copy,readonly) NSCharacterSet * invertedSet; 
+(void)initialize;
+(BOOL)supportsSecureCoding;
+(id)nonBaseCharacterSet;
+(id)URLHostAllowedCharacterSet;
+(id)decomposableCharacterSet;
+(id)URLPathAllowedCharacterSet;
+(id)illegalCharacterSet;
+(id)decimalDigitCharacterSet;
+(id)characterSetWithContentsOfFile:(id)arg1 ;
+(id)URLPasswordAllowedCharacterSet;
+(id)URLFragmentAllowedCharacterSet;
+(id)uppercaseLetterCharacterSet;
+(id)characterSetWithRange:(NSRange)arg1 ;
+(id)punctuationCharacterSet;
+(id)URLQueryAllowedCharacterSet;
+(id)URLUserAllowedCharacterSet;
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
-(id)_retainedBitmapRepresentation;
-(CFCharacterSetRef)_expandedCFCharacterSet;
-(unsigned long long)_cfTypeID;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isSupersetOfSet:(id)arg1 ;
-(NSCharacterSet *)invertedSet;
-(unsigned long long)count;
-(void)makeImmutable;
-(BOOL)isMutable;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(BOOL)hasMemberInPlane:(unsigned char)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)longCharacterIsMember:(unsigned)arg1 ;
-(BOOL)isEmpty;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)characterIsMember:(unsigned short)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSData *)bitmapRepresentation;
@end

