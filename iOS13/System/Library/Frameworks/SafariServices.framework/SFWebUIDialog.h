/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/_SFDialog.h>

@class WebUIAlert;

@interface SFWebUIDialog : _SFDialog {

	int _finalAction;
	/*^block*/id _completionHandler;
	BOOL _shouldIgnoreGlobalModalUIDisplayPolicy;
	WebUIAlert* _alert;

}

@property (nonatomic,readonly) WebUIAlert * alert;              //@synthesize alert=_alert - In the implementation block
-(long long)presentationStyle;
-(WebUIAlert *)alert;
-(void)didCompleteWithResponse:(id)arg1 ;
-(id)initWithAlert:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)newViewControllerRepresentationWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)shouldIgnoreGlobalModalUIDisplayPolicy;
@end

