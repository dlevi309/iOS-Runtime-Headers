/*
* Generated on Thursday, January 14, 2021 at 2:20:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <WebCore/WAKView.h>

@class UIWebDocumentView, CALayer, UIView;

@interface UIWebPlugInView : WAKView {

	UIWebDocumentView* _webView;
	CALayer* _hostingLayer;
	UIView* _uiView;
	CFRunLoopObserverRef _mainRunLoopDrawObserver;
	BOOL _isFullScreen;
	BOOL _parentedInLayer;
	BOOL _isQuickTimePlugIn;
	BOOL _isMapViewPlugIn;
	BOOL _isiAdPlugIn;

}

@property (assign,getter=isParentedInLayer,nonatomic) BOOL parentedInLayer;              //@synthesize parentedInLayer=_parentedInLayer - In the implementation block
@property (assign,nonatomic) BOOL isQuickTimePlugIn;                                     //@synthesize isQuickTimePlugIn=_isQuickTimePlugIn - In the implementation block
@property (assign,nonatomic) BOOL isMapViewPlugIn;                                       //@synthesize isMapViewPlugIn=_isMapViewPlugIn - In the implementation block
@property (assign,nonatomic) BOOL isiAdPlugIn;                                           //@synthesize isiAdPlugIn=_isiAdPlugIn - In the implementation block
-(void)mouseUp:(id)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(BOOL)isParented;
-(void)mouseDown:(id)arg1 ;
-(void)invalidateGState;
-(void)viewDidMoveToWindow;
-(void)webPlugInStop;
-(void)_viewDidMoveToWindowOnMainThread;
-(void)_reshapeOnMainThread;
-(void)webPlugInInitialize;
-(void)webPlugInStart;
-(void)webPlugInDestroy;
-(id)objectForWebScript;
-(BOOL)isParentedInLayer;
-(void)setParentedInLayer:(BOOL)arg1 ;
-(void)_connectPluginLayers;
-(void)_disconnectPluginLayers;
-(void)_attachPluginLayerOnMainThread;
-(void)_detachPluginLayerOnMainThread;
-(BOOL)isMapViewPlugIn;
-(void)attachPluginLayer;
-(void)detachPluginLayer;
-(BOOL)isQuickTimePlugIn;
-(void)reshape;
-(id)plugInView;
-(void)drawRect:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setFrameSize:(CGSize)arg1 ;
-(BOOL)willProvidePluginLayer;
-(void)setIsMapViewPlugIn:(BOOL)arg1 ;
-(id)initWithWebView:(id)arg1 plugInView:(id)arg2 ;
-(void)setIsQuickTimePlugIn:(BOOL)arg1 ;
-(void)setIsiAdPlugIn:(BOOL)arg1 ;
-(id)pluginLayer;
-(BOOL)isiAdPlugIn;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)setWebView:(id)arg1 ;
-(void)dealloc;
-(void)layout;
-(void)forwardInvocation:(id)arg1 ;
@end

