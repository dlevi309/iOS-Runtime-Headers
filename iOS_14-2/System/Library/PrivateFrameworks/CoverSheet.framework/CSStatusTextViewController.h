/*
* Generated on Thursday, January 14, 2021 at 2:26:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <CoverSheet/CSCoverSheetViewControllerBase.h>
#import <libobjc.A.dylib/SBFRemoteBasebandLoggingObserver.h>

@protocol CSStatusTextViewControllerDelegate;
@class CSStatusTextView, NSString, MCProfileConnection, SBFRemoteBasebandLoggingManager;

@interface CSStatusTextViewController : CSCoverSheetViewControllerBase <SBFRemoteBasebandLoggingObserver> {

	CSStatusTextView* _view;
	NSString* _overrideFooterText;
	MCProfileConnection* _profileConnection;
	SBFRemoteBasebandLoggingManager* _basebandLoggingManager;
	id<CSStatusTextViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CSStatusTextViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * overrideFooterText;                                         //@synthesize overrideFooterText=_overrideFooterText - In the implementation block
-(id)statusTextView;
-(void)_updateText;
-(id)init;
-(void)_updateTextForDeviceInformation;
-(void)_updateTextForProvisionalEnrollment;
-(id<CSStatusTextViewControllerDelegate>)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)didMoveToParentViewController:(id)arg1 ;
-(NSString *)overrideFooterText;
-(void)setDelegate:(id<CSStatusTextViewControllerDelegate>)arg1 ;
-(void)setOverrideFooterText:(NSString *)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)remoteBasebandLogCollectionStateDidChange:(BOOL)arg1 ;
-(void)loadView;
-(id)_legalString;
-(void)_profileStateChangedNotification:(id)arg1 ;
-(BOOL)_isSecurityResearchDevice;
-(void)_updateTextForLegal;
-(id)_legalContact;
-(void)dealloc;
-(void)_updateTextForSupervision;
-(void)_updateTextForProfiles;
@end

