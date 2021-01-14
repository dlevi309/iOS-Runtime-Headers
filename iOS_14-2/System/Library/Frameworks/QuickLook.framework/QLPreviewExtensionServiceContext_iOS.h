/*
* Generated on Thursday, January 14, 2021 at 2:24:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/

#import <Foundation/NSExtensionContext.h>
#import <libobjc.A.dylib/QLRemotePreviewHost.h>

@class NSString;

@interface QLPreviewExtensionServiceContext_iOS : NSExtensionContext <QLRemotePreviewHost> {

	BOOL _isObservingPreviewController;
	id _contents;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_extensionAuxiliaryVendorProtocol;
+(id)_extensionAuxiliaryHostProtocol;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)previewWillAppear:(BOOL)arg1 ;
-(void)previewDidAppear:(BOOL)arg1 ;
-(void)previewWillDisappear:(BOOL)arg1 ;
-(void)previewDidDisappear:(BOOL)arg1 ;
-(void)setAppearance:(id)arg1 animated:(BOOL)arg2 ;
-(void)previewControllerWantsFullScreen:(BOOL)arg1 ;
-(void)previewControllerDidUpdateTitle:(id)arg1 ;
-(void)previewControllerDidUpdatePreferredContentSize:(id)arg1 ;
-(void)getPrinterProxyWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)protocolHost;
-(void)_startObservingPreviewControllerAttributeChanges;
-(void)_stopObservingPreviewControllerAttributeChanges;
-(id)previewViewController;
-(void)invalidateService;
-(void)setHostViewControllerProxy:(id)arg1 ;
-(void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)dealloc;
@end

