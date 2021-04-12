/*
* Generated on Thursday, January 14, 2021 at 2:21:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIViewController.h>

@class UIView, CKConversation, CKBusinessMacToolbarView, IMHandle;

@interface CKBusinessMacToolbarViewController : UIViewController {

	BOOL _showingInStandAloneWindow;
	UIView* _detailsPopoverPresentationSourceView;
	CKConversation* _conversation;
	CKBusinessMacToolbarView* _toolbarView;

}

@property (nonatomic,readonly) CKConversation * conversation;                            //@synthesize conversation=_conversation - In the implementation block
@property (nonatomic,readonly) IMHandle * handle; 
@property (nonatomic,readonly) BOOL showingInStandAloneWindow;                           //@synthesize showingInStandAloneWindow=_showingInStandAloneWindow - In the implementation block
@property (nonatomic,retain) CKBusinessMacToolbarView * toolbarView;                     //@synthesize toolbarView=_toolbarView - In the implementation block
@property (nonatomic,retain) UIView * detailsPopoverPresentationSourceView;              //@synthesize detailsPopoverPresentationSourceView=_detailsPopoverPresentationSourceView - In the implementation block
-(void)viewWillLayoutSubviews;
-(IMHandle *)handle;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)showingInStandAloneWindow;
-(CKBusinessMacToolbarView *)toolbarView;
-(void)setToolbarView:(CKBusinessMacToolbarView *)arg1 ;
-(void)_updateFallbackTitle;
-(void)_handleAddressBookPartialChange:(id)arg1 ;
-(void)_updateBannerImageData;
-(void)_updateBrandColors;
-(CKConversation *)conversation;
-(id)initWithConversation:(id)arg1 showingInStandAloneWindow:(BOOL)arg2 ;
-(void)viewDidLoad;
-(void)loadView;
-(CGRect)_detailsPopoverFrame;
-(void)setDetailsPopoverPresentationSourceView:(UIView *)arg1 ;
-(UIView *)detailsPopoverPresentationSourceView;
-(void)dealloc;
@end

