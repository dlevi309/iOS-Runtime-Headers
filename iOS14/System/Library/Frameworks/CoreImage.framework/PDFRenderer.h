/*
* Generated on Thursday, January 14, 2021 at 2:21:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CGRenderer.h>

@interface PDFRenderer : CGRenderer {

	CFDictionaryRef info;
	CFDataRef data;
	CGDataConsumerRef dataConsumer;

}
-(void)setFileURL:(id)arg1 ;
-(id)init;
-(const CFDataRef)pdfdata;
-(BOOL)setCanvasWidth:(unsigned)arg1 height:(unsigned)arg2 ;
-(void)setFileTitle:(id)arg1 ;
-(void)flushRender;
-(void)dealloc;
@end

