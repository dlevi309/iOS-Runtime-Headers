/*
* Generated on Monday, March 1, 2021 at 2:30:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
*/


#import <WebCore/WebCore-Structs.h>
@interface WebVideoFullscreenController : NSObject {

	RefPtr<VideoFullscreenControllerContext, WTF::DumbPtrTraits<VideoFullscreenControllerContext> >* _context;
	RefPtr<WebCore::HTMLVideoElement, WTF::DumbPtrTraits<WebCore::HTMLVideoElement> >* _videoElement;

}
-(id)init;
-(void)setVideoElement:(HTMLVideoElement*)arg1 ;
-(HTMLVideoElement*)videoElement;
-(void)enterFullscreen:(id)arg1 mode:(unsigned)arg2 ;
-(void)exitFullscreen;
-(void)requestHideAndExitFullscreen;
-(void)didFinishFullscreen:(VideoFullscreenControllerContext*)arg1 ;
@end

