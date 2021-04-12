/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
*/

#import <MediaControls/MediaControls-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/MPRequestResponseControllerDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDelegatePrivate.h>

@protocol MediaControlsLanguageOptionsViewControllerDelegate;
@class NSArray, MPRequestResponseController, UIView, MPAVClippingTableView, MTVisualStylingProvider, NSString;

@interface MediaControlsLanguageOptionsViewController : UIViewController <MPRequestResponseControllerDelegate, UITableViewDataSource, UITableViewDelegate, UITableViewDelegatePrivate> {

	NSArray* _languageOptionGroups;
	id<MediaControlsLanguageOptionsViewControllerDelegate> _delegate;
	MPRequestResponseController* _requestResponseController;
	UIView* _materialView;
	MPAVClippingTableView* _tableView;
	MTVisualStylingProvider* _visualStylingProvider;

}

@property (nonatomic,retain) MPRequestResponseController * requestResponseController;                             //@synthesize requestResponseController=_requestResponseController - In the implementation block
@property (nonatomic,retain) UIView * materialView;                                                               //@synthesize materialView=_materialView - In the implementation block
@property (nonatomic,retain) MPAVClippingTableView * tableView;                                                   //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) MTVisualStylingProvider * visualStylingProvider;                                     //@synthesize visualStylingProvider=_visualStylingProvider - In the implementation block
@property (nonatomic,retain) NSArray * languageOptionGroups;                                                      //@synthesize languageOptionGroups=_languageOptionGroups - In the implementation block
@property (assign,nonatomic,__weak) id<MediaControlsLanguageOptionsViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<MediaControlsLanguageOptionsViewControllerDelegate>)delegate;
-(void)setDelegate:(id<MediaControlsLanguageOptionsViewControllerDelegate>)arg1 ;
-(MPAVClippingTableView *)tableView;
-(CGSize)preferredContentSize;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(BOOL)_canShowWhileLocked;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)setTableView:(MPAVClippingTableView *)arg1 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldDrawBottomSeparatorForSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHaveFullLengthTopSeparatorForSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHaveFullLengthBottomSeparatorForSection:(long long)arg2 ;
-(void)controller:(id)arg1 defersResponseReplacement:(/*^block*/id)arg2 ;
-(BOOL)controller:(id)arg1 shouldRetryFailedRequestWithError:(id)arg2 ;
-(UIView *)materialView;
-(NSArray *)languageOptionGroups;
-(MTVisualStylingProvider *)visualStylingProvider;
-(void)setVisualStylingProvider:(MTVisualStylingProvider *)arg1 ;
-(void)setMaterialView:(UIView *)arg1 ;
-(id)initWithRouteUID:(id)arg1 ;
-(void)setLanguageOptionGroups:(NSArray *)arg1 ;
-(MPRequestResponseController *)requestResponseController;
-(void)setRequestResponseController:(MPRequestResponseController *)arg1 ;
@end

