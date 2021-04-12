/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OIXMLNode.h>

@class NSString;

@interface OIXMLAttribute : OIXMLNode {

	NSString* _name;
	NSString* _value;

}
+(id)attributeWithName:(id)arg1 stringValue:(id)arg2 ;
-(id)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)stringValue;
-(void)setStringValue:(id)arg1 ;
-(void)_appendXMLStringToString:(CFStringRef)arg1 level:(int)arg2 ;
-(id)initWithName:(id)arg1 stringValue:(id)arg2 ;
@end

