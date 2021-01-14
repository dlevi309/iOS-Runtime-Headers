/*
* Generated on Thursday, January 14, 2021 at 2:28:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface OIXMLNode : NSObject <NSCopying>

@property (readonly) NSString * name; 
@property (retain) NSString * stringValue; 
@property (readonly) NSString * XMLString; 
@property (readonly) NSString * openingTagString; 
@property (readonly) NSString * contentString; 
@property (readonly) NSString * closingTagString; 
+(void)_escapeCharacters:(const unsigned short*)arg1 amount:(unsigned)arg2 escapeWhiteSpaces:(BOOL)arg3 inString:(id)arg4 appendingToString:(CFStringRef)arg5 ;
+(void)_escapeHTMLAttributeCharacters:(id)arg1 withQuote:(unsigned short)arg2 appendingToString:(CFStringRef)arg3 ;
-(NSString *)contentString;
-(NSString *)stringValue;
-(NSString *)name;
-(void)setStringValue:(NSString *)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)openingTagString;
-(NSString *)XMLString;
-(NSString *)closingTagString;
-(void)_appendXMLStringToString:(CFStringRef)arg1 level:(int)arg2 ;
@end

