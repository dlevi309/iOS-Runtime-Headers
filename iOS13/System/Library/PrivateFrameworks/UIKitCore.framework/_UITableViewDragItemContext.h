/*
* Generated on Monday, March 1, 2021 at 2:30:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class UITableView, NSIndexPath;

@interface _UITableViewDragItemContext : NSObject {

	UITableView* _tableView;
	NSIndexPath* _indexPath;

}

@property (assign,nonatomic,__weak) UITableView * tableView;              //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) NSIndexPath * indexPath;                     //@synthesize indexPath=_indexPath - In the implementation block
-(NSIndexPath *)indexPath;
-(UITableView *)tableView;
-(void)setTableView:(UITableView *)arg1 ;
-(void)setIndexPath:(NSIndexPath *)arg1 ;
-(id)initWithIndexPath:(id)arg1 forTableView:(id)arg2 ;
@end

