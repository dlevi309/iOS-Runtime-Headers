/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithAssetsdClient:(id)arg1 ;
-(BOOL)shouldPrioritize;
-(void)runDaemonSide;
-(void)setShouldPrioritize:(BOOL)arg1 ;
-(id)initFromXPCObject:(id)arg1 libraryServicesManager:(id)arg2 ;
-(BOOL)shouldArchiveXPCToDisk;
-(PLPhotoLibrary *)transientPhotoLibrary;
-(id)serialOperationQueue;
-(void)archiveXPCToDisk:(id)arg1 ;
-(void)runAndWaitForMessageToBeSent;
-(void)deleteAllRecoveryEvents;
@end

