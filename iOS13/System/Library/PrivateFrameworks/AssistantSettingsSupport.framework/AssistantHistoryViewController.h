/*
* Generated on Monday, March 1, 2021 at 2:34:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssistantSettingsSupport.framework/AssistantSettingsSupport
*/

#import <Preferences/PSListController.h>

@protocol AssistantHistoryDelegate;
@class AFSettingsConnection, PSDeleteButtonCell, UIActivityIndicatorView;

@interface AssistantHistoryViewController : PSListController {

	AFSettingsConnection* _settingsConnection;
	PSDeleteButtonCell* _deleteButtonCell;
	UIActivityIndicatorView* _indicatorView;
	id<AssistantHistoryDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<AssistantHistoryDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<AssistantHistoryDelegate>)delegate;
-(void)setDelegate:(id<AssistantHistoryDelegate>)arg1 ;
-(id)specifiers;
-(long long)_getDataSharingOptInStatus;
-(void)_presentPrivacySheet;
-(void)_handleDeleteSiriHistoryButtonPress;
-(void)_deleteSiriHistory;
-(void)_startIndicatorViewSpinning;
-(void)_endIndicatorViewSpinning;
-(void)_presentErrorAlert;
-(void)_animateSpinnerIn;
-(id)_deletionResponseAlertForFailure;
@end

