/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class NSMutableArray;

@interface PLDelayedFiledSystemDeletions : NSObject {

	NSMutableArray* _deletionInfos;

}
+(void)waitForAllDelayedDeletionsToFinish;
+(id)filesystemDeletionQueue;
+(void)appendDescriptionForEvent:(id)arg1 toComponents:(id)arg2 ;
+(id)deletionsFromChangeHubEvent:(id)arg1 ;
-(void)dealloc;
-(id)debugDescription;
-(void)deleteAllRemainingFilesAndThumbnailsWithPhotoLibrary:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)addFilesystemDeletionInfo:(id)arg1 ;
-(void)appendToXPCMessage:(id)arg1 managedObjectContext:(id)arg2 ;
-(id)initWithFilesystemDeletionInfos:(id)arg1 ;
@end

