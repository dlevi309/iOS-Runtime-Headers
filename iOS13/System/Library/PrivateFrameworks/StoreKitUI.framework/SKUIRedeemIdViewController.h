/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/SKUIRedeemIdManagerDelegate.h>

@protocol SKUIRedeemIdDelegate;
@class SKUIRedeemIdManager, SKUIClientContext, UITableView, UIBarButtonItem, NSMutableDictionary, NSString;

@interface SKUIRedeemIdViewController : UIViewController <SKUIRedeemIdManagerDelegate> {

	id<SKUIRedeemIdDelegate> _delegate;
	SKUIRedeemIdManager* _manager;
	SKUIClientContext* _clientContext;
	UITableView* _tableView;
	UIBarButtonItem* _nextButton;
	NSMutableDictionary* _fields;

}

@property (nonatomic,retain) SKUIRedeemIdManager * manager;                         //@synthesize manager=_manager - In the implementation block
@property (nonatomic,retain) SKUIClientContext * clientContext;                     //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                               //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * nextButton;                          //@synthesize nextButton=_nextButton - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * fields;                          //@synthesize fields=_fields - In the implementation block
@property (assign,nonatomic,__weak) id<SKUIRedeemIdDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SKUIRedeemIdDelegate>)delegate;
-(void)setDelegate:(id<SKUIRedeemIdDelegate>)arg1 ;
-(NSMutableDictionary *)fields;
-(SKUIRedeemIdManager *)manager;
-(void)setManager:(SKUIRedeemIdManager *)arg1 ;
-(UITableView *)tableView;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)setTableView:(UITableView *)arg1 ;
-(void)_keyboardWillShow:(id)arg1 ;
-(void)_keyboardDidHide:(id)arg1 ;
-(UIBarButtonItem *)nextButton;
-(void)setNextButton:(UIBarButtonItem *)arg1 ;
-(void)setFields:(NSMutableDictionary *)arg1 ;
-(SKUIClientContext *)clientContext;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(void)_initializeManager;
-(void)_initializeTableView;
-(void)_initializeNavigationItem;
-(void)_subscribeToKeyboardEvents;
-(void)_reloadFooter;
-(void)_updateFieldAtIndexPath:(id)arg1 withText:(id)arg2 ;
-(void)_refreshNavigationItem;
-(id)_fieldForIndexPath:(id)arg1 ;
-(BOOL)_validateForm;
-(id)initWithClientContext:(id)arg1 ;
-(void)_cancelPressed;
-(void)_nextPressed;
-(id)_finalOutputFields;
-(void)_adjustInsetsForKeyboardFrameValue:(id)arg1 ;
-(void)redeemIdManager:(id)arg1 movedToRowAtIndexPath:(id)arg2 ;
-(void)redeemIdManager:(id)arg1 didChangeToText:(id)arg2 forCellAtIndexPath:(id)arg3 ;
-(void)redeemIdManager:(id)arg1 didReturnText:(id)arg2 forCellAtIndexPath:(id)arg3 ;
-(UIEdgeInsets)_edgeInsetsFromInsets:(UIEdgeInsets)arg1 usingNewTopInset:(double)arg2 ;
@end

