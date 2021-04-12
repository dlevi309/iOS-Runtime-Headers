/*
* Generated on Monday, March 1, 2021 at 2:34:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WFActionSearchRankedCollection.h>

@class NSMutableDictionary;

@interface WFActionSearchRankedResults : WFActionSearchRankedCollection {

	NSMutableDictionary* _displayNames;
	NSMutableDictionary* _records;

}
-(id)init;
-(void)addKey:(id)arg1 withDisplayName:(id)arg2 type:(unsigned long long)arg3 ;
-(void)addAction:(id)arg1 forKey:(id)arg2 type:(unsigned long long)arg3 ;
-(id)rankedGroups;
@end

