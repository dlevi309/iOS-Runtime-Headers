/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)description;
-(id)name;
-(BOOL)isActive;
-(unsigned long long)attributeType;
-(void)setAttributeType:(unsigned long long)arg1 ;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(unsigned long long)attributeIndex;
-(id)initWithName:(id)arg1 attributeIndex:(unsigned long long)arg2 attributeType:(unsigned long long)arg3 flags:(MTLAttributeFlags)arg4 ;
-(BOOL)isPatchData;
-(BOOL)isPatchControlPointData;
@end

