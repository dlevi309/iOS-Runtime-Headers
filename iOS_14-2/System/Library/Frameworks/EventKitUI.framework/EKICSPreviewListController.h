/*
* Generated on Thursday, January 14, 2021 at 2:23:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <UIKitCore/UITableViewController.h>

@protocol EKICSPreviewListDelegate;
@class EKICSPreviewModel, NSMutableArray;

@interface EKICSPreviewListController : UITableViewController {

	EKICSPreviewModel* _model;
	NSMutableArray* _sections;
	BOOL _allowsImport;
	BOOL _allowsSubitems;
	BOOL _showWeekNumbers;
	id<EKICSPreviewListDelegate> _listDelegate;

}

@property (assign,nonatomic) BOOL showWeekNumbers;                                          //@synthesize showWeekNumbers=_showWeekNumbers - In the implementation block
@property (assign,nonatomic) BOOL allowsImport;                                             //@synthesize allowsImport=_allowsImport - In the implementation block
@property (assign,nonatomic) BOOL allowsSubitems;                                           //@synthesize allowsSubitems=_allowsSubitems - In the implementation block
@property (assign,nonatomic,__weak) id<EKICSPreviewListDelegate> listDelegate;              //@synthesize listDelegate=_listDelegate - In the implementation block
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(BOOL)allowsSubitems;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)buildSections;
-(void)updateImportButton;
-(void)importAllPressed:(id)arg1 ;
-(BOOL)allowsImport;
-(void)setAllowsSubitems:(BOOL)arg1 ;
-(void)setShowWeekNumbers:(BOOL)arg1 ;
-(BOOL)showWeekNumbers;
-(void)setAllowsImport:(BOOL)arg1 ;
-(id<EKICSPreviewListDelegate>)listDelegate;
-(void)setListDelegate:(id<EKICSPreviewListDelegate>)arg1 ;
-(void)viewDidLoad;
-(void)_showWeekNumbersPreferenceChanged:(id)arg1 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)initWithModel:(id)arg1 ;
-(void)dealloc;
@end

