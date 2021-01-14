/*
* Generated on Thursday, January 14, 2021 at 2:21:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

