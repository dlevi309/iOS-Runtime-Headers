/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PLDaemonJob.h>

@class NSString, PLPhotoLibrary;

@interface PLCloudSharingJob : PLDaemonJob {

	NSString* _archiveFilename;
	BOOL _shouldPrioritize;

}

@property (nonatomic,readonly) PLPhotoLibrary * transientPhotoLibrary; 
@property (assign,nonatomic) BOOL shouldPrioritize;                                 //@synthesize shouldPrioritize=_shouldPrioritize - In the implementation block
+(id)recoveredEventsWithPathManager:(id)arg1 ;
+(id)lowPriorityOperationQueue;
+(void)deleteAllRecoveryEventsWithPathManager:(id)arg1 ;
+(id)highPriorityOperationQueue;
-(void)runDaemonSide;
-(id)initWithAssetsdClient:(id)arg1 ;
-(id)initFromXPCObject:(id)arg1 libraryServicesManager:(id)arg2 ;
-(BOOL)shouldArchiveXPCToDisk;
-(PLPhotoLibrary *)transientPhotoLibrary;
-(void)archiveXPCToDisk:(id)arg1 ;
-(void)runAndWaitForMessageToBeSent;
-(void)setShouldPrioritize:(BOOL)arg1 ;
-(BOOL)shouldPrioritize;
@end

