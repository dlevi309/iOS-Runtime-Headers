/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(BOOL)_preventsAppearanceProxyCustomization;
-(void)dealloc;
-(void)_dismiss;
-(void)_appDidEnterBackground:(id)arg1 ;
-(id)initWithPrompt:(id)arg1 forUserNamesOnly:(BOOL)arg2 appNames:(id)arg3 appID:(id)arg4 matchedSites:(id)arg5 urlString:(id)arg6 minimumNumberOfCredentialsToShowLikelyMatchesSection:(unsigned long long)arg7 shouldShowIcons:(BOOL)arg8 completionHandler:(/*^block*/id)arg9 ;
-(void)passwordPickerTableViewControllerDidCancel:(id)arg1 ;
-(void)passwordPickerTableViewController:(id)arg1 didPickSavedPassword:(id)arg2 ;
@end

