/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
*/

#import <libobjc.A.dylib/NSFetchedResultsControllerDelegate.h>

@class NSManagedObjectContext, NSFetchedResultsController, NSDictionary, NSMutableDictionary, NSMutableArray, __RCFolderContentsDelegate, NSArray, NSHashTable, NSDiffableDataSourceSnapshot, NSString;

@interface RCFoldersFetchedResultsController : NSObject <NSFetchedResultsControllerDelegate> {

	NSManagedObjectContext* _context;
	NSFetchedResultsController* _userFoldersController;
	NSDictionary* _builtInContentControllers;
	NSMutableDictionary* _userContentControllers;
	NSMutableArray* _pendingUpdates;
	__RCFolderContentsDelegate* _folderContentsDelegate;
	NSArray* _allBuiltinFolders;
	NSArray* _builtinFolders;
	NSHashTable* _observers;
	BOOL _hasPerformedUserControllerFetch;

}

@property (readonly) NSMutableDictionary * userContentControllers; 
@property (readonly) NSMutableDictionary * builtInContentControllers; 
@property (nonatomic,readonly) NSDiffableDataSourceSnapshot * currentSnapshot; 
@property (nonatomic,readonly) NSArray * allBuiltinFolders; 
@property (nonatomic,readonly) NSArray * builtinFolders; 
@property (nonatomic,readonly) NSArray * userFolders; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)builtinFoldersSectionIdentifier;
+(id)userFoldersSectionIdentifier;
-(void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5 ;
-(void)controllerDidChangeContent:(id)arg1 ;
-(id)_contentControllerForId:(id)arg1 ;
-(NSDiffableDataSourceSnapshot *)currentSnapshot;
-(id)indexPathForFolder:(id)arg1 ;
-(id)folderAtIndexPath:(id)arg1 ;
-(id)playableRecordingsInFolder:(id)arg1 ;
-(void)removeContentObserver:(id)arg1 ;
-(NSArray *)userFolders;
-(void)reloadUserFolder:(id)arg1 ;
-(unsigned long long)playableCountForFolder:(id)arg1 ;
-(NSMutableDictionary *)userContentControllers;
-(id)folderWithIdentifier:(id)arg1 ;
-(NSMutableDictionary *)builtInContentControllers;
-(NSArray *)builtinFolders;
-(NSArray *)allBuiltinFolders;
-(id)initWithFetchRequest:(id)arg1 managedObjectContext:(id)arg2 ;
-(void)addContentObserver:(id)arg1 ;
-(void)reloadBuiltinFolder:(id)arg1 ;
@end

