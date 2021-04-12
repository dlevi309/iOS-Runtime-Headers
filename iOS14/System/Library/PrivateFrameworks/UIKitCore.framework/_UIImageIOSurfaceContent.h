/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIImageContent.h>

@interface _UIImageIOSurfaceContent : _UIImageContent {

	IOSurfaceRef _surfaceRef;

}
-(CGSize)sizeInPixels;
-(BOOL)isIOSurface;
-(id)initWithIOSurface:(IOSurfaceRef)arg1 scale:(double)arg2 ;
-(BOOL)canProvideCGImage;
-(id)description;
-(unsigned long long)hash;
-(IOSurfaceRef)IOSurface;
-(id)initWithScale:(double)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

