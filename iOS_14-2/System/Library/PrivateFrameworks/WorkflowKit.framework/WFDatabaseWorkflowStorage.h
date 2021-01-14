/*
* Generated on Thursday, January 14, 2021 at 2:26:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <libobjc.A.dylib/WFWorkflowStorage.h>

@class WFWorkflowReference, WFDatabase, NSString;

@interface WFDatabaseWorkflowStorage : NSObject <WFWorkflowStorage> {

	WFWorkflowReference* _descriptor;
	WFDatabase* _database;

}

@property (nonatomic,readonly) WFWorkflowReference * descriptor;              //@synthesize descriptor=_descriptor - In the implementation block
@property (nonatomic,readonly) WFDatabase * database;                         //@synthesize database=_database - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)reference;
-(WFWorkflowReference *)descriptor;
-(WFDatabase *)database;
-(BOOL)saveRecord:(id)arg1 error:(id*)arg2 ;
-(BOOL)reloadRecord:(id)arg1 error:(id*)arg2 ;
-(id)initWithDescriptor:(id)arg1 database:(id)arg2 ;
@end

