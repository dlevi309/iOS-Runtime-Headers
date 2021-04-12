/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/

#import <SafariSharedUI/WBSWebProcessPlugInPageController.h>

@protocol WBSTouchIconObserver;
@interface WBSTouchIconWebProcessPlugInPageController : WBSWebProcessPlugInPageController {

	id<WBSTouchIconObserver> _touchIconObserver;
	unsigned long long _mainFrameMainResourceId;
	BOOL _didRecieveDidHandleOnloadEventsForFrameCallback;
	BOOL _shouldExtractIconsWhenRecievingDidHandleOnloadEventsForFrameCallback;

}

@property (nonatomic,readonly) id<WBSTouchIconObserver> touchIconObserver; 
-(void)webProcessPlugInBrowserContextController:(id)arg1 didFinishDocumentLoadForFrame:(id)arg2 ;
-(void)webProcessPlugInBrowserContextController:(id)arg1 didHandleOnloadEventsForFrame:(id)arg2 ;
-(id)webProcessPlugInBrowserContextController:(id)arg1 frame:(id)arg2 willSendRequestForResource:(unsigned long long)arg3 request:(id)arg4 redirectResponse:(id)arg5 ;
-(void)webProcessPlugInBrowserContextController:(id)arg1 frame:(id)arg2 didInitiateLoadForResource:(unsigned long long)arg3 request:(id)arg4 pageIsProvisionallyLoading:(BOOL)arg5 ;
-(id)_extractTouchIconURLsIncludingDefaultURLs:(BOOL)arg1 didExtractNonDefaultIconURLs:(BOOL*)arg2 ;
-(id)_extractFaviconURLsIncludingDefaultURLs:(BOOL)arg1 didExtractNonDefaultIconURLs:(BOOL*)arg2 ;
-(id<WBSTouchIconObserver>)touchIconObserver;
@end

