/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
*/

#import <CloudDocsUI/_UIContainerHuggingTableViewController.h>

@class NSArray;

@interface _UIDocumentPickerManagementViewController : _UIContainerHuggingTableViewController {

	NSArray* _allPickers;
	NSArray* _fileTypes;
	unsigned long long _mode;

}

@property (nonatomic,retain) NSArray * allPickers;                 //@synthesize allPickers=_allPickers - In the implementation block
@property (nonatomic,retain) NSArray * fileTypes;                  //@synthesize fileTypes=_fileTypes - In the implementation block
@property (assign,nonatomic) unsigned long long mode;              //@synthesize mode=_mode - In the implementation block
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(unsigned long long)mode;
-(id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(id)initWithStyle:(long long)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)setMode:(unsigned long long)arg1 ;
-(BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2 ;
-(NSArray *)fileTypes;
-(void)_doneButtonPressed;
-(void)setFileTypes:(NSArray *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(void)_updateContentSize;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)switchToggled:(id)arg1 ;
-(id)initWithFileTypes:(id)arg1 mode:(unsigned long long)arg2 ;
-(void)setAllPickers:(NSArray *)arg1 ;
-(NSArray *)allPickers;
@end

