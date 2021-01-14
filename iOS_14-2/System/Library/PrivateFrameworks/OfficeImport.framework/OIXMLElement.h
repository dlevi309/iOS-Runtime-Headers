/*
* Generated on Thursday, January 14, 2021 at 2:28:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OIXMLNode.h>

@class NSString;

@interface OIXMLElement : OIXMLNode {

	NSString* _name;
	id _attributes;
	id _children;
	BOOL _hasMultipleAttributes;
	BOOL _hasMultipleChildren;
	unsigned char _type;

}
+(id)elementWithType:(unsigned char)arg1 ;
+(id)elementWithType:(unsigned char)arg1 stringValue:(id)arg2 ;
-(id)initWithType:(unsigned char)arg1 ;
-(void)addChild:(id)arg1 ;
-(id)contentString;
-(id)stringValue;
-(id)initWithType:(unsigned char)arg1 stringValue:(id)arg2 ;
-(id)name;
-(void)setStringValue:(id)arg1 ;
-(void)addAttribute:(id)arg1 ;
-(void)insertChild:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)attributeCount;
-(id)openingTagString;
-(id)closingTagString;
-(long long)childrenCount;
-(void)_appendXMLStringToString:(CFStringRef)arg1 level:(int)arg2 ;
-(BOOL)isEmptyHTMLElement;
@end

