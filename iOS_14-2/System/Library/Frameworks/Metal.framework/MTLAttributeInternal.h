/*
* Generated on Thursday, January 14, 2021 at 2:23:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLAttribute.h>

@class NSString;

@interface MTLAttributeInternal : MTLAttribute {

	unsigned char _flags;
	NSString* _name;
	unsigned long long _attributeIndex;
	unsigned long long _attributeType;

}
-(id)formattedDescription:(unsigned long long)arg1 ;
-(void)setAttributeType:(unsigned long long)arg1 ;
-(unsigned long long)attributeType;
-(BOOL)isActive;
-(BOOL)isPatchControlPointData;
-(id)name;
-(id)description;
-(unsigned long long)attributeIndex;
-(id)initWithName:(id)arg1 attributeIndex:(unsigned long long)arg2 attributeType:(unsigned long long)arg3 flags:(MTLAttributeFlags)arg4 ;
-(BOOL)isPatchData;
-(void)dealloc;
@end

