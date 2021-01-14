/*
* Generated on Thursday, January 14, 2021 at 2:21:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/


#import <WebKit/WebKit-Structs.h>
@class CADisplayLink;

@interface WKOneShotDisplayLinkHandler : NSObject {

	RemoteLayerTreeDrawingAreaProxy* _drawingAreaProxy;
	CADisplayLink* _displayLink;

}
-(void)pause;
-(id)initWithDrawingAreaProxy:(RemoteLayerTreeDrawingAreaProxy*)arg1 ;
-(void)schedule;
-(void)invalidate;
-(void)setPreferredFramesPerSecond:(long long)arg1 ;
-(void)dealloc;
-(void)displayLinkFired:(id)arg1 ;
@end

