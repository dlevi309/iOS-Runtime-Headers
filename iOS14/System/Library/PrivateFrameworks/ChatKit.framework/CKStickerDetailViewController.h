/*
* Generated on Thursday, January 14, 2021 at 2:21:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <libobjc.A.dylib/CKAdaptivePresentedControllerProtocol.h>

@protocol CKStickerDetailViewControllerDelegate;
@class NSArray, UITableView, UIVisualEffectView, NSString;

@interface CKStickerDetailViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, CKAdaptivePresentedControllerProtocol> {

	BOOL _wantsWindowedPresentation;
	BOOL _preserveModalPresentationStyle;
	id<CKStickerDetailViewControllerDelegate> _delegate;
	NSArray* _chatItems;
	UITableView* _tableView;
	UIVisualEffectView* _visualEffectView;

}

@property (nonatomic,retain) NSArray * chatItems;                                                    //@synthesize chatItems=_chatItems - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                                                //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * visualEffectView;                                  //@synthesize visualEffectView=_visualEffectView - In the implementation block
@property (assign,nonatomic,__weak) id<CKStickerDetailViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL wantsWindowedPresentation;                                         //@synthesize wantsWindowedPresentation=_wantsWindowedPresentation - In the implementation block
@property (assign,nonatomic) BOOL preserveModalPresentationStyle;                                    //@synthesize preserveModalPresentationStyle=_preserveModalPresentationStyle - In the implementation block
@property (assign,nonatomic) BOOL shouldHidePresentingWindow; 
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(id<CKStickerDetailViewControllerDelegate>)delegate;
-(UITableView *)tableView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)_viewButtonTapped:(id)arg1 ;
-(void)stickerDetailViewControllerCloseButtonPressed:(id)arg1 ;
-(void)deleteStickerAtIndexPath:(id)arg1 ;
-(id)_deleteSwipeActionForIndexPath:(id)arg1 ;
-(UIVisualEffectView *)visualEffectView;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(NSArray *)chatItems;
-(void)setDelegate:(id<CKStickerDetailViewControllerDelegate>)arg1 ;
-(BOOL)shouldAutorotate;
-(id)initWithStickerChatItems:(id)arg1 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)setTableView:(UITableView *)arg1 ;
-(BOOL)wantsWindowedPresentation;
-(void)setWantsWindowedPresentation:(BOOL)arg1 ;
-(BOOL)preserveModalPresentationStyle;
-(void)setPreserveModalPresentationStyle:(BOOL)arg1 ;
-(BOOL)constrainToPresentingVCBounds;
-(void)setChatItems:(NSArray *)arg1 ;
-(void)loadView;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)setVisualEffectView:(UIVisualEffectView *)arg1 ;
-(void)viewDidLayoutSubviews;
@end

