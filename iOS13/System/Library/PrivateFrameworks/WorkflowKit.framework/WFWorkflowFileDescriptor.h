/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFFileRecordDescriptor.h>

@interface WFWorkflowFileDescriptor : WFFileRecordDescriptor {

	BOOL _performMigration;

}

@property (nonatomic,readonly) BOOL performMigration;              //@synthesize performMigration=_performMigration - In the implementation block
-(BOOL)performMigration;
-(id)initWithFile:(id)arg1 name:(id)arg2 ;
-(id)initWithFile:(id)arg1 name:(id)arg2 performMigration:(BOOL)arg3 ;
-(id)initWithFile:(id)arg1 name:(id)arg2 performMigration:(BOOL)arg3 sourceAppIdentifier:(id)arg4 ;
@end

