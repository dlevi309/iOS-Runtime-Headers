/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)invalidate;
-(void)setItemLocation:(id)arg1 ;
-(void)observeMoveOfSubitemAtURL:(id)arg1 toURL:(id)arg2 byWriterWithPurposeID:(id)arg3 ;
-(void)observeMoveByWriterWithPurposeID:(id)arg1 withPhysicalDestinationURL:(id)arg2 ;
-(void)promisedFileWasFulfilled;
-(void)localFileWasEvicted;
-(void)setInSubarbiter:(BOOL)arg1 ;
-(BOOL)inSubarbiter;
-(void)startWatchingWithQueue:(id)arg1 lastEventID:(id)arg2 unannouncedMoveHandler:(/*^block*/id)arg3 ;
-(void)startObservingApplicationStateWithQueue:(id)arg1 ;
-(void)stopObservingApplicationState;
-(id)initWithClient:(id)arg1 remotePresenter:(id)arg2 reactorID:(id)arg3 ;
-(void)setUsesMainThreadDuringReliquishing:(BOOL)arg1 ;
-(void)setFilePresenterResponses:(unsigned long long)arg1 ;
-(void)setObservedUbiquityAttributes:(NSSet *)arg1 ;
-(BOOL)allowedForURL:(id)arg1 ;
-(void)forwardUsingProxy:(id)arg1 ;
-(void)observeDisconnectionByWriterWithPurposeID:(id)arg1 ;
-(void)observeReconnectionByWriterWithPurposeID:(id)arg1 ;
-(void)observeUbiquityChangeAtSubitemPath:(id)arg1 withPhysicalURL:(id)arg2 ;
-(void)observeSharingChangeAtSubitemPath:(id)arg1 withPhysicalURL:(id)arg2 ;
-(void)observeChangeOfUbiquityAttributes:(id)arg1 ;
-(void)observeDisappearanceAtSubitemPath:(id)arg1 ;
-(void)observeChangeAtSubitemPath:(id)arg1 ;
-(void)observeVersionChangeOfKind:(id)arg1 withClientID:(id)arg2 name:(id)arg3 subitemPath:(id)arg4 ;
-(void)saveChangesWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)usesMainThreadDuringReliquishing;
-(BOOL)disconnected;
-(void)relinquishToReadingClaimWithID:(id)arg1 options:(unsigned long long)arg2 purposeID:(id)arg3 resultHandler:(/*^block*/id)arg4 ;
-(void)relinquishToWritingClaimWithID:(id)arg1 options:(unsigned long long)arg2 purposeID:(id)arg3 subitemPath:(id)arg4 resultHandler:(/*^block*/id)arg5 ;
-(id)_clientProxy;
-(void)observeNewProvider:(id)arg1 ;
-(void)observePresenterChange:(BOOL)arg1 atSubitemURL:(id)arg2 ;
-(void)_settleNonCoordinatedChanges;
-(BOOL)shouldSendObservationMessageWithPurposeID:(id)arg1 ;
-(void)forwardRelinquishmentForWritingClaim:(BOOL)arg1 withID:(id)arg2 purposeID:(id)arg3 subitemURL:(id)arg4 options:(unsigned long long)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)disconnect;
-(void)accommodateDeletionWithSubitemPath:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSSet *)observedUbiquityAttributes;
-(unsigned long long)filePresenterResponses;
@end

