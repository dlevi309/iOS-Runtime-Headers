/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
*/


#import <CoreUI/CoreUI-Structs.h>
@interface CSITextureHelper : NSObject {

	csibitmap* bmp;
	CGColorSpaceRef colorspaceHint;
	unsigned long long sourceRowbytes;
	unsigned width;
	unsigned height;
	unsigned imageBytes;
	int pixelFormat;

}
-(void)dealloc;
-(BOOL)expandIntoBuffer:(id)arg1 error:(id*)arg2 ;
@end

