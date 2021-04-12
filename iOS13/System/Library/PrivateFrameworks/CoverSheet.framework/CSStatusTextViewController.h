/*
* Generated on Monday, March 1, 2021 at 2:33:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <CoverSheet/CSCoverSheetViewControllerBase.h>

@protocol CSStatusTextViewControllerDelegate;
@class CSStatusTextView, NSString, MCProfileConnection;

@interface CSStatusTextViewController : CSCoverSheetViewControllerBase {

	CSStatusTextView* _view;
	NSString* _overrideFooterText;
	MCProfileConnection* _profileConnection;
	id<CSStatusTextViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CSStatusTextViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * overrideFooterText;                                         //@synthesize overrideFooterText=_overrideFooterText - In the implementation block
-(id)init;
-(id<CSStatusTextViewControllerDelegate>)delegate;
-(void)setDelegate:(id<CSStatusTextViewControllerDelegate>)arg1 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)_updateText;
-(id)statusTextView;
-(void)_profileStateChangedNotification:(id)arg1 ;
-(void)_updateTextForProfiles;
-(void)_updateTextForLegal;
-(void)_updateTextForDeviceInformation;
-(void)_updateTextForSupervision;
-(void)_updateTextForProvisionalEnrollment;
-(id)_legalString;
-(id)_legalContact;
-(void)setOverrideFooterText:(NSString *)arg1 ;
-(NSString *)overrideFooterText;
@end

