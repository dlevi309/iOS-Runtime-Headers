/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)ruleDictionaryForStyle:(id)arg1 ;
+(id)styleSet;
+(id)additionalGlobalOutOfLineStyleDeclarations;
-(void)pause;
-(BOOL)isVisible;
-(void)play;
-(void)handleEvent:(id)arg1 ;
-(BOOL)isPlaying;
-(void)setMuted:(BOOL)arg1 ;
-(BOOL)isMuted;
-(void)updateVisibility;
-(BOOL)shouldAutoPlay;
-(id)initWithVideo:(id)arg1 style:(id)arg2 posterFrame:(id)arg3 posterFrameStyle:(id)arg4 themePath:(id)arg5 generator:(id)arg6 ;
-(void)buildComponentWithPosterFrame:(id)arg1 posterFrameStyle:(id)arg2 ;
-(id)createVideoElement;
-(id)resolvedVideoElement;
-(id)youTubeParametersForVideoURL:(id)arg1 ;
-(void)togglePlaying;
@end

