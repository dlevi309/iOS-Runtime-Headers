/*
* Generated on Monday, March 1, 2021 at 2:30:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _UISegmentedControlCacheKey : NSObject <NSCopying> {

	CGSize _size;
	double _cornerRadius;
	unsigned long long _state;
	CGColorRef _primaryColor;

}
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqualToCacheKey:(id)arg1 ;
-(id)initWithSize:(int)arg1 primaryColor:(CGColorRef)arg2 background:(BOOL)arg3 ;
-(id)initWithCornerRadius:(double)arg1 capSize:(CGSize)arg2 state:(unsigned long long)arg3 primaryColor:(CGColorRef)arg4 ;
@end

