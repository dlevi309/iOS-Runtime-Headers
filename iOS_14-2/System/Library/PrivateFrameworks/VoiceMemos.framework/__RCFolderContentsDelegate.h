/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
*/

#import <libobjc.A.dylib/NSFetchedResultsControllerDelegate.h>

@class RCFoldersFetchedResultsController, NSString;

@interface __RCFolderContentsDelegate : NSObject <NSFetchedResultsControllerDelegate> {

	RCFoldersFetchedResultsController* _foldersController;

}

@property (assign,nonatomic) RCFoldersFetchedResultsController * foldersController;              //@synthesize foldersController=_foldersController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5 ;
-(void)controllerDidChangeContent:(id)arg1 ;
-(void)controllerWillChangeContent:(id)arg1 ;
-(void)setFoldersController:(RCFoldersFetchedResultsController *)arg1 ;
-(RCFoldersFetchedResultsController *)foldersController;
@end

