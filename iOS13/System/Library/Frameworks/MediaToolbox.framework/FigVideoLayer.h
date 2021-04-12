/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
*/

#import <MediaToolbox/FigBaseCALayer.h>

@class FigVideoLayerInternal;

@interface FigVideoLayer : FigBaseCALayer {

	FigVideoLayerInternal* _videoLayer;

}
+(id)defaultActionForKey:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)initWithLayer:(id)arg1 ;
-(id)actionForKey:(id)arg1 ;
-(void)layerDidBecomeVisible:(BOOL)arg1 ;
-(void)notificationBarrier;
-(id)layerDisplayName;
-(void)_sendVideoLayerIsBeingServicedNotification;
-(BOOL)isVideoLayerBeingServiced;
@end

