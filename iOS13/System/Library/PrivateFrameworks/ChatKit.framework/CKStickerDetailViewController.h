/*
* Generated on Monday, March 1, 2021 at 2:31:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <libobjc.A.dylib/CKAdaptivePresentedControllerProtocol.h>

@protocol CKStickerDetailViewControllerDelegate;
@class NSArray, UITableView, CKStickerDetailNavigationBar, UIVisualEffectView, UIButton, NSString;

@interface CKStickerDetailViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, CKAdaptivePresentedControllerProtocol> {

	id<CKStickerDetailViewControllerDelegate> _delegate;
	NSArray* _chatItems;
	UITableView* _tableView;
	CKStickerDetailNavigationBar* _navigationBar;
	UIVisualEffectView* _visualEffectView;

}

@property (nonatomic,retain) NSArray * chatItems;                                                    //@synthesize chatItems=_chatItems - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                                                //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) CKStickerDetailNavigationBar * navigationBar;                           //@synthesize navigationBar=_navigationBar - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * visualEffectView;                                  //@synthesize visualEffectView=_visualEffectView - In the implementation block
@property (assign,nonatomic,__weak) id<CKStickerDetailViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIButton * closeButton; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<CKStickerDetailViewControllerDelegate>)delegate;
-(void)setDelegate:(id<CKStickerDetailViewControllerDelegate>)arg1 ;
-(void)loadView;
-(UITableView *)tableView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(BOOL)shouldAutorotate;
-(CKStickerDetailNavigationBar *)navigationBar;
-(void)setNavigationBar:(CKStickerDetailNavigationBar *)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)setTableView:(UITableView *)arg1 ;
-(UIVisualEffectView *)visualEffectView;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)setVisualEffectView:(UIVisualEffectView *)arg1 ;
-(UIButton *)closeButton;
-(NSArray *)chatItems;
-(id)initWithStickerChatItems:(id)arg1 ;
-(BOOL)wantsWindowedPresentation;
-(BOOL)preserveModalPresentationStyle;
-(BOOL)constrainToPresentingVCBounds;
-(void)setChatItems:(NSArray *)arg1 ;
-(void)_viewButtonTapped:(id)arg1 ;
@end

