/*
* Generated on Thursday, January 14, 2021 at 2:22:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/

#import <LinkPresentation/LPHTMLComponent.h>
#import <libobjc.A.dylib/DOMEventListener.h>

@class LPVideo, DOMElement, DOMHTMLVideoElement, DOMHTMLIFrameElement, WebScriptObject, LPCSSResolver, DOMDocument, NSString;

@interface LPHTMLVideoComponent : LPHTMLComponent <DOMEventListener> {

	LPVideo* _video;
	DOMElement* _playButton;
	DOMElement* _muteButton;
	DOMElement* _muteButtonContainer;
	DOMElement* _videoPosterFrame;
	DOMElement* _videoOverlay;
	DOMHTMLVideoElement* _videoElement;
	DOMHTMLIFrameElement* _youTubeContainerElement;
	BOOL _isVisible;
	BOOL _wasPlayingWhenHidden;
	WebScriptObject* _isVisibleFunction;
	LPCSSResolver* _CSSResolver;
	DOMDocument* _document;

}

@property (assign,getter=isMuted,nonatomic) BOOL muted; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)styleSet;
+(id)ruleDictionaryForStyle:(id)arg1 ;
+(id)ruleDictionaryForStyleWithDarkInterface:(id)arg1 ;
+(id)additionalGlobalOutOfLineStyleDeclarations;
-(BOOL)isPlaying;
-(id)initWithVideo:(id)arg1 style:(id)arg2 posterFrame:(id)arg3 posterFrameStyle:(id)arg4 themePath:(id)arg5 generator:(id)arg6 ;
-(void)handleEvent:(id)arg1 ;
-(void)pause;
-(void)play;
-(BOOL)shouldAutoPlay;
-(void)buildComponentWithPosterFrame:(id)arg1 posterFrameStyle:(id)arg2 ;
-(id)createVideoElement;
-(id)resolvedVideoElement;
-(id)youTubeParametersForVideoURL:(id)arg1 ;
-(void)togglePlaying;
-(BOOL)isVisible;
-(void)setMuted:(BOOL)arg1 ;
-(void)updateVisibility;
-(BOOL)isMuted;
@end

