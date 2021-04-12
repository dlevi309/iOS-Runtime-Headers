/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <UIKitCore/UINavigationController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class UITableViewController, NSMutableArray, CNGeminiChannel, NSIndexPath, NSString;

@interface CNGeminiPickerController : UINavigationController <UITableViewDataSource, UITableViewDelegate> {

	UITableViewController* _tableViewController;
	NSMutableArray* _geminiChannels;
	CNGeminiChannel* _preferredGeminiChannel;
	NSIndexPath* _selectedIndexPath;

}

@property (nonatomic,retain) UITableViewController * tableViewController;                                                 //@synthesize tableViewController=_tableViewController - In the implementation block
@property (nonatomic,retain) NSMutableArray * geminiChannels;                                                             //@synthesize geminiChannels=_geminiChannels - In the implementation block
@property (nonatomic,retain) CNGeminiChannel * preferredGeminiChannel;                                                    //@synthesize preferredGeminiChannel=_preferredGeminiChannel - In the implementation block
@property (nonatomic,retain) NSIndexPath * selectedIndexPath;                                                             //@synthesize selectedIndexPath=_selectedIndexPath - In the implementation block
@property (assign,nonatomic,__weak) id<CNPickerControllerDelegate><UINavigationControllerDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewWillAppear:(BOOL)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)setSelectedIndexPath:(NSIndexPath *)arg1 ;
-(NSIndexPath *)selectedIndexPath;
-(UITableViewController *)tableViewController;
-(id)initWithGeminiResult:(id)arg1 ;
-(void)setGeminiResult:(id)arg1 ;
-(void)setGeminiResult:(id)arg1 reload:(BOOL)arg2 ;
-(void)didPickItem;
-(void)donePicker:(id)arg1 ;
-(void)cancelPicker:(id)arg1 ;
-(id)indexPathForGeminiChannel:(id)arg1 ;
-(id)geminiChannelForIndexPath:(id)arg1 ;
-(void)prepareCell:(id)arg1 atIndexPath:(id)arg2 ;
-(void)setTableViewController:(UITableViewController *)arg1 ;
-(NSMutableArray *)geminiChannels;
-(void)setGeminiChannels:(NSMutableArray *)arg1 ;
-(CNGeminiChannel *)preferredGeminiChannel;
-(void)setPreferredGeminiChannel:(CNGeminiChannel *)arg1 ;
@end

