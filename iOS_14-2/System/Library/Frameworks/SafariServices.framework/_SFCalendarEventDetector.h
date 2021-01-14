/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@class WKWebView;

@interface _SFCalendarEventDetector : NSObject {

	WKWebView* _webView;
	/*^block*/id _checkForCalendarEventsBlock;

}
-(void)_service:(id)arg1 didFindEventCandidateForURL:(id)arg2 pageTitle:(id)arg3 ;
-(void)cancelCheckForConfirmationPage;
-(id)initWithWebView:(id)arg1 ;
-(void)_containsCalendarEventForPageWithSchemaOrgMarkup:(BOOL)arg1 ;
-(void)_foundCalendarEvents:(id)arg1 ;
-(void)containsCalendarEventForPageWithSchemaOrgMarkup:(BOOL)arg1 ;
@end

