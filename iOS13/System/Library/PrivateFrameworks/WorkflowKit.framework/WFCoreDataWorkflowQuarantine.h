/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <CoreData/NSManagedObject.h>

@class NSDate, NSString, WFCoreDataWorkflow;

@interface WFCoreDataWorkflowQuarantine : NSManagedObject

@property (nonatomic,copy) NSDate * importDate; 
@property (nonatomic,copy) NSString * sourceAppIdentifier; 
@property (nonatomic,retain) WFCoreDataWorkflow * workflow; 
+(id)fetchRequest;
@end

