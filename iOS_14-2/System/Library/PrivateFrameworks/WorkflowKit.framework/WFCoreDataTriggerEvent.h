/*
* Generated on Thursday, January 14, 2021 at 2:26:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <CoreData/NSManagedObject.h>
#import <libobjc.A.dylib/WFRecordStorage.h>

@class NSString, NSDate, NSData, WFCoreDataTrigger;

@interface WFCoreDataTriggerEvent : NSManagedObject <WFRecordStorage>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL confirmed; 
@property (nonatomic,copy) NSDate * dateCreated; 
@property (nonatomic,retain) NSData * eventInfo; 
@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,retain) WFCoreDataTrigger * trigger; 
+(id)fetchRequest;
-(id)descriptor;
@end

