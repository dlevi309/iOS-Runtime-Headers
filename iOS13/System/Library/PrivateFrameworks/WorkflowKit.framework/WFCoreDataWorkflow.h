/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <CoreData/NSManagedObject.h>
#import <libobjc.A.dylib/WFRecordStorage.h>

@class WFWorkflowIcon, WFWorkflowQuarantine, NSString, NSDictionary, NSArray, NSDate, NSSet, WFCoreDataWorkflowIcon, WFCoreDataWorkflowLayout, WFCoreDataWorkflowQuarantine;

@interface WFCoreDataWorkflow : NSManagedObject <WFRecordStorage>

@property (nonatomic,retain) WFWorkflowIcon * workflowIcon; 
@property (nonatomic,retain) WFWorkflowQuarantine * workflowQuarantine; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSDictionary * accessResourcePermissions; 
@property (nonatomic,retain) NSArray * actions; 
@property (nonatomic,copy) NSString * actionsDescription; 
@property (nonatomic,copy) NSString * associatedAppBundleIdentifier; 
@property (nonatomic,copy) NSDate * creationDate; 
@property (assign,nonatomic) BOOL deleted; 
@property (assign,nonatomic) BOOL hiddenFromLibraryAndSync; 
@property (nonatomic,retain) NSArray * importQuestions; 
@property (nonatomic,retain) NSArray * inputClasses; 
@property (nonatomic,copy) NSString * lastMigratedClientVersion; 
@property (nonatomic,copy) NSString * lastSavedOnDeviceName; 
@property (assign,nonatomic) long long lastSyncedHash; 
@property (nonatomic,copy) NSString * minimumClientVersion; 
@property (nonatomic,copy) NSDate * modificationDate; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * phrase; 
@property (nonatomic,retain) NSArray * trustedDomains; 
@property (nonatomic,copy) NSString * workflowID; 
@property (nonatomic,copy) NSString * workflowSubtitle; 
@property (nonatomic,retain) NSArray * workflowTypes; 
@property (nonatomic,retain) WFCoreDataWorkflow * conflictOf; 
@property (nonatomic,retain) NSSet * conflicts; 
@property (nonatomic,retain) WFCoreDataWorkflowIcon * icon; 
@property (nonatomic,retain) WFCoreDataWorkflowLayout * layout; 
@property (nonatomic,retain) WFCoreDataWorkflowQuarantine * quarantine; 
@property (nonatomic,retain) NSSet * triggers; 
+(id)fetchRequest;
-(id)descriptor;
-(id)recordPropertyMap;
-(void)coordinatePropertyUpdatesForRecord:(id)arg1 duringBlock:(/*^block*/id)arg2 ;
-(WFWorkflowIcon *)workflowIcon;
-(void)setWorkflowIcon:(WFWorkflowIcon *)arg1 ;
-(WFWorkflowQuarantine *)workflowQuarantine;
-(void)setWorkflowQuarantine:(WFWorkflowQuarantine *)arg1 ;
@end

