/*
* Generated on Thursday, January 14, 2021 at 2:20:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _UISegmentedControlCacheKey : NSObject <NSCopying> {

	CGSize _size;
	double _cornerRadius;
	double _scale;
	unsigned long long _state;
	CGColorRef _primaryColor;

}
-(id)initWithSize:(int)arg1 scale:(double)arg2 primaryColor:(CGColorRef)arg3 background:(BOOL)arg4 ;
-(id)initWithCornerRadius:(double)arg1 capSize:(CGSize)arg2 scale:(double)arg3 state:(unsigned long long)arg4 primaryColor:(CGColorRef)arg5 ;
-(BOOL)isEqualToCacheKey:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

