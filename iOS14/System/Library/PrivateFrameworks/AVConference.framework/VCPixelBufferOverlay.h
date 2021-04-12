/*
* Generated on Thursday, January 14, 2021 at 2:25:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/AVConference-Structs.h>
#import <AVConference/VCObject.h>

@interface VCPixelBufferOverlay : VCObject {

	CGContextRef _bitmapContext;
	CFDictionaryRef _stringAttributes;
	CTLineRef _ellipsisToken;

}
-(void)dealloc;
-(void)drawOverlayMessage:(id)arg1 onPixelBuffer:(CVBufferRef)arg2 attributes:(CFDictionaryRef)arg3 ;
-(void)setupStringAttributes:(double)arg1 height:(double)arg2 ;
-(id)reverseString:(id)arg1 ;
@end

