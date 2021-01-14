/*
* Generated on Thursday, January 14, 2021 at 2:26:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFActionSearchRankedCollection.h>

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

