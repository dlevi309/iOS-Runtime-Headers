/*
* Generated on Thursday, January 14, 2021 at 2:21:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
*/


#import <WebCore/WebCore-Structs.h>
@interface WebVideoFullscreenController : NSObject {

	RefPtr<VideoFullscreenControllerContext, WTF::DumbPtrTraits<VideoFullscreenControllerContext> >* _context;
	RefPtr<WebCore::HTMLVideoElement, WTF::DumbPtrTraits<WebCore::HTMLVideoElement> >* _videoElement;

}
-(id)init;
-(void)setVideoElement:(NakedPtr<WebCore::HTMLVideoElement>*)arg1 ;
-(NakedPtr<WebCore::HTMLVideoElement>*)videoElement;
-(void)enterFullscreen:(id)arg1 mode:(unsigned)arg2 ;
-(void)requestHideAndExitFullscreen;
-(void)didFinishFullscreen:(VideoFullscreenControllerContext*)arg1 ;
-(void)exitFullscreen;
@end

