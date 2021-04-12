/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libcoreroutine.dylib/RTCloudManagedObject.h>

@class NSString, NSSet;

@interface RTDeviceMO : RTCloudManagedObject

@property (nonatomic,copy) NSString * deviceName; 
@property (nonatomic,copy) NSString * deviceClass; 
@property (nonatomic,copy) NSString * deviceModel; 
@property (nonatomic,retain) NSSet * places; 
@property (nonatomic,retain) NSSet * visits; 
@property (nonatomic,retain) NSSet * transitions; 
@property (nonatomic,retain) NSSet * mapItems; 
@property (nonatomic,retain) NSSet * addresses; 
@property (nonatomic,retain) NSSet * deletionRequests; 
@property (nonatomic,readonly) RTDeviceMO * device; 
+(id)fetchRequest;
+(id)managedObjectWithIdentifier:(id)arg1 deviceName:(id)arg2 deviceClass:(id)arg3 deviceModel:(id)arg4 creationDate:(id)arg5 inManagedObjectContext:(id)arg6 ;
-(RTDeviceMO *)device;
-(void)setDevice:(RTDeviceMO *)arg1 ;
@end

