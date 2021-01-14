/*
* Generated on Thursday, January 14, 2021 at 2:21:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
*/

#import <MediaToolbox/FigBaseCALayer.h>

@class FigVideoLayerInternal;

@interface FigVideoLayer : FigBaseCALayer {

	FigVideoLayerInternal* _videoLayer;

}
+(id)defaultActionForKey:(id)arg1 ;
-(id)init;
-(id)initWithLayer:(id)arg1 ;
-(id)actionForKey:(id)arg1 ;
-(void)notificationBarrier;
-(BOOL)isVideoLayerBeingServiced;
-(void)layerDidBecomeVisible:(BOOL)arg1 ;
-(void)_sendVideoLayerIsBeingServicedNotification;
-(id)layerDisplayName;
-(void)dealloc;
@end

