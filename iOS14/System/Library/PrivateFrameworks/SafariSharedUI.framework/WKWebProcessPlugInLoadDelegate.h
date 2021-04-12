/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/


@protocol WKWebProcessPlugInLoadDelegate <NSObject>
@optional
-(void)webProcessPlugInBrowserContextController:(id)arg1 didReceiveServerRedirectForProvisionalLoadForFrame:(id)arg2;
-(void)webProcessPlugInBrowserContextController:(id)arg1 didLayoutForFrame:(id)arg2;
-(void)webProcessPlugInBrowserContextController:(id)arg1 didFailProvisionalLoadWithErrorForFrame:(id)arg2 error:(id)arg3;
-(void)webProcessPlugInBrowserContextController:(id)arg1 didRemoveFrameFromHierarchy:(id)arg2;
-(void)webProcessPlugInBrowserContextController:(id)arg1 didFailLoadWithErrorForFrame:(id)arg2 error:(id)arg3;
-(void)webProcessPlugInBrowserContextController:(id)arg1 didClearWindowObjectForFrame:(id)arg2 inScriptWorld:(id)arg3;
-(void)webProcessPlugInBrowserContextController:(id)arg1 didHandleOnloadEventsForFrame:(id)arg2;
-(void)webProcessPlugInBrowserContextController:(id)arg1 didFirstVisuallyNonEmptyLayoutForFrame:(id)arg2;
-(unsigned long long)webProcessPlugInBrowserContextControllerRenderingProgressEvents:(id)arg1;
-(id)webProcessPlugInBrowserContextController:(id)arg1 frame:(id)arg2 willSendRequestForResource:(unsigned long long)arg3 request:(id)arg4 redirectResponse:(id)arg5;
-(id)webProcessPlugInBrowserContextController:(id)arg1 frame:(id)arg2 willSendRequest:(id)arg3 redirectResponse:(id)arg4;
-(void)webProcessPlugInBrowserContextController:(id)arg1 frame:(id)arg2 didFailLoadForResource:(unsigned long long)arg3 error:(id)arg4;
-(void)webProcessPlugInBrowserContextController:(id)arg1 frame:(id)arg2 didInitiateLoadForResource:(unsigned long long)arg3 request:(id)arg4 pageIsProvisionallyLoading:(BOOL)arg5;
-(void)webProcessPlugInBrowserContextController:(id)arg1 frame:(id)arg2 didInitiateLoadForResource:(unsigned long long)arg3 request:(id)arg4;
-(void)webProcessPlugInBrowserContextController:(id)arg1 frame:(id)arg2 didFinishLoadForResource:(unsigned long long)arg3;
-(void)webProcessPlugInBrowserContextController:(id)arg1 didCommitLoadForFrame:(id)arg2;
-(void)webProcessPlugInBrowserContextController:(id)arg1 didStartProvisionalLoadForFrame:(id)arg2;
-(void)webProcessPlugInBrowserContextController:(id)arg1 didSameDocumentNavigation:(long long)arg2 forFrame:(id)arg3;
-(void)webProcessPlugInBrowserContextController:(id)arg1 didFinishDocumentLoadForFrame:(id)arg2;
-(void)webProcessPlugInBrowserContextController:(id)arg1 globalObjectIsAvailableForFrame:(id)arg2 inScriptWorld:(id)arg3;
-(void)webProcessPlugInBrowserContextController:(id)arg1 renderingProgressDidChange:(unsigned long long)arg2;
-(void)webProcessPlugInBrowserContextController:(id)arg1 didFinishLoadForFrame:(id)arg2;

@end

