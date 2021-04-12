/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <CoreData/NSManagedObject.h>
#import <libobjc.A.dylib/WFRecordStorage.h>

@class NSString, NSData, WFCoreDataRunEvent, WFCoreDataWorkflow;

@interface WFCoreDataTrigger : NSManagedObject <WFRecordStorage>

@property (nonatomic,retain) NSString * workflowID; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL enabled; 
@property (assign,nonatomic) BOOL shouldPrompt; 
@property (nonatomic,retain) NSData * triggerData; 
@property (nonatomic,copy) NSString * triggerID; 
@property (nonatomic,retain) WFCoreDataRunEvent * runEvents; 
@property (nonatomic,retain) WFCoreDataWorkflow * workflow; 
+(id)fetchRequest;
-(id)descriptor;
-(id)trigger;
-(NSString *)workflowID;
-(void)setWorkflowID:(NSString *)arg1 ;
@end

