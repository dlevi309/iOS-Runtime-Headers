/*
* Generated on Monday, March 1, 2021 at 2:30:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PLManagedObjectContext.h>

@interface PLSharedManagedObjectContext : PLManagedObjectContext {

	id _changeNotificationObserver;

}
-(void)_mergeChangesFromDidSaveDictionary:(id)arg1 usingObjectIDs:(BOOL)arg2 ;
-(BOOL)isUserInterfaceContext;
-(void)setupLocalChangeNotifications;
-(void)tearDownLocalChangeNotifications;
@end

