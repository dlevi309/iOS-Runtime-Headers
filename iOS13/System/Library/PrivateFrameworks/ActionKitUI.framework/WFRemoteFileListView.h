/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
*/

#import <ActionKitUI/ActionKitUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@protocol WFRemoteFileListViewDelegate;
@class UITableView, NSDateFormatter, UILocalizedIndexedCollation, NSDictionary, NSString;

@interface WFRemoteFileListView : UIView <UITableViewDelegate, UITableViewDataSource> {

	id<WFRemoteFileListViewDelegate> _delegate;
	UITableView* _tableView;
	NSDateFormatter* _dateFormatter;
	UILocalizedIndexedCollation* _collation;
	NSDictionary* _filesBySection;

}

@property (nonatomic,readonly) UITableView * tableView;                                     //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,readonly) NSDateFormatter * dateFormatter;                             //@synthesize dateFormatter=_dateFormatter - In the implementation block
@property (nonatomic,readonly) UILocalizedIndexedCollation * collation;                     //@synthesize collation=_collation - In the implementation block
@property (nonatomic,copy) NSDictionary * filesBySection;                                   //@synthesize filesBySection=_filesBySection - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInset; 
@property (assign,nonatomic) UIEdgeInsets verticalScrollIndicatorInsets; 
@property (assign,nonatomic,__weak) id<WFRemoteFileListViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<WFRemoteFileListViewDelegate>)delegate;
-(void)setDelegate:(id<WFRemoteFileListViewDelegate>)arg1 ;
-(NSDateFormatter *)dateFormatter;
-(UITableView *)tableView;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)contentInset;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)sectionIndexTitlesForTableView:(id)arg1 ;
-(long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(UIEdgeInsets)verticalScrollIndicatorInsets;
-(void)setVerticalScrollIndicatorInsets:(UIEdgeInsets)arg1 ;
-(void)setFiles:(id)arg1 ;
-(UILocalizedIndexedCollation *)collation;
-(id)initWithFrame:(CGRect)arg1 collation:(id)arg2 ;
-(void)updateCheckmarkForFile:(id)arg1 ;
-(CGRect)frameOfCellAtPoint:(CGPoint)arg1 ;
-(id)cellAtPoint:(CGPoint)arg1 ;
-(id)fileAtPoint:(CGPoint)arg1 ;
-(void)setFilesBySection:(NSDictionary *)arg1 ;
-(NSDictionary *)filesBySection;
@end

