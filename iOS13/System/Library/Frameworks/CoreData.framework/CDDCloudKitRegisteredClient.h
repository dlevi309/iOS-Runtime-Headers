/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSSet;

@interface CDDCloudKitRegisteredClient : NSManagedObject

@property (nonatomic,retain) NSString * bundleIdentifier; 
@property (nonatomic,retain) NSString * storePath; 
@property (nonatomic,retain) NSString * storeConfigurationName; 
@property (nonatomic,retain) NSString * fileProtectionType; 
@property (nonatomic,retain) NSSet * scheduledActivities; 
@property (nonatomic,retain) NSString * containerIdentifier; 
+(id)entityName;
@end

