/*
* Generated on Monday, March 1, 2021 at 2:30:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>

@class WKBrowsingContextHandle, _WKRemoteObjectRegistry, WKDOMDocument, WKDOMRange, WKWebProcessPlugInFrame, WKWebProcessPlugInPageGroup, NSString;

@interface WKWebProcessPlugInBrowserContextController : NSObject <WKObject> {

	ObjectStorage<WebKit::WebPage> _page;
	WeakObjCPtr<id<WKWebProcessPlugInLoadDelegate> > _loadDelegate;
	WeakObjCPtr<id<WKWebProcessPlugInFormDelegatePrivate> > _formDelegate;
	WeakObjCPtr<id<WKWebProcessPlugInEditingDelegate> > _editingDelegate;
	RetainPtr<_WKRemoteObjectRegistry>* _remoteObjectRegistry;

}

@property (nonatomic,readonly) OpaqueWKBundlePageRef _bundlePageRef; 
@property (nonatomic,readonly) WKBrowsingContextHandle * handle; 
@property (nonatomic,readonly) _WKRemoteObjectRegistry * _remoteObjectRegistry; 
@property (setter=_setFormDelegate:,__weak) id<WKWebProcessPlugInFormDelegatePrivate> _formDelegate; 
@property (setter=_setEditingDelegate:,__weak) id<WKWebProcessPlugInEditingDelegate> _editingDelegate; 
@property (assign,setter=_setDefersLoading:,nonatomic) BOOL _defersLoading; 
@property (nonatomic,readonly) BOOL _usesNonPersistentWebsiteDataStore; 
@property (readonly) WKDOMDocument * mainFrameDocument; 
@property (readonly) WKDOMRange * selectedRange; 
@property (readonly) WKWebProcessPlugInFrame * mainFrame; 
@property (readonly) WKWebProcessPlugInPageGroup * pageGroup; 
@property (__weak) id<WKWebProcessPlugInLoadDelegate> loadDelegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) Object* _apiObject; 
+(id)lookUpBrowsingContextFromHandle:(id)arg1 ;
-(void)dealloc;
-(WKBrowsingContextHandle *)handle;
-(WKDOMRange *)selectedRange;
-(WKWebProcessPlugInFrame *)mainFrame;
-(id<WKWebProcessPlugInEditingDelegate>)_editingDelegate;
-(void)_setFormDelegate:(id)arg1 ;
-(id<WKWebProcessPlugInFormDelegatePrivate>)_formDelegate;
-(Object*)_apiObject;
-(_WKRemoteObjectRegistry *)_remoteObjectRegistry;
-(id<WKWebProcessPlugInLoadDelegate>)loadDelegate;
-(void)setLoadDelegate:(id<WKWebProcessPlugInLoadDelegate>)arg1 ;
-(WKDOMDocument *)mainFrameDocument;
-(WKWebProcessPlugInPageGroup *)pageGroup;
-(OpaqueWKBundlePageRef)_bundlePageRef;
-(void)_setEditingDelegate:(id)arg1 ;
-(BOOL)_defersLoading;
-(void)_setDefersLoading:(BOOL)arg1 ;
-(BOOL)_usesNonPersistentWebsiteDataStore;
@end

