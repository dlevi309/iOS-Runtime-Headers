/*
* Generated on Monday, March 1, 2021 at 2:30:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _UISearchBarBackgroundCacheKey : NSObject <NSCopying> {

	long long _barPosition;
	BOOL _usesContiguousBarBackground;
	double _scale;
	double _alpha;
	double _height;
	double _statusBarHeight;
	CGColorRef _backgroundColor;
	CGColorRef _strokeColor;

}
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqualToCacheKey:(id)arg1 ;
-(id)initWithBarPosition:(long long)arg1 usesContiguousBarBackground:(BOOL)arg2 scale:(double)arg3 alpha:(double)arg4 height:(double)arg5 statusBarHeight:(double)arg6 backgroundColor:(CGColorRef)arg7 strokeColor:(CGColorRef)arg8 ;
@end

