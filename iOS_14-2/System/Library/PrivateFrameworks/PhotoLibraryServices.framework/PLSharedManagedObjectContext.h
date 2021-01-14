/*
* Generated on Thursday, January 14, 2021 at 2:22:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PLManagedObjectContext.h>

@interface PLSharedManagedObjectContext : PLManagedObjectContext {

	id _changeNotificationObserver;

}
-(void)_mergeChangesFromDidSaveDictionary:(id)arg1 usingObjectIDs:(BOOL)arg2 ;
-(BOOL)shouldMergeFromRemoteContextWithChanges:(id)arg1 ;
-(void)tearDownLocalChangeNotifications;
-(BOOL)_hasChangesForCloudShared:(id)arg1 ;
-(BOOL)isUserInterfaceContext;
-(void)setupLocalChangeNotifications;
@end

