/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
*/

#import <MediaToolbox/MediaToolbox-Structs.h>
#import <MediaToolbox/FigSubtitleBackdropCALayer.h>
#import <libobjc.A.dylib/CALayerDelegate.h>

@class NSString;

@interface FigSubtitleWebVTTCueCALayer : FigSubtitleBackdropCALayer <CALayerDelegate> {

	OpaqueFigSubtitleWebVTTCueCALayerInternal* layerInternal;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(unsigned char)isDirty;
-(void)setDefaultFontSize:(double)arg1 ;
-(void)layoutSublayersOfLayer:(id)arg1 ;
-(void)drawLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
-(void)setContent:(CFAttributedStringRef)arg1 ;
-(void)setViewport:(CGRect)arg1 ;
-(CGRect)getSuggestedBounds:(unsigned char)arg1 ;
-(void)setCuePosition:(CGPoint)arg1 ;
-(CFStringRef)getContentID;
-(void)setRenderer:(OpaqueFigSubtitleRendererRef)arg1 ;
@end

