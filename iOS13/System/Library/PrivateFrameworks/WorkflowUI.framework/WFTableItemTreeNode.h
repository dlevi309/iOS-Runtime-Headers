/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WFTreeNode.h>

@class WFTableItem;

@interface WFTableItemTreeNode : WFTreeNode {

	WFTableItem* _item;

}

@property (assign,nonatomic,__weak) WFTableItem * item;              //@synthesize item=_item - In the implementation block
-(WFTableItem *)item;
-(void)setItem:(WFTableItem *)arg1 ;
@end

