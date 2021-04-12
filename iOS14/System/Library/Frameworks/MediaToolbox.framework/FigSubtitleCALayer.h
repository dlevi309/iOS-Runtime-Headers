/*
* Generated on Thursday, January 14, 2021 at 2:21:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
*/

#import <MediaToolbox/MediaToolbox-Structs.h>
#import <MediaToolbox/FigSubtitleBackdropCALayer.h>
#import <libobjc.A.dylib/CALayerDelegate.h>

@class NSString;

@interface FigSubtitleCALayer : FigSubtitleBackdropCALayer <CALayerDelegate> {

	OpaqueFigSubtitleCALayerInternal* layerInternal;

}

@property (assign,getter=isOverscanSubtitleSupportEnabled,nonatomic) BOOL overscanSubtitleSupportEnabled; 
@property (nonatomic,copy) NSString * captionRenderingStrategy; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultActionForKey:(id)arg1 ;
-(void)clear;
-(void)setViewport:(CGRect)arg1 ;
-(void)setPlayer:(OpaqueFigPlayerRef)arg1 ;
-(id)init;
-(void)updateNonForcedSubtitleDisplayEnabled:(unsigned char)arg1 ;
-(id)initWithLayer:(id)arg1 ;
-(id)actionForKey:(id)arg1 ;
-(void)setCaptionsAvoidanceMargins:(FigGeometryMargins)arg1 ;
-(void)_addBoundsAnimation:(id)arg1 forKey:(id)arg2 ;
-(void)_addPositionAnimation:(id)arg1 forKey:(id)arg2 ;
-(void)addAnimations:(id)arg1 forKey:(id)arg2 ;
-(NSString *)captionRenderingStrategy;
-(void)setVideosize:(CGSize)arg1 ;
-(void)setSubtitleGravityNonObscuring:(unsigned char)arg1 ;
-(void)drawLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
-(void)removeAnimationsForKey:(id)arg1 ;
-(void)setCaptionRenderingStrategy:(NSString *)arg1 ;
-(void)setOverscanSubtitleSupportEnabled:(BOOL)arg1 ;
-(void)handleNeedsLayoutNotification;
-(void)setVideoRelativeToViewport:(CGRect)arg1 ;
-(BOOL)isOverscanSubtitleSupportEnabled;
-(void)dealloc;
-(void)layoutSublayersOfLayer:(id)arg1 ;
@end

