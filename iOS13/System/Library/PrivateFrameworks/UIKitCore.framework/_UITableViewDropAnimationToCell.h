/*
* Generated on Monday, March 1, 2021 at 2:30:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UITableViewDropAnimation.h>

@class UITableViewCell, UIDragPreviewParameters;

@interface _UITableViewDropAnimationToCell : _UITableViewDropAnimation {

	UITableViewCell* _cell;
	UIDragPreviewParameters* _previewParameters;

}

@property (assign,nonatomic,__weak) UITableViewCell * cell;                            //@synthesize cell=_cell - In the implementation block
@property (nonatomic,retain) UIDragPreviewParameters * previewParameters;              //@synthesize previewParameters=_previewParameters - In the implementation block
-(UITableViewCell *)cell;
-(id)initWithDragItem:(id)arg1 cell:(id)arg2 previewParameters:(id)arg3 ;
-(void)setCell:(UITableViewCell *)arg1 ;
-(UIDragPreviewParameters *)previewParameters;
-(void)setPreviewParameters:(UIDragPreviewParameters *)arg1 ;
@end

