/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@class WKWebView;

@interface _SFCalendarEventDetector : NSObject {

	WKWebView* _webView;
	/*^block*/id _checkForCalendarEventsBlock;

}
-(id)initWithWebView:(id)arg1 ;
-(void)cancelCheckForConfirmationPage;
-(void)_checkIfPageContainsCalendarEvent;
-(void)_service:(id)arg1 didFindEventCandidateForURL:(id)arg2 pageTitle:(id)arg3 ;
-(void)_foundCalendarEvents:(id)arg1 ;
-(void)checkIfPageContainsCalendarEvent;
@end

