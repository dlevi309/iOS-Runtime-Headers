/*
* Generated on Thursday, January 14, 2021 at 2:21:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
*/

#import <WebCore/WebCore-Structs.h>
#import <libobjc.A.dylib/CALayerDelegate.h>

@class NSString;

@interface WebViewVisualIdentificationOverlay : NSObject <CALayerDelegate> {

	RetainPtr<UIView>* _view;
	RetainPtr<CALayer>* _layer;
	RetainPtr<NSString>* _kind;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)installForWebViewIfNeeded:(id)arg1 kind:(id)arg2 deprecated:(BOOL)arg3 ;
+(BOOL)shouldIdentifyWebViews;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithWebView:(id)arg1 kind:(id)arg2 deprecated:(BOOL)arg3 ;
-(void)drawLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
-(void)dealloc;
@end

