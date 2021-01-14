/*
* Generated on Thursday, January 14, 2021 at 2:21:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <QuartzCore/CALayer.h>

@interface WKVideoLayerRemote : CALayer {

	WeakPtr<WebKit::MediaPlayerPrivateRemote, WTF::EmptyCounter>* _mediaPlayerPrivateRemote;
	RetainPtr<CAContext>* _context;
	unique_ptr<WebCore::Timer, std::__1::default_delete<WebCore::Timer> >* _resolveBoundsTimer;
	BOOL _shouldRestartWhenTimerFires;
	Seconds _delay;
	CGRect _videoLayerFrame;

}

@property (assign,nonatomic) MediaPlayerPrivateRemote* mediaPlayerPrivateRemote; 
@property (assign,nonatomic) CGRect videoLayerFrame;                                          //@synthesize videoLayerFrame=_videoLayerFrame - In the implementation block
-(void)layoutSublayers;
-(CGRect)videoLayerFrame;
-(void)setVideoLayerFrame:(CGRect)arg1 ;
-(MediaPlayerPrivateRemote*)mediaPlayerPrivateRemote;
-(void)setMediaPlayerPrivateRemote:(MediaPlayerPrivateRemote*)arg1 ;
-(id)init;
-(void)resolveBounds;
@end

