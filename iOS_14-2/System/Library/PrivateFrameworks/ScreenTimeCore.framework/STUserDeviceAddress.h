/*
* Generated on Thursday, January 14, 2021 at 2:24:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
*/

#import <CoreData/NSManagedObject.h>

@class NSString, STCoreUser, STCoreDevice;

@interface STUserDeviceAddress : NSManagedObject

@property (nonatomic,retain) NSString * idsURI; 
@property (nonatomic,retain) STCoreUser * user; 
@property (nonatomic,retain) STCoreDevice * device; 
+(id)fetchOrCreateUserDeviceAddressWithUser:(id)arg1 device:(id)arg2 context:(id)arg3 error:(id*)arg4 ;
@end

