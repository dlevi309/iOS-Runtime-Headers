/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIFocusUpdateContext.h>

@class NSIndexPath, UITableView;

@interface UITableViewFocusUpdateContext : UIFocusUpdateContext {

	BOOL _didSetPreviouslyFocusedIndexPath;
	BOOL _didSetNextFocusedIndexPath;
	NSIndexPath* _previouslyFocusedIndexPath;
	NSIndexPath* _nextFocusedIndexPath;
	UITableView* _tableView;

}

@property (nonatomic,__weak,readonly) UITableView * tableView;                        //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,readonly) NSIndexPath * previouslyFocusedIndexPath;              //@synthesize previouslyFocusedIndexPath=_previouslyFocusedIndexPath - In the implementation block
@property (nonatomic,readonly) NSIndexPath * nextFocusedIndexPath;                    //@synthesize nextFocusedIndexPath=_nextFocusedIndexPath - In the implementation block
+(id)_contextWithContext:(id)arg1 tableView:(id)arg2 ;
-(UITableView *)tableView;
-(NSIndexPath *)previouslyFocusedIndexPath;
-(NSIndexPath *)nextFocusedIndexPath;
-(id)_initWithContext:(id)arg1 tableView:(id)arg2 ;
@end

