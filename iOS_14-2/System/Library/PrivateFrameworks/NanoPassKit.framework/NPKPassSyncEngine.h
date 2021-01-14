/*
* Generated on Thursday, January 14, 2021 at 2:28:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol NPKPassSyncEngineDelegate, NPKPassSyncEngineDataSource;
@class NPKPassSyncState, NPKPassSyncChange, NSString;

@interface NPKPassSyncEngine : NSObject <NSSecureCoding> {

	BOOL _requireAppleAccountForPaymentPasses;
	NPKPassSyncState* _libraryState;
	NPKPassSyncState* _backupState;
	NPKPassSyncState* _reconciledState;
	NPKPassSyncState* _candidateState;
	unsigned long long _engineRole;
	id<NPKPassSyncEngineDelegate> _delegate;
	id<NPKPassSyncEngineDataSource> _dataSource;
	NPKPassSyncChange* _candidateChange;
	NPKPassSyncChange* _processingChange;

}

@property (assign,nonatomic) BOOL requireAppleAccountForPaymentPasses;                       //@synthesize requireAppleAccountForPaymentPasses=_requireAppleAccountForPaymentPasses - In the implementation block
@property (nonatomic,retain) NPKPassSyncState * backupState;                                 //@synthesize backupState=_backupState - In the implementation block
@property (assign,nonatomic,__weak) id<NPKPassSyncEngineDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<NPKPassSyncEngineDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) NPKPassSyncState * libraryState;                                //@synthesize libraryState=_libraryState - In the implementation block
@property (nonatomic,retain) NPKPassSyncState * reconciledState;                             //@synthesize reconciledState=_reconciledState - In the implementation block
@property (nonatomic,retain) NPKPassSyncState * candidateState;                              //@synthesize candidateState=_candidateState - In the implementation block
@property (nonatomic,retain) NPKPassSyncChange * candidateChange;                            //@synthesize candidateChange=_candidateChange - In the implementation block
@property (nonatomic,retain) NPKPassSyncChange * processingChange;                           //@synthesize processingChange=_processingChange - In the implementation block
@property (nonatomic,readonly) NSString * engineName; 
@property (nonatomic,readonly) unsigned long long engineRole;                                //@synthesize engineRole=_engineRole - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setBackupState:(NPKPassSyncState *)arg1 ;
-(id<NPKPassSyncEngineDelegate>)delegate;
-(void)setLibraryState:(NPKPassSyncState *)arg1 ;
-(NPKPassSyncState *)libraryState;
-(void)encodeWithCoder:(id)arg1 ;
-(id<NPKPassSyncEngineDataSource>)dataSource;
-(void)setDelegate:(id<NPKPassSyncEngineDelegate>)arg1 ;
-(void)setDataSource:(id<NPKPassSyncEngineDataSource>)arg1 ;
-(NPKPassSyncState *)backupState;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithRole:(unsigned long long)arg1 ;
-(void)_sendStateChange:(id)arg1 ;
-(void)handleStateChange:(id)arg1 ;
-(void)handleStateChangeProcessedWithUUID:(id)arg1 changeAccepted:(BOOL)arg2 fullPassRequired:(BOOL)arg3 ;
-(void)handleReconciledStateUnrecognizedWithHash:(id)arg1 passSyncState:(id)arg2 ;
-(void)handleProposedReconciledState:(id)arg1 ;
-(void)handleReconciledStateAcceptedWithHash:(id)arg1 ;
-(NPKPassSyncState *)reconciledState;
-(NPKPassSyncChange *)processingChange;
-(NPKPassSyncChange *)candidateChange;
-(void)syncIfNecessary;
-(NSString *)engineName;
-(void)_sendNextStateChange;
-(void)setReconciledState:(NPKPassSyncState *)arg1 ;
-(void)_unexpectedEventOccurred;
-(void)_sendStateChangeProcessedWithUUID:(id)arg1 changeAccepted:(BOOL)arg2 fullPassRequired:(BOOL)arg3 ;
-(void)_requestAddPassData:(id)arg1 forSyncStateItem:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_requestUpdatePassData:(id)arg1 forSyncStateItem:(id)arg2 baseManifestHashForPartialUpdate:(id)arg3 remoteAssetsForPartialUpdate:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_requestRemovePassWithUniqueID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_shouldProcessAddOrUpdateChangeOfType:(unsigned long long)arg1 changeSyncStateItem:(id)arg2 librarySyncStateItem:(id)arg3 reconciledSyncStateItem:(id)arg4 candidateChange:(id)arg5 shouldApplyToPassLibrary:(BOOL*)arg6 shouldApplyToReconciledState:(BOOL*)arg7 ;
-(void)setProcessingChange:(NPKPassSyncChange *)arg1 ;
-(void)_finishedProcessingChange:(id)arg1 ;
-(void)_sendReconciledStateUnrecognizedWithHash:(id)arg1 currentPassSyncState:(id)arg2 ;
-(void)setCandidateChange:(NPKPassSyncChange *)arg1 ;
-(void)_receivedStateChangeProcessed:(id)arg1 changeAccepted:(BOOL)arg2 ;
-(void)setCandidateState:(NPKPassSyncState *)arg1 ;
-(void)_sendProposedReconciledState:(id)arg1 ;
-(NPKPassSyncState *)candidateState;
-(void)_sendReconciledStateAcceptedWithHash:(id)arg1 ;
-(void)_engineStateChanged;
-(unsigned long long)engineRole;
-(BOOL)requireAppleAccountForPaymentPasses;
-(void)setRequireAppleAccountForPaymentPasses:(BOOL)arg1 ;
@end

