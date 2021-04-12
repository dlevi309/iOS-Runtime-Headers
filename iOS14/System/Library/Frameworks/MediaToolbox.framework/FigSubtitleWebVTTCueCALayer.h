/*
* Generated on Thursday, January 14, 2021 at 2:21:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setViewport:(CGRect)arg1 ;
-(unsigned char)isDirty;
-(id)init;
-(void)setContent:(CFAttributedStringRef)arg1 ;
-(void)setRenderer:(OpaqueFigSubtitleRendererRef)arg1 ;
-(CFStringRef)getContentID;
-(void)setDefaultFontSize:(double)arg1 ;
-(CGRect)getSuggestedBounds:(unsigned char)arg1 ;
-(void)setCuePosition:(CGPoint)arg1 ;
-(void)drawLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
-(void)dealloc;
-(void)layoutSublayersOfLayer:(id)arg1 ;
@end

