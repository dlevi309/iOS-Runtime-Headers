/*
* Generated on Thursday, January 14, 2021 at 2:23:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/


#import <MessageUI/MessageUI-Structs.h>
@class NSData;

@interface MFHardwareJPEGScaler : NSObject {

	IOSurfaceRef _ioSurfaceRef;
	NSData* _imageData;
	CFDictionaryRef _imageProperties;
	BOOL _canHardwareScaleImage;

}
-(id)initWithImageData:(id)arg1 imageSource:(CGImageSourceRef)arg2 ;
-(BOOL)scaleImageToFitLargestDimension:(id)arg1 dataConsumer:(id)arg2 ;
-(BOOL)_isJPEGImage:(CGImageSourceRef)arg1 ;
-(BOOL)_decodeImageToIOSurface;
-(void)dealloc;
@end

