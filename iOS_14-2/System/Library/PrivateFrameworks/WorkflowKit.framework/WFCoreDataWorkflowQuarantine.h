/*
* Generated on Thursday, January 14, 2021 at 2:26:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

