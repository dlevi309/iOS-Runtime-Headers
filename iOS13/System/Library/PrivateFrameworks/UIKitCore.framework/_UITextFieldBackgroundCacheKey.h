/*
* Generated on Monday, March 1, 2021 at 2:30:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface _UITextFieldBackgroundCacheKey : NSObject <NSCopying> {

	NSString* _className;
	double _scale;
	double _cornerRadius;
	double _lineWidth;
	CGColorRef _strokeColor;
	CGColorRef _fillColor;

}
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqualToCacheKey:(id)arg1 ;
-(id)initWithClassName:(id)arg1 scale:(double)arg2 cornerRadius:(double)arg3 lineWidth:(double)arg4 strokeColor:(CGColorRef)arg5 fillColor:(CGColorRef)arg6 ;
@end

