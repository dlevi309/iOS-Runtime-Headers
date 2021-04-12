/*
* Generated on Thursday, January 14, 2021 at 2:21:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
*/

#import <MediaToolbox/MediaToolbox-Structs.h>
#import <MediaToolbox/FigBaseCALayer.h>
#import <libobjc.A.dylib/CALayerDelegate.h>

@class FigCaptionLayerPrivate, NSString;

@interface FigCaptionLayer : FigBaseCALayer <CALayerDelegate> {

	FigCaptionLayerPrivate* _priv;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setFontName:(const char*)arg1 ;
-(void)layoutSublayers;
-(id)init;
-(void)setCaptionsAvoidanceMargins:(FigGeometryMargins)arg1 ;
-(void)resetCaptions;
-(void)processCaptionCommand:(unsigned)arg1 data:(id)arg2 ;
-(void)updateDisplay:(OpaqueFigCFCaptionRendererRef)arg1 ;
-(void)drawLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
-(void)setVideoRelativeToViewport:(CGRect)arg1 ;
-(void)dealloc;
@end

