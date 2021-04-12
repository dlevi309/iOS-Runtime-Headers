/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setPreferredContentSize:(CGSize)arg1 ;
-(unsigned long long)mode;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(void)setManage:(BOOL)arg1 ;
-(id<_UIDocumentPickerOverviewDelegate>)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)manage;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)updateContents;
-(void)setMode:(unsigned long long)arg1 ;
-(void)setDelegate:(id<_UIDocumentPickerOverviewDelegate>)arg1 ;
-(NSArray *)fileTypes;
-(void)updatePreferredContentSize;
-(void)setAuxiliaryOptions:(NSArray *)arg1 ;
-(NSArray *)auxiliaryOptions;
-(void)setFileTypes:(NSArray *)arg1 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setAllPickers:(NSArray *)arg1 ;
-(NSArray *)allPickers;
-(id)initWithFileTypes:(id)arg1 mode:(unsigned long long)arg2 auxiliaryOptions:(id)arg3 includeManagementItem:(BOOL)arg4 ;
@end

