/*
* Generated on Thursday, January 14, 2021 at 2:24:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthPlatformCore.framework/HealthPlatformCore
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSData, NSSet, _TtC18HealthPlatformCore6Plugin;

@interface HealthPlatformCore.PluginData : NSManagedObject

@property (copy,nonatomic) NSString * uniqueIdentifier; 
@property (copy,nonatomic) NSData * data; 
@property (copy,nonatomic) NSSet * profiles; 
@property (retain,nonatomic) _TtC18HealthPlatformCore6Plugin * plugin; 
-(id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2 ;
@end

