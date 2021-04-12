/*
* Generated on Thursday, January 14, 2021 at 2:28:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OIXMLNode.h>

@class NSString;

@interface OIXMLTextNode : OIXMLNode {

	NSString* _value;

}
+(id)textNodeWithStringValue:(id)arg1 ;
-(id)stringValue;
-(id)name;
-(void)setStringValue:(id)arg1 ;
-(id)initWithStringValue:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)_appendXMLStringToString:(CFStringRef)arg1 level:(int)arg2 ;
@end

