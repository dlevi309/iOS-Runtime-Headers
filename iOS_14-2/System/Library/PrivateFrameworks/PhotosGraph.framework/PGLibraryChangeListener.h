/*
* Generated on Thursday, January 14, 2021 at 2:25:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <libobjc.A.dylib/PHPhotoLibraryChangeObserver.h>
#import <libobjc.A.dylib/PHPhotoLibraryAvailabilityObserver.h>
#import <libobjc.A.dylib/PGLibraryChangeProducer.h>

@protocol OS_dispatch_queue, PGGraphUpdateHealthRecording;
@class NSObject, NSString, PHPhotoLibrary, PGLibraryChangeListenerStateStore, NSHashTable, NSMutableOrderedSet, NSMapTable, NSCountedSet, PHPersistentChangeToken;

@interface PGLibraryChangeListener : NSObject <PHPhotoLibraryChangeObserver, PHPhotoLibraryAvailabilityObserver, PGLibraryChangeProducer> {

	NSObject*<OS_dispatch_queue> _changeObservationQueue;
	BOOL _libraryBecameUnavailable;
	NSString* _clientIdentifier;
	PHPhotoLibrary* _photoLibrary;
	PGLibraryChangeListenerStateStore* _stateStore;
	NSHashTable* _changeConsumers;
	NSMutableOrderedSet* _outstandingChangeTokens;
	NSMapTable* _outstandingChangeTokensByConsumer;
	NSCountedSet* _outstandingChangeTokenCounts;
	unsigned long long _outstandingTokensHighWaterMark;
	unsigned long long _outstandingTokensLowWaterMark;
	unsigned long long _maximumNumberOfMutationsToFetch;
	unsigned long long _mode;
	PHPersistentChangeToken* _lastReadToken;
	id<PGGraphUpdateHealthRecording> _updateHealthRecorder;

}

@property (nonatomic,__weak,readonly) PHPhotoLibrary * photoLibrary;                               //@synthesize photoLibrary=_photoLibrary - In the implementation block
@property (nonatomic,readonly) PGLibraryChangeListenerStateStore * stateStore;                     //@synthesize stateStore=_stateStore - In the implementation block
@property (nonatomic,readonly) NSHashTable * changeConsumers;                                      //@synthesize changeConsumers=_changeConsumers - In the implementation block
@property (nonatomic,readonly) NSMutableOrderedSet * outstandingChangeTokens;                      //@synthesize outstandingChangeTokens=_outstandingChangeTokens - In the implementation block
@property (nonatomic,readonly) NSMapTable * outstandingChangeTokensByConsumer;                     //@synthesize outstandingChangeTokensByConsumer=_outstandingChangeTokensByConsumer - In the implementation block
@property (nonatomic,readonly) NSCountedSet * outstandingChangeTokenCounts;                        //@synthesize outstandingChangeTokenCounts=_outstandingChangeTokenCounts - In the implementation block
@property (nonatomic,readonly) unsigned long long outstandingTokensHighWaterMark;                  //@synthesize outstandingTokensHighWaterMark=_outstandingTokensHighWaterMark - In the implementation block
@property (nonatomic,readonly) unsigned long long outstandingTokensLowWaterMark;                   //@synthesize outstandingTokensLowWaterMark=_outstandingTokensLowWaterMark - In the implementation block
@property (nonatomic,readonly) unsigned long long maximumNumberOfMutationsToFetch;                 //@synthesize maximumNumberOfMutationsToFetch=_maximumNumberOfMutationsToFetch - In the implementation block
@property (assign) unsigned long long mode;                                                        //@synthesize mode=_mode - In the implementation block
@property (nonatomic,retain) PHPersistentChangeToken * lastReadToken;                              //@synthesize lastReadToken=_lastReadToken - In the implementation block
@property (nonatomic,readonly) id<PGGraphUpdateHealthRecording> updateHealthRecorder;              //@synthesize updateHealthRecorder=_updateHealthRecorder - In the implementation block
@property (assign) BOOL libraryBecameUnavailable;                                                  //@synthesize libraryBecameUnavailable=_libraryBecameUnavailable - In the implementation block
@property (nonatomic,readonly) NSString * clientIdentifier;                                        //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,readonly) PHPersistentChangeToken * currentToken; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)mode;
-(void)startListening;
-(void)stopListening;
-(PHPhotoLibrary *)photoLibrary;
-(void)persistToken:(id)arg1 ;
-(PGLibraryChangeListenerStateStore *)stateStore;
-(void)photoLibraryDidBecomeUnavailable:(id)arg1 ;
-(BOOL)libraryBecameUnavailable;
-(PHPersistentChangeToken *)lastReadToken;
-(unsigned long long)maximumNumberOfMutationsToFetch;
-(unsigned long long)outstandingTokensLowWaterMark;
-(void)setMode:(unsigned long long)arg1 ;
-(NSCountedSet *)outstandingChangeTokenCounts;
-(NSMutableOrderedSet *)outstandingChangeTokens;
-(NSHashTable *)changeConsumers;
-(void)photoLibraryDidChange:(id)arg1 ;
-(id)_consumer:(id)arg1 withChangeTokens:(id)arg2 processedChangeTokens:(id)arg3 consumedTokens:(BOOL)arg4 ;
-(void)_notifyConsumersWithChangesFromFromChangeToken:(id)arg1 ;
-(PHPersistentChangeToken *)currentToken;
-(void)unregisterChangeConsumer:(id)arg1 ;
-(unsigned long long)outstandingTokensHighWaterMark;
-(id)initWithPhotoLibrary:(id)arg1 clientIdentifier:(id)arg2 ;
-(void)setLastReadToken:(PHPersistentChangeToken *)arg1 ;
-(void)_clearConsumerTokenState;
-(BOOL)_distributeChangesInFetchResult:(id)arg1 ;
-(NSString *)clientIdentifier;
-(void)consumer:(id)arg1 didConsumeChangeTokens:(id)arg2 ;
-(void)consumer:(id)arg1 didIgnoreChangeTokens:(id)arg2 ;
-(void)setLibraryBecameUnavailable:(BOOL)arg1 ;
-(id<PGGraphUpdateHealthRecording>)updateHealthRecorder;
-(void)registerChangeConsumer:(id)arg1 ;
-(NSMapTable *)outstandingChangeTokensByConsumer;
@end

