/*
* Generated on Thursday, January 14, 2021 at 2:21:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
*/

#import <MediaToolbox/MediaToolbox-Structs.h>
#import <MediaToolbox/FigBaseCALayer.h>

@interface FigSubtitleWebVTTRegionCALayer : FigBaseCALayer {

	OpaqueFigSubtitleWebVTTRegionCALayerInternal* layerInternal;

}
-(void)setViewport:(CGRect)arg1 ;
-(void)layoutSublayers;
-(id)init;
-(void)setContent:(CFDictionaryRef)arg1 ;
-(void)setNeedsDisplay;
-(void)setRenderer:(OpaqueFigSubtitleRendererRef)arg1 ;
-(void)setReLayout;
-(CFStringRef)getContentID;
-(void)handleNeedsLayoutNotification;
-(void)dealloc;
@end

