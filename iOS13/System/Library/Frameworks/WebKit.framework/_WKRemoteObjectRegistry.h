/*
* Generated on Monday, March 1, 2021 at 2:30:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/


#import <WebKit/WebKit-Structs.h>
@interface _WKRemoteObjectRegistry : NSObject {

	unique_ptr<WebKit::RemoteObjectRegistry, std::__1::default_delete<WebKit::RemoteObjectRegistry> >* _remoteObjectRegistry;
	RetainPtr<NSMapTable>* _remoteObjectProxies;
	HashMap<WTF::String, std::__1::pair<WTF::RetainPtr<id>, WTF::RetainPtr<_WKRemoteObjectInterface> >, WTF::StringHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<std::__1::pair<WTF::RetainPtr<id>, WTF::RetainPtr<_WKRemoteObjectInterface> > > >* _exportedObjects;
	HashMap<unsigned long long, PendingReply, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<PendingReply> >* _pendingReplies;

}

@property (nonatomic,readonly) RemoteObjectRegistry* remoteObjectRegistry; 
-(void)_invalidate;
-(void)_invokeMethod:(const RemoteObjectInvocation*)arg1 ;
-(void)_callReplyWithID:(unsigned long long)arg1 blockInvocation:(const UserData*)arg2 ;
-(void)_releaseReplyWithID:(unsigned long long)arg1 ;
-(void)_sendInvocation:(id)arg1 interface:(id)arg2 ;
-(void)registerExportedObject:(id)arg1 interface:(id)arg2 ;
-(void)unregisterExportedObject:(id)arg1 interface:(id)arg2 ;
-(id)remoteObjectProxyWithInterface:(id)arg1 ;
-(id)_initWithWebPage:(WebPage*)arg1 ;
-(id)_initWithWebPageProxy:(WebPageProxyRef)arg1 ;
-(RemoteObjectRegistry*)remoteObjectRegistry;
@end

