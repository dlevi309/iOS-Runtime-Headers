/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)addChild:(id)arg1 ;
-(id)stringValue;
-(id)initWithType:(unsigned char)arg1 ;
-(void)setStringValue:(id)arg1 ;
-(void)addAttribute:(id)arg1 ;
-(id)contentString;
-(void)insertChild:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)initWithType:(unsigned char)arg1 stringValue:(id)arg2 ;
-(long long)attributeCount;
-(id)openingTagString;
-(id)closingTagString;
-(long long)childrenCount;
-(void)_appendXMLStringToString:(CFStringRef)arg1 level:(int)arg2 ;
-(BOOL)isEmptyHTMLElement;
@end

