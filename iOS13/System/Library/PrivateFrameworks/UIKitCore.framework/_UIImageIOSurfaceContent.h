/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIImageContent.h>

@interface _UIImageIOSurfaceContent : _UIImageContent {

	IOSurfaceRef _surfaceRef;

}
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)initWithScale:(double)arg1 ;
-(CGSize)sizeInPixels;
-(BOOL)canProvideCGImage;
-(IOSurfaceRef)IOSurface;
-(BOOL)isIOSurface;
-(id)initWithIOSurface:(IOSurfaceRef)arg1 scale:(double)arg2 ;
@end

