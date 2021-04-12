/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
*/

#import <WebUI/WebUI-Structs.h>
#import <UIKitCore/UIAlertController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@class WebUIAlert, UITableView, NSString;

@interface WBUAlertController : UIAlertController <UITableViewDelegate, UITableViewDataSource> {

	WebUIAlert* _alert;
	BOOL _automaticallyDismiss;
	UITableView* _tableView;
	/*^block*/id _handler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)initWithAlert:(id)arg1 automaticallyDismiss:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_setUpAlert;
@end

