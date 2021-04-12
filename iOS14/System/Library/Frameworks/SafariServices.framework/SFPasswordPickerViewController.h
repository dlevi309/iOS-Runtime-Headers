/*
* Generated on Thursday, January 14, 2021 at 2:23:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <UIKitCore/UINavigationController.h>
#import <libobjc.A.dylib/_SFPasswordPickerTableViewControllerDelegate.h>

@class _SFPasswordPickerTableViewController, _ASIncomingCallObserver, NSString;

@interface SFPasswordPickerViewController : UINavigationController <_SFPasswordPickerTableViewControllerDelegate> {

	/*^block*/id _completionHandler;
	_SFPasswordPickerTableViewController* _passwordPickerTableViewController;
	_ASIncomingCallObserver* _callObserver;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)passwordPickerTableViewControllerDidCancel:(id)arg1 ;
-(void)passwordPickerTableViewController:(id)arg1 didPickSavedPassword:(id)arg2 ;
-(void)_dismiss;
-(id)initWithPrompt:(id)arg1 forUserNamesOnly:(BOOL)arg2 appNames:(id)arg3 appID:(id)arg4 matchedSites:(id)arg5 urlString:(id)arg6 minimumNumberOfCredentialsToShowLikelyMatchesSection:(unsigned long long)arg7 shouldShowIcons:(BOOL)arg8 shouldGetHintStrings:(BOOL)arg9 completionHandler:(/*^block*/id)arg10 ;
-(void)_appDidEnterBackground:(id)arg1 ;
-(void)dealloc;
@end

