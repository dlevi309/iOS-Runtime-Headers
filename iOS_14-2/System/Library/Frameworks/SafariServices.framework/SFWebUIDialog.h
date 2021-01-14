/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithAlert:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)newViewControllerRepresentationWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)shouldIgnoreGlobalModalUIDisplayPolicy;
-(void)didCompleteWithResponse:(id)arg1 ;
@end

