/*
* Generated on Monday, March 1, 2021 at 2:30:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol _UITableViewSubviewManagerDelegate;
@class UITableViewCell, UITableView, NSCountedSet, NSMapTable;

@interface _UITableViewSubviewManager : NSObject {

	UITableViewCell* _reorderingCell;
	UITableView*<_UITableViewSubviewManagerDelegate> _tableView;
	NSCountedSet* _reusePreventedCells;
	NSMapTable* _cellsReadyForReuse;

}

@property (assign,nonatomic,__weak) UITableView*<_UITableViewSubviewManagerDelegate> tableView;              //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) NSCountedSet * reusePreventedCells;                                             //@synthesize reusePreventedCells=_reusePreventedCells - In the implementation block
@property (nonatomic,retain) NSMapTable * cellsReadyForReuse;                                                //@synthesize cellsReadyForReuse=_cellsReadyForReuse - In the implementation block
@property (nonatomic,retain) UITableViewCell * reorderingCell;                                               //@synthesize reorderingCell=_reorderingCell - In the implementation block
-(UITableView*<_UITableViewSubviewManagerDelegate>)tableView;
-(id)initWithTableView:(id)arg1 ;
-(void)setTableView:(UITableView*<_UITableViewSubviewManagerDelegate>)arg1 ;
-(BOOL)shouldDeferReuseOfCell:(id)arg1 ;
-(void)cellReadyForReuse:(id)arg1 withIndexPath:(id)arg2 didEndDisplaying:(BOOL)arg3 ;
-(void)setReorderingCell:(UITableViewCell *)arg1 ;
-(void)preventReuseOfCell:(id)arg1 ;
-(void)resumeReuseOfCell:(id)arg1 ;
-(UITableViewCell *)reorderingCell;
-(NSCountedSet *)reusePreventedCells;
-(void)setReusePreventedCells:(NSCountedSet *)arg1 ;
-(NSMapTable *)cellsReadyForReuse;
-(void)setCellsReadyForReuse:(NSMapTable *)arg1 ;
@end

