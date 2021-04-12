/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIRotatingAlertController.h>

@class UIWebDocumentView;

@interface UIWebRotatingAlertController : _UIRotatingAlertController {

	BOOL _wasDeferringCallbacks;
	UIWebDocumentView* _webBrowserView;

}
-(void)dealloc;
-(BOOL)presentSheet;
-(void)doneWithSheet;
-(id)initWithUIWebDocumentView:(id)arg1 ;
-(void)_enableWebView;
-(void)_disableWebView;
@end

