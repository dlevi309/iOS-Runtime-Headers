/*
* Generated on Thursday, January 14, 2021 at 2:20:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setCell:(UITableViewCell *)arg1 ;
-(id)initWithDragItem:(id)arg1 cell:(id)arg2 previewParameters:(id)arg3 ;
-(UIDragPreviewParameters *)previewParameters;
-(void)setPreviewParameters:(UIDragPreviewParameters *)arg1 ;
@end

