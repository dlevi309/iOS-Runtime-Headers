/*
* Generated on Thursday, January 14, 2021 at 2:20:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)setOpaque:(BOOL)arg1 ;
-(BOOL)isOpaque;
-(CGImageRef)buildCGImage;
-(void)dealloc;
@end

