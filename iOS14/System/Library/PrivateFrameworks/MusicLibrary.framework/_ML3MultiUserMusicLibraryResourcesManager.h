/*
* Generated on Thursday, January 14, 2021 at 2:24:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)libraryContainerPath;
-(NSString *)cachedLibraryContainerPath;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(id)initWithLibraryResourcesService:(id)arg1 ;
-(void)emergencyDisconnectWithCompletion:(/*^block*/id)arg1 ;
-(id<MLMediaLibraryResourcesServiceProtocol>)libraryResourcesServices;
-(void)setCachedLibraryContainerPath:(NSString *)arg1 ;
-(void)setSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)terminateForFailureToPerformDatabasePathChange;
-(void)setLibraryResourcesServices:(id<MLMediaLibraryResourcesServiceProtocol>)arg1 ;
-(void)performDatabasePathChange:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

