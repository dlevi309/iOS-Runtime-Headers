/*
* Generated on Thursday, January 14, 2021 at 2:24:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthPlatformCore.framework/HealthPlatformCore
*/

#import <CoreData/NSManagedObject.h>

@class NSSet, NSData, NSUUID;

@interface HealthPlatformCore.Profile : NSManagedObject

@property (copy,nonatomic) NSSet * allPluginData; 
@property (copy,nonatomic) NSData * encodedHKProfileIdentifier; 
@property (copy,nonatomic) NSSet * feedItems; 
@property (copy,nonatomic) NSUUID * uniqueIdentifier; 
-(id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2 ;
@end

