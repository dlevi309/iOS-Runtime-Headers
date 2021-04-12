/*
* Generated on Monday, March 1, 2021 at 2:30:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/


#import <WebKit/WebKit-Structs.h>
@class CADisplayLink;

@interface WKOneShotDisplayLinkHandler : NSObject {

	RemoteLayerTreeDrawingAreaProxy* _drawingAreaProxy;
	CADisplayLink* _displayLink;

}
-(void)dealloc;
-(void)invalidate;
-(void)pause;
-(void)schedule;
-(void)setPreferredFramesPerSecond:(long long)arg1 ;
-(void)displayLinkFired:(id)arg1 ;
-(id)initWithDrawingAreaProxy:(RemoteLayerTreeDrawingAreaProxy*)arg1 ;
@end

