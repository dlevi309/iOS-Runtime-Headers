/*
* Generated on Thursday, January 14, 2021 at 2:21:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/


#import <WebKit/WebKit-Structs.h>
@interface _WKRemoteObjectRegistry : NSObject {

	unique_ptr<WebKit::RemoteObjectRegistry, std::__1::default_delete<WebKit::RemoteObjectRegistry> >* _remoteObjectRegistry;
	RetainPtr<NSMapTable>* _remoteObjectProxies;
	HashMap<WTF::String, std::__1::pair<WTF::RetainPtr<id>, WTF::RetainPtr<_WKRemoteObjectInterface> >, WTF::DefaultHash<WTF::String>, WTF::HashTraits<WTF::String>, WTF::HashTraits<std::__1::pair<WTF::RetainPtr<id>, WTF::RetainPtr<_WKRemoteObjectInterface> > > >* _exportedObjects;
	HashMap<unsigned long long, PendingReply, WTF::DefaultHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<PendingReply> >* _pendingReplies;

}

@property (nonatomic,readonly) RemoteObjectRegistry* remoteObjectRegistry; 
-(void)_invalidate;
-(void)_releaseReplyWithID:(unsigned long long)arg1 ;
-(void)_sendInvocation:(id)arg1 interface:(id)arg2 ;
-(void)_callReplyWithID:(unsigned long long)arg1 blockInvocation:(const UserData*)arg2 ;
-(void)unregisterExportedObject:(id)arg1 interface:(id)arg2 ;
-(id)_initWithWebPageProxy:(NakedRef<WebKit::WebPageProxy>*)arg1 ;
-(id)remoteObjectProxyWithInterface:(id)arg1 ;
-(RemoteObjectRegistry*)remoteObjectRegistry;
-(void)registerExportedObject:(id)arg1 interface:(id)arg2 ;
-(id)_initWithWebPage:(NakedRef<WebKit::WebPage>*)arg1 ;
-(void)_invokeMethod:(const RemoteObjectInvocation*)arg1 ;
@end

