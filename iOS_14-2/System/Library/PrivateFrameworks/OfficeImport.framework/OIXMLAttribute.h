/*
* Generated on Thursday, January 14, 2021 at 2:28:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)stringValue;
-(id)name;
-(void)setStringValue:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)_appendXMLStringToString:(CFStringRef)arg1 level:(int)arg2 ;
-(id)initWithName:(id)arg1 stringValue:(id)arg2 ;
@end

