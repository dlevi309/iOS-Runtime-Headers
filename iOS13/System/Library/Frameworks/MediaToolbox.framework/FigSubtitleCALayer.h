/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(void)clear;
-(void)layoutSublayersOfLayer:(id)arg1 ;
-(void)drawLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
-(id)initWithLayer:(id)arg1 ;
-(id)actionForKey:(id)arg1 ;
-(void)setViewport:(CGRect)arg1 ;
-(void)setPlayer:(OpaqueFigPlayerRef)arg1 ;
-(void)handleNeedsLayoutNotification;
-(void)_addBoundsAnimation:(id)arg1 forKey:(id)arg2 ;
-(void)_addPositionAnimation:(id)arg1 forKey:(id)arg2 ;
-(void)setCaptionRenderingStrategy:(NSString *)arg1 ;
-(NSString *)captionRenderingStrategy;
-(void)setVideosize:(CGSize)arg1 ;
-(void)setSubtitleGravityNonObscuring:(unsigned char)arg1 ;
-(void)updateNonForcedSubtitleDisplayEnabled:(unsigned char)arg1 ;
-(BOOL)isOverscanSubtitleSupportEnabled;
-(void)setOverscanSubtitleSupportEnabled:(BOOL)arg1 ;
-(void)addAnimations:(id)arg1 forKey:(id)arg2 ;
-(void)removeAnimationsForKey:(id)arg1 ;
@end

