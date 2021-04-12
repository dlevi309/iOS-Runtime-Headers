/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/


@class NSString, NSData;

@interface WFDatabaseAccessResourceState : NSObject {

	NSString* _persistentIdentifier;
	NSData* _perWorkflowStateData;

}

@property (nonatomic,readonly) NSString * persistentIdentifier;              //@synthesize persistentIdentifier=_persistentIdentifier - In the implementation block
@property (nonatomic,readonly) NSData * perWorkflowStateData;                //@synthesize perWorkflowStateData=_perWorkflowStateData - In the implementation block
-(NSString *)persistentIdentifier;
-(id)initWithPersistentIdentifier:(id)arg1 perWorkflowStateData:(id)arg2 ;
-(NSData *)perWorkflowStateData;
@end

