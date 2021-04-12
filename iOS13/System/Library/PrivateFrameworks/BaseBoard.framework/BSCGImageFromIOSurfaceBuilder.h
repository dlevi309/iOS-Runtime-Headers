/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/


#import <BaseBoard/BaseBoard-Structs.h>
@class IOSurface;

@interface BSCGImageFromIOSurfaceBuilder : NSObject {

	IOSurface* _surface;
	CGImageRef _image;
	BOOL _isDirty;
	BOOL _isOpaque;

}

@property (getter=isOpaque,nonatomic,readonly) BOOL opaque;              //@synthesize isOpaque=_isOpaque - In the implementation block
-(void)dealloc;
-(BOOL)isOpaque;
-(id)initWithIOSurface:(id)arg1 ;
-(id)_surface;
-(CGImageRef)_buildImage;
-(id)setOpaque:(BOOL)arg1 ;
-(CGImageRef)buildCGImage;
@end

