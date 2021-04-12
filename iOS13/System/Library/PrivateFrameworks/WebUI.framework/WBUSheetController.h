/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
*/


@class UIAlertController, WebUIAlert, NSMutableArray;

@interface WBUSheetController : NSObject {

	UIAlertController* _alertController;
	WebUIAlert* _alert;
	NSMutableArray* _alertInvocationQueue;
	id _delegate;

}
+(id)alertControllerForAlert:(id)arg1 automaticallyDismiss:(BOOL)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)setDelegate:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)_alertDidDismissWithAction:(int)arg1 ;
-(void)showSheetForAlert:(id)arg1 ;
-(void)showSheetForAlert:(id)arg1 inView:(id)arg2 ;
-(void)hideSheet;
@end

