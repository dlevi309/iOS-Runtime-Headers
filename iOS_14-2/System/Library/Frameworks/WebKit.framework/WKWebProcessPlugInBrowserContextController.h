/*
* Generated on Thursday, January 14, 2021 at 2:21:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (readonly) Object* _apiObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)lookUpBrowsingContextFromHandle:(id)arg1 ;
-(id<WKWebProcessPlugInFormDelegatePrivate>)_formDelegate;
-(void)_setEditingDelegate:(id)arg1 ;
-(void)_setFormDelegate:(id)arg1 ;
-(WKBrowsingContextHandle *)handle;
-(WKDOMRange *)selectedRange;
-(void)_setDefersLoading:(BOOL)arg1 ;
-(_WKRemoteObjectRegistry *)_remoteObjectRegistry;
-(BOOL)_usesNonPersistentWebsiteDataStore;
-(OpaqueWKBundlePageRef)_bundlePageRef;
-(id<WKWebProcessPlugInEditingDelegate>)_editingDelegate;
-(Object*)_apiObject;
-(WKDOMDocument *)mainFrameDocument;
-(WKWebProcessPlugInPageGroup *)pageGroup;
-(void)setLoadDelegate:(id<WKWebProcessPlugInLoadDelegate>)arg1 ;
-(WKWebProcessPlugInFrame *)mainFrame;
-(void)dealloc;
-(id<WKWebProcessPlugInLoadDelegate>)loadDelegate;
-(BOOL)_defersLoading;
@end

