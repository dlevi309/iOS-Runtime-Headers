/*
* Generated on Thursday, January 14, 2021 at 2:20:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UITableViewDropAnimation.h>

@class UIDragPreviewTarget, UITableViewCell;

@interface _UITableViewDropAnimationToTarget : _UITableViewDropAnimation {

	BOOL _didSearchForCell;
	UIDragPreviewTarget* _target;
	UITableViewCell* _cell;

}

@property (nonatomic,retain) UIDragPreviewTarget * target;              //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) BOOL didSearchForCell;                     //@synthesize didSearchForCell=_didSearchForCell - In the implementation block
@property (nonatomic,retain) UITableViewCell * cell;                    //@synthesize cell=_cell - In the implementation block
-(UITableViewCell *)cell;
-(void)setTarget:(UIDragPreviewTarget *)arg1 ;
-(void)setCell:(UITableViewCell *)arg1 ;
-(BOOL)didSearchForCell;
-(void)setDidSearchForCell:(BOOL)arg1 ;
-(id)cellForTargetContainerInTableView:(id)arg1 ;
-(id)initWithDragItem:(id)arg1 target:(id)arg2 ;
-(UIDragPreviewTarget *)target;
@end

