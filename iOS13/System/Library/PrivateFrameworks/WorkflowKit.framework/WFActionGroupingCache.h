/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/


@class NSMutableDictionary;

@interface WFActionGroupingCache : NSObject {

	NSMutableDictionary* _actionsByGroupingIdentifier;

}

@property (nonatomic,readonly) NSMutableDictionary * actionsByGroupingIdentifier;              //@synthesize actionsByGroupingIdentifier=_actionsByGroupingIdentifier - In the implementation block
-(id)init;
-(void)addAction:(id)arg1 sortingWithWorkflowActions:(id)arg2 ;
-(void)removeAction:(id)arg1 ;
-(void)sortActionsForGroupingIdentifier:(id)arg1 withWorkflowActions:(id)arg2 ;
-(id)actionsForGroupingIdentifier:(id)arg1 ;
-(NSMutableDictionary *)actionsByGroupingIdentifier;
@end

