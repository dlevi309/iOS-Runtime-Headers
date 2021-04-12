/*
* Generated on Thursday, January 14, 2021 at 2:20:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIRotatingAlertController.h>

@class UIWebDocumentView;

@interface UIWebRotatingAlertController : _UIRotatingAlertController {

	BOOL _wasDeferringCallbacks;
	UIWebDocumentView* _webBrowserView;

}
-(void)_enableWebView;
-(void)_disableWebView;
-(BOOL)presentSheet;
-(void)doneWithSheet;
-(id)initWithUIWebDocumentView:(id)arg1 ;
-(void)dealloc;
@end

