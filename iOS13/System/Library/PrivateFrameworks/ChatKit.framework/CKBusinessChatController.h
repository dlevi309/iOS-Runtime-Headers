/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/CKChatController.h>

@class CKNavbarCanvasViewController;

@interface CKBusinessChatController : CKChatController {

	CKNavbarCanvasViewController* _navbarCanvasViewController;

}

@property (nonatomic,retain) CKNavbarCanvasViewController * navbarCanvasViewController;              //@synthesize navbarCanvasViewController=_navbarCanvasViewController - In the implementation block
-(void)dealloc;
-(void)loadView;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(long long)preferredStatusBarStyle;
-(CKNavbarCanvasViewController *)navbarCanvasViewController;
-(void)setNavbarCanvasViewController:(CKNavbarCanvasViewController *)arg1 ;
-(void)_addressBookChanged:(id)arg1 ;
-(void)setupBizNavBarIfNecessary;
-(void)cleanUpBizNavBarIfNecessary;
@end

