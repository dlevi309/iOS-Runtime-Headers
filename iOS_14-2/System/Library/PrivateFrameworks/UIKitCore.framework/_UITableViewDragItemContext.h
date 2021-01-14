/*
* Generated on Thursday, January 14, 2021 at 2:20:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class UITableView, NSIndexPath;

@interface _UITableViewDragItemContext : NSObject {

	UITableView* _tableView;
	NSIndexPath* _indexPath;

}

@property (assign,nonatomic,__weak) UITableView * tableView;              //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) NSIndexPath * indexPath;                     //@synthesize indexPath=_indexPath - In the implementation block
-(void)setIndexPath:(NSIndexPath *)arg1 ;
-(UITableView *)tableView;
-(NSIndexPath *)indexPath;
-(id)initWithIndexPath:(id)arg1 forTableView:(id)arg2 ;
-(void)setTableView:(UITableView *)arg1 ;
@end

