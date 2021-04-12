/*
* Generated on Thursday, January 14, 2021 at 2:20:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _UIActivityIndicatorViewArtworkCacheKey : NSObject <NSCopying> {

	long long _style;
	double _width;
	long long _spokeCount;
	long long _spokeFrameRatio;
	CGSize _shadowOffset;
	CGColorRef _color;
	CGColorRef _shadowColor;

}
-(id)initWithStyle:(long long)arg1 width:(double)arg2 spokeCount:(long long)arg3 spokeFrameRatio:(long long)arg4 shadowOffset:(CGSize)arg5 color:(CGColorRef)arg6 shadowColor:(CGColorRef)arg7 ;
-(BOOL)isEqualToCacheKey:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

