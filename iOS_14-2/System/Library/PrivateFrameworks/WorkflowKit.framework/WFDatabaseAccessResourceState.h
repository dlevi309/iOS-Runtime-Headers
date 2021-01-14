/*
* Generated on Thursday, January 14, 2021 at 2:26:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

