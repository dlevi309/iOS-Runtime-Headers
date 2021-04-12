/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SIMSetupSupport.framework/SIMSetupSupport
*/

#import <OnBoardingKit/OBWelcomeController.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <libobjc.A.dylib/TSSetupFlowItem.h>

@protocol TSSIMSetupFlowDelegate;
@class OBBoldTrayButton, NSDictionary, NSString, UITableView, NSArray, NSIndexPath;

@interface TSTransferItemViewController : OBWelcomeController <UINavigationControllerDelegate, UITableViewDataSource, UITableViewDelegate, TSSetupFlowItem> {

	OBBoldTrayButton* _continueButton;
	BOOL _isOneClickSupported;
	id<TSSIMSetupFlowDelegate> _delegate;
	NSDictionary* _postdata;
	NSString* _URL;
	UITableView* _tableView;
	NSArray* _transferItems;
	NSIndexPath* _chosenPlanIndexPath;

}

@property (retain) UITableView * tableView;                          //@synthesize tableView=_tableView - In the implementation block
@property (retain) NSArray * transferItems;                          //@synthesize transferItems=_transferItems - In the implementation block
@property (retain) NSIndexPath * chosenPlanIndexPath;                //@synthesize chosenPlanIndexPath=_chosenPlanIndexPath - In the implementation block
@property (__weak) id<TSSIMSetupFlowDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) NSDictionary * postdata;                        //@synthesize postdata=_postdata - In the implementation block
@property (readonly) NSString * URL;                                 //@synthesize URL=_URL - In the implementation block
@property (readonly) BOOL isOneClickSupported;                       //@synthesize isOneClickSupported=_isOneClickSupported - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<TSSIMSetupFlowDelegate>)delegate;
-(void)setDelegate:(id<TSSIMSetupFlowDelegate>)arg1 ;
-(NSString *)URL;
-(UITableView *)tableView;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)setTableView:(UITableView *)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2 ;
-(BOOL)canBeShownFromSuspendedState;
-(void)_cancelButtonTapped;
-(void)_startPlanTransfer:(id)arg1 ;
-(id)initWithTransferItems:(id)arg1 ;
-(void)_continueButtonTapped;
-(NSArray *)transferItems;
-(void)setTransferItems:(NSArray *)arg1 ;
-(BOOL)isOneClickSupported;
-(NSDictionary *)postdata;
-(void)_setNavigationItems;
-(void)updateTableData:(id)arg1 ;
-(NSIndexPath *)chosenPlanIndexPath;
-(void)setChosenPlanIndexPath:(NSIndexPath *)arg1 ;
@end

