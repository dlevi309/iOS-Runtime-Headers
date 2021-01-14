/*
* Generated on Thursday, January 14, 2021 at 2:26:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <CoreData/NSManagedObject.h>
#import <libobjc.A.dylib/WFRecordStorage.h>

@class NSString, NSData, NSSet, WFCoreDataRunEvent, WFCoreDataWorkflow;

@interface WFCoreDataTrigger : NSManagedObject <WFRecordStorage>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSData * data; 
@property (assign,nonatomic) BOOL enabled; 
@property (nonatomic,copy) NSString * identifier; 
@property (assign,nonatomic) BOOL shouldPrompt; 
@property (assign,nonatomic) int source; 
@property (nonatomic,retain) NSData * suggestionData; 
@property (nonatomic,retain) NSSet * events; 
@property (nonatomic,retain) WFCoreDataRunEvent * runEvents; 
@property (nonatomic,retain) WFCoreDataWorkflow * shortcut; 
+(id)fetchRequest;
+(id)recordPropertyMap;
-(id)trigger;
-(id)descriptor;
@end

