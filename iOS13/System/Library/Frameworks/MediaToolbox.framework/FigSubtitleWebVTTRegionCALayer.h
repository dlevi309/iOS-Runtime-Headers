/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
*/

#import <MediaToolbox/MediaToolbox-Structs.h>
#import <MediaToolbox/FigBaseCALayer.h>

@interface FigSubtitleWebVTTRegionCALayer : FigBaseCALayer {

	OpaqueFigSubtitleWebVTTRegionCALayerInternal* layerInternal;

}
-(id)init;
-(void)dealloc;
-(void)setNeedsDisplay;
-(void)setContent:(CFDictionaryRef)arg1 ;
-(void)layoutSublayers;
-(void)setViewport:(CGRect)arg1 ;
-(CFStringRef)getContentID;
-(void)setRenderer:(OpaqueFigSubtitleRendererRef)arg1 ;
-(void)setReLayout;
-(void)handleNeedsLayoutNotification;
@end

