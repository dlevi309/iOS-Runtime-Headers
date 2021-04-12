/*
* Generated on Thursday, January 14, 2021 at 2:26:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

@class RLMRealm;


@protocol RLMFastEnumerable
@property (nonatomic,readonly) RLMRealm * realm; 
@property (nonatomic,readonly) RLMClassInfo* objectInfo; 
@property (nonatomic,readonly) unsigned long long count; 
@required
-(RLMRealm *)realm;
-(TableView*)tableView;
-(unsigned long long)count;
-(id)fastEnumerator;
-(RLMClassInfo*)objectInfo;

@end

