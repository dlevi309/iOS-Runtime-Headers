/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

@class RLMRealm;


@protocol RLMFastEnumerable
@property (nonatomic,readonly) RLMRealm * realm; 
@property (nonatomic,readonly) RLMClassInfo* objectInfo; 
@property (nonatomic,readonly) unsigned long long count; 
@required
-(unsigned long long)count;
-(RLMRealm *)realm;
-(TableView*)tableView;
-(id)fastEnumerator;
-(RLMClassInfo*)objectInfo;

@end

