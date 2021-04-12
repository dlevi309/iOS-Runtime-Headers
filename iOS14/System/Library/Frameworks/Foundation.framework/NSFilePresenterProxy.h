/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/NSFileReactorProxy.h>

@protocol OS_dispatch_queue;
@class NSFilePresenterXPCMessenger, NSObject, NSFileWatcher, NSMutableArray, NSFileAccessProcessManager, NSSet;

@interface NSFilePresenterProxy : NSFileReactorProxy {

	id _remotePresenter;
	NSFilePresenterXPCMessenger* _forwardedMessenger;
	NSObject*<OS_dispatch_queue> _queue;
	NSFileWatcher* _watcher;
	unsigned long long _writingRelinquishmentCount;
	id _currentWriterPurposeID;
	NSMutableArray* _previousWriterPurposeIDs;
	NSFileAccessProcessManager* _processManager;
	NSSet* _observedUbiquityAttributes;
	unsigned long long _filePresenterResponses;
	BOOL _didObserveMovingByWriter;
	BOOL _didObserveVersionChangingByWriter;
	BOOL _disconnected;
	BOOL _inSubarbiter;
	BOOL _usesMainThreadDuringRelinquishing;
	BOOL _didObserveNonCoordinatedChanges;

}

@property (readonly) BOOL disconnected; 
@property (assign) BOOL inSubarbiter;                                                //@synthesize inSubarbiter=_inSubarbiter - In the implementation block
@property (assign) BOOL usesMainThreadDuringReliquishing;                            //@synthesize usesMainThreadDuringRelinquishing=_usesMainThreadDuringRelinquishing - In the implementation block
@property (copy) NSSet * observedUbiquityAttributes;                                 //@synthesize observedUbiquityAttributes=_observedUbiquityAttributes - In the implementation block
@property (assign,nonatomic) unsigned long long filePresenterResponses;              //@synthesize filePresenterResponses=_filePresenterResponses - In the implementation block
+(id)urlWithItemURL:(id)arg1 subitemPath:(id)arg2 ;
-(void)disconnect;
-(void)relinquishToReadingClaimWithID:(id)arg1 options:(unsigned long long)arg2 purposeID:(id)arg3 resultHandler:(/*^block*/id)arg4 ;
-(void)forwardRelinquishmentForWritingClaim:(BOOL)arg1 withID:(id)arg2 purposeID:(id)arg3 subitemURL:(id)arg4 options:(unsigned long long)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)relinquishToWritingClaimWithID:(id)arg1 options:(unsigned long long)arg2 purposeID:(id)arg3 subitemPath:(id)arg4 resultHandler:(/*^block*/id)arg5 ;
-(void)observeVersionChangeOfKind:(id)arg1 withClientID:(id)arg2 name:(id)arg3 subitemPath:(id)arg4 ;
-(void)observeMoveByWriterWithPurposeID:(id)arg1 withPhysicalDestinationURL:(id)arg2 ;
-(void)startWatchingWithQueue:(id)arg1 lastEventID:(id)arg2 unannouncedMoveHandler:(/*^block*/id)arg3 ;
-(void)observeUbiquityChangeAtSubitemPath:(id)arg1 withPhysicalURL:(id)arg2 ;
-(void)observeMoveOfSubitemAtURL:(id)arg1 toURL:(id)arg2 byWriterWithPurposeID:(id)arg3 ;
-(void)accommodateDeletionWithSubitemPath:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)observeSharingChangeAtSubitemPath:(id)arg1 withPhysicalURL:(id)arg2 ;
-(void)forwardUsingProxy:(id)arg1 ;
-(id)initWithClient:(id)arg1 remotePresenter:(id)arg2 reactorID:(id)arg3 ;
-(void)observeReconnectionByWriterWithPurposeID:(id)arg1 ;
-(void)startObservingApplicationStateWithQueue:(id)arg1 ;
-(void)setItemLocation:(id)arg1 ;
-(void)observeDisconnectionByWriterWithPurposeID:(id)arg1 ;
-(BOOL)shouldSendObservationMessageWithPurposeID:(id)arg1 ;
-(void)stopObservingApplicationState;
-(void)observeChangeOfUbiquityAttributes:(id)arg1 ;
-(void)setUsesMainThreadDuringReliquishing:(BOOL)arg1 ;
-(void)observePresenterChange:(BOOL)arg1 atSubitemURL:(id)arg2 ;
-(void)observeDisappearanceAtSubitemPath:(id)arg1 ;
-(BOOL)usesMainThreadDuringReliquishing;
-(BOOL)allowedForURL:(id)arg1 ;
-(void)saveChangesWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)disconnected;
-(BOOL)inSubarbiter;
-(void)setObservedUbiquityAttributes:(NSSet *)arg1 ;
-(void)promisedFileWasFulfilled;
-(void)observeChangeAtSubitemPath:(id)arg1 ;
-(void)_settleNonCoordinatedChanges;
-(void)setInSubarbiter:(BOOL)arg1 ;
-(void)setFilePresenterResponses:(unsigned long long)arg1 ;
-(NSSet *)observedUbiquityAttributes;
-(unsigned long long)filePresenterResponses;
-(void)invalidate;
-(void)localFileWasEvicted;
-(void)observeNewProvider:(id)arg1 ;
-(id)_clientProxy;
-(void)dealloc;
@end

