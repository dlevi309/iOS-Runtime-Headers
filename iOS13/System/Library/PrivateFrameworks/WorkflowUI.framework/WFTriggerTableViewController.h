/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <UIKitCore/UITableViewController.h>

@protocol WFTriggerTableViewControllerDelegate;
@class NSArray, NSString;

@interface WFTriggerTableViewController : UITableViewController {

	BOOL _anyOptionSelected;
	id<WFTriggerTableViewControllerDelegate> _delegate;
	NSArray* _sections;
	NSArray* _options;
	NSString* _nameOfAnyOption;
	NSString* _mainSectionTitle;

}

@property (nonatomic,readonly) NSArray * sections;                                                  //@synthesize sections=_sections - In the implementation block
@property (nonatomic,retain) NSArray * options;                                                     //@synthesize options=_options - In the implementation block
@property (assign,nonatomic) BOOL anyOptionSelected;                                                //@synthesize anyOptionSelected=_anyOptionSelected - In the implementation block
@property (nonatomic,copy,readonly) NSString * nameOfAnyOption;                                     //@synthesize nameOfAnyOption=_nameOfAnyOption - In the implementation block
@property (nonatomic,copy,readonly) NSString * mainSectionTitle;                                    //@synthesize mainSectionTitle=_mainSectionTitle - In the implementation block
@property (assign,nonatomic,__weak) id<WFTriggerTableViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(NSArray *)options;
-(id<WFTriggerTableViewControllerDelegate>)delegate;
-(void)setDelegate:(id<WFTriggerTableViewControllerDelegate>)arg1 ;
-(void)setOptions:(NSArray *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(NSArray *)sections;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)done:(id)arg1 ;
-(void)cancel:(id)arg1 ;
-(id)infoForSection:(long long)arg1 ;
-(id)initWithOptions:(id)arg1 anySelected:(BOOL)arg2 nameOfAnyOption:(id)arg3 mainSectionTitle:(id)arg4 ;
-(void)updateDoneButtonEnabledState;
-(BOOL)anyOptionSelected;
-(void)setAnyOptionSelected:(BOOL)arg1 ;
-(NSString *)nameOfAnyOption;
-(NSString *)mainSectionTitle;
@end

