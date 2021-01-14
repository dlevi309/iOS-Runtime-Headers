/*
* Generated on Thursday, January 14, 2021 at 2:20:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithClassName:(id)arg1 scale:(double)arg2 cornerRadius:(double)arg3 lineWidth:(double)arg4 strokeColor:(CGColorRef)arg5 fillColor:(CGColorRef)arg6 ;
-(BOOL)isEqualToCacheKey:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

