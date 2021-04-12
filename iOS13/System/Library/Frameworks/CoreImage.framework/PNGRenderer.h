/*
* Generated on Monday, March 1, 2021 at 2:30:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CGRenderer.h>

@interface PNGRenderer : CGRenderer {

	CFURLRef fullURL;
	CGColorRef background;
	CGColorSpaceRef colorSpace;

}
-(id)init;
-(void)dealloc;
-(void)setFileURL:(id)arg1 ;
-(BOOL)setCanvasWidth:(unsigned)arg1 height:(unsigned)arg2 ;
-(void)flushRender;
-(CGImageRef)cgimage;
@end

