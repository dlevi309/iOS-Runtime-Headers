/*
* Generated on Thursday, January 14, 2021 at 2:23:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/MTLFunctionConstant.h>

@class NSString;

@interface MTLFunctionConstantInternal : MTLFunctionConstant {

	NSString* _name;
	unsigned long long _type;
	unsigned long long _index;
	BOOL _required;

}
-(id)formattedDescription:(unsigned long long)arg1 ;
-(unsigned long long)index;
-(id)name;
-(id)description;
-(unsigned long long)type;
-(id)initWithName:(id)arg1 type:(unsigned long long)arg2 index:(unsigned long long)arg3 required:(BOOL)arg4 ;
-(BOOL)required;
-(void)dealloc;
@end

