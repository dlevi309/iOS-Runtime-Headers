/*
* Generated on Monday, March 1, 2021 at 2:34:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
*/

#import <CloudDocsUI/CloudDocsUI-Structs.h>
#import <CloudDocsUI/_UIContainerHuggingTableViewController.h>

@protocol _UIDocumentPickerOverviewDelegate;
@class NSArray;

@interface _UIDocumentPickerOverviewViewController : _UIContainerHuggingTableViewController {

	BOOL _manage;
	id<_UIDocumentPickerOverviewDelegate> _delegate;
	NSArray* _allPickers;
	NSArray* _auxiliaryOptions;
	NSArray* _fileTypes;
	unsigned long long _mode;

}

@property (nonatomic,retain) NSArray * allPickers;                                               //@synthesize allPickers=_allPickers - In the implementation block
@property (nonatomic,retain) NSArray * auxiliaryOptions;                                         //@synthesize auxiliaryOptions=_auxiliaryOptions - In the implementation block
@property (nonatomic,retain) NSArray * fileTypes;                                                //@synthesize fileTypes=_fileTypes - In the implementation block
@property (assign,nonatomic) unsigned long long mode;                                            //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) BOOL manage;                                                        //@synthesize manage=_manage - In the implementation block
@property (assign,nonatomic,__weak) id<_UIDocumentPickerOverviewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<_UIDocumentPickerOverviewDelegate>)delegate;
-(void)setDelegate:(id<_UIDocumentPickerOverviewDelegate>)arg1 ;
-(void)setMode:(unsigned long long)arg1 ;
-(unsigned long long)mode;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setPreferredContentSize:(CGSize)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)setAuxiliaryOptions:(NSArray *)arg1 ;
-(NSArray *)auxiliaryOptions;
-(void)updatePreferredContentSize;
-(void)updateContents;
-(BOOL)manage;
-(void)setManage:(BOOL)arg1 ;
-(NSArray *)fileTypes;
-(void)setFileTypes:(NSArray *)arg1 ;
-(void)setAllPickers:(NSArray *)arg1 ;
-(NSArray *)allPickers;
-(id)initWithFileTypes:(id)arg1 mode:(unsigned long long)arg2 auxiliaryOptions:(id)arg3 includeManagementItem:(BOOL)arg4 ;
@end
