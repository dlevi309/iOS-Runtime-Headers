/*
* Generated on Thursday, January 14, 2021 at 2:27:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
*/


@interface KGPerformChangesRequest : NSObject

@property (nonatomic,readonly) unsigned long long count; 
-(unsigned long long)count;
-(void)removeAllObjects;
-(void)recordNodeRequest:(id)arg1 ;
-(void)recordEdgeRequest:(id)arg1 ;
-(BOOL)_applyChangesForGraph:(id)arg1 error:(id*)arg2 ;
-(BOOL)commitRequestInGraph:(id)arg1 error:(id*)arg2 ;
@end

