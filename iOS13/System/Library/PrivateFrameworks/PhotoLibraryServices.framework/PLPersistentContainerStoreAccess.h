/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

@class NSPersistentStoreCoordinator;


@protocol PLPersistentContainerStoreAccess
@property (readonly) NSPersistentStoreCoordinator * sharedPersistentStoreCoordinator; 
@required
-(void)removeSharedPersistentStoreCoordinator;
-(NSPersistentStoreCoordinator *)sharedPersistentStoreCoordinator;

@end

