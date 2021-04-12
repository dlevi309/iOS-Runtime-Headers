/*
* Generated on Thursday, January 14, 2021 at 2:26:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <CoreData/NSManagedObject.h>

@class WFCoreDataCollection, WFCoreDataWorkflow;

@interface WFCoreDataWorkflowIcon : NSManagedObject

@property (assign,nonatomic) long long backgroundColorValue; 
@property (assign,nonatomic) long long glyphNumber; 
@property (nonatomic,retain) WFCoreDataCollection * collection; 
@property (nonatomic,retain) WFCoreDataWorkflow * workflow; 
+(id)fetchRequest;
@end

