/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/

#import <MusicLibrary/_ML3BaseMusicLibraryResourcesManager.h>
#import <libobjc.A.dylib/MLMediaLibraryAccountChangeObserver.h>

@protocol OS_dispatch_queue, MLMediaLibraryResourcesServiceProtocol;
@class NSString, NSObject;

@interface _ML3MultiUserMusicLibraryResourcesManager : _ML3BaseMusicLibraryResourcesManager <MLMediaLibraryAccountChangeObserver> {

	NSString* _cachedLibraryContainerPath;
	NSObject*<OS_dispatch_queue> _serialQueue;
	id<MLMediaLibraryResourcesServiceProtocol> _libraryResourcesServices;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialQueue;                                         //@synthesize serialQueue=_serialQueue - In the implementation block
@property (nonatomic,retain) id<MLMediaLibraryResourcesServiceProtocol> libraryResourcesServices;              //@synthesize libraryResourcesServices=_libraryResourcesServices - In the implementation block
@property (nonatomic,copy) NSString * cachedLibraryContainerPath;                                              //@synthesize cachedLibraryContainerPath=_cachedLibraryContainerPath - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(void)setSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)libraryContainerPath;
-(void)performDatabasePathChange:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)emergencyDisconnectWithCompletion:(/*^block*/id)arg1 ;
-(void)terminateForFailureToPerformDatabasePathChange;
-(id)initWithLibraryResourcesService:(id)arg1 ;
-(NSString *)cachedLibraryContainerPath;
-(id<MLMediaLibraryResourcesServiceProtocol>)libraryResourcesServices;
-(void)setCachedLibraryContainerPath:(NSString *)arg1 ;
-(void)setLibraryResourcesServices:(id<MLMediaLibraryResourcesServiceProtocol>)arg1 ;
@end

