/*
* Generated on Monday, March 1, 2021 at 2:33:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/


@class NSPersistentStoreCoordinator, NSManagedObjectContext;

@interface ICNotesCrossProcessChangeCoordinator : NSObject {

	NSPersistentStoreCoordinator* _sourceCoordinator;
	NSManagedObjectContext* _destinationContext;

}

@property (nonatomic,retain) NSPersistentStoreCoordinator * sourceCoordinator;              //@synthesize sourceCoordinator=_sourceCoordinator - In the implementation block
@property (nonatomic,retain) NSManagedObjectContext * destinationContext;                   //@synthesize destinationContext=_destinationContext - In the implementation block
-(void)dealloc;
-(NSManagedObjectContext *)destinationContext;
-(void)registerForAccountNotifications;
-(id)initWithSourceCoordinator:(id)arg1 destinationContext:(id)arg2 ;
-(void)registerForPasswordStatusDidChangeNotifications;
-(void)registerForCrossProcessNotificationName:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)postCrossProcessNotificationName:(id)arg1 ;
-(void)postAccountDidChangeNotification;
-(void)postNotesPasswordStatusDidChangeNotification;
-(NSPersistentStoreCoordinator *)sourceCoordinator;
-(void)setSourceCoordinator:(NSPersistentStoreCoordinator *)arg1 ;
-(void)setDestinationContext:(NSManagedObjectContext *)arg1 ;
@end

