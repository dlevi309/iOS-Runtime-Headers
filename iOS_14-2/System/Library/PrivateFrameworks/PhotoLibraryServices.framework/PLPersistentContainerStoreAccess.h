/*
* Generated on Thursday, January 14, 2021 at 2:22:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

@class NSPersistentStoreCoordinator;


@protocol PLPersistentContainerStoreAccess
@property (readonly) NSPersistentStoreCoordinator * sharedPersistentStoreCoordinator; 
@required
-(void)removeSharedPersistentStoreCoordinator;
-(NSPersistentStoreCoordinator *)sharedPersistentStoreCoordinator;

@end

