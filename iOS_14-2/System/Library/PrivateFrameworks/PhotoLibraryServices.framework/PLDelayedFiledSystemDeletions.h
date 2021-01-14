/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class NSMutableArray;

@interface PLDelayedFiledSystemDeletions : NSObject {

	NSMutableArray* _deletionInfos;

}
+(id)filesystemDeletionQueue;
+(void)appendDescriptionForEvent:(id)arg1 toComponents:(id)arg2 ;
+(id)deletionsFromChangeHubEvent:(id)arg1 ;
+(void)waitForAllDelayedDeletionsToFinish;
-(void)addFilesystemDeletionInfo:(id)arg1 ;
-(void)deleteAllRemainingFilesAndThumbnailsWithPhotoLibrary:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithFilesystemDeletionInfos:(id)arg1 ;
-(id)debugDescription;
-(void)appendToXPCMessage:(id)arg1 managedObjectContext:(id)arg2 ;
-(void)dealloc;
@end

