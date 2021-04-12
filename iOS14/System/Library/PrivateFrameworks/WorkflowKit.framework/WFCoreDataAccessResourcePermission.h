/*
* Generated on Thursday, January 14, 2021 at 2:26:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <CoreData/NSManagedObject.h>

@class NSData, NSString, WFCoreDataWorkflow;

@interface WFCoreDataAccessResourcePermission : NSManagedObject

@property (nonatomic,retain) NSData * data; 
@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,retain) WFCoreDataWorkflow * shortcut; 
+(id)fetchRequest;
@end

