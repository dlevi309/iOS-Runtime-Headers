/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)webProcessPlugInBrowserContextController:(id)arg1 didHandleOnloadEventsForFrame:(id)arg2 ;
-(id)webProcessPlugInBrowserContextController:(id)arg1 frame:(id)arg2 willSendRequestForResource:(unsigned long long)arg3 request:(id)arg4 redirectResponse:(id)arg5 ;
-(void)webProcessPlugInBrowserContextController:(id)arg1 frame:(id)arg2 didInitiateLoadForResource:(unsigned long long)arg3 request:(id)arg4 pageIsProvisionallyLoading:(BOOL)arg5 ;
-(void)webProcessPlugInBrowserContextController:(id)arg1 didFinishDocumentLoadForFrame:(id)arg2 ;
-(id)_extractTouchIconURLsIncludingDefaultURLs:(BOOL)arg1 didExtractNonDefaultIconURLs:(BOOL*)arg2 ;
-(id)_extractFaviconURLsIncludingDefaultURLs:(BOOL)arg1 didExtractNonDefaultIconURLs:(BOOL*)arg2 ;
-(id<WBSTouchIconObserver>)touchIconObserver;
@end

