/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUICore/WFTreeNode.h>

@class WFTableItem;

@interface WFTableItemTreeNode : WFTreeNode {

	WFTableItem* _item;

}

@property (assign,nonatomic,__weak) WFTableItem * item;              //@synthesize item=_item - In the implementation block
-(WFTableItem *)item;
-(void)setItem:(WFTableItem *)arg1 ;
@end

