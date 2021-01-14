/*
* Generated on Thursday, January 14, 2021 at 2:21:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/CKChatController.h>

@class CKNavbarCanvasViewController;

@interface CKBusinessChatController : CKChatController {

	CKNavbarCanvasViewController* _navbarCanvasViewController;

}

@property (nonatomic,retain) CKNavbarCanvasViewController * navbarCanvasViewController;              //@synthesize navbarCanvasViewController=_navbarCanvasViewController - In the implementation block
-(void)viewWillDisappear:(BOOL)arg1 ;
-(CKNavbarCanvasViewController *)navbarCanvasViewController;
-(void)_updateNavigationUI;
-(void)setupBizNavBarIfNecessary;
-(void)cleanUpBizNavBarIfNecessary;
-(void)setNavbarCanvasViewController:(CKNavbarCanvasViewController *)arg1 ;
-(BOOL)shouldListParticipantsInTitle;
-(long long)preferredStatusBarStyle;
-(void)_handleAddressBookChangedNotification:(id)arg1 ;
-(void)loadView;
-(void)viewDidLayoutSubviews;
@end

