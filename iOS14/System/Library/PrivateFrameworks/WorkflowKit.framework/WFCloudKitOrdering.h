/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

@class NSString, NSOrderedSet;


@protocol WFCloudKitOrdering <WFCloudKitItem>
@property (nonatomic,readonly) NSString * collectionIdentifier; 
@property (nonatomic,readonly) NSOrderedSet * orderedWorkflowIDs; 
@property (nonatomic,readonly) NSOrderedSet * orderedFolderIDs; 
@required
+(id)recordBasename;
-(NSString *)collectionIdentifier;
-(NSOrderedSet *)orderedWorkflowIDs;
-(NSOrderedSet *)orderedFolderIDs;

@end

