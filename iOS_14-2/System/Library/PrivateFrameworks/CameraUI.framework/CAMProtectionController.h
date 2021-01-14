/*
* Generated on Thursday, January 14, 2021 at 2:26:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


@protocol OS_dispatch_queue;
@class NSObject, NSCountedSet, NSMutableDictionary, NSMutableSet;

@interface CAMProtectionController : NSObject {

	int __nebulaDaemonWriteProtectionFileDescriptor;
	NSObject*<OS_dispatch_queue> __protectionQueue;
	NSCountedSet* __persistenceProtectionInflightRequestsByType;
	NSMutableDictionary* __persistenceProtectionFileDescriptorsByType;
	NSMutableDictionary* __burstProcessingProtectionFileDescriptorsByIdentifier;
	NSMutableSet* __nebulaDaemonWriteProtectionInflightIdentifiers;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _protectionQueue;                                            //@synthesize _protectionQueue=__protectionQueue - In the implementation block
@property (nonatomic,readonly) NSCountedSet * _persistenceProtectionInflightRequestsByType;                              //@synthesize _persistenceProtectionInflightRequestsByType=__persistenceProtectionInflightRequestsByType - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _persistenceProtectionFileDescriptorsByType;                        //@synthesize _persistenceProtectionFileDescriptorsByType=__persistenceProtectionFileDescriptorsByType - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _burstProcessingProtectionFileDescriptorsByIdentifier;              //@synthesize _burstProcessingProtectionFileDescriptorsByIdentifier=__burstProcessingProtectionFileDescriptorsByIdentifier - In the implementation block
@property (nonatomic,readonly) NSMutableSet * _nebulaDaemonWriteProtectionInflightIdentifiers;                           //@synthesize _nebulaDaemonWriteProtectionInflightIdentifiers=__nebulaDaemonWriteProtectionInflightIdentifiers - In the implementation block
@property (nonatomic,readonly) int _nebulaDaemonWriteProtectionFileDescriptor;                                           //@synthesize _nebulaDaemonWriteProtectionFileDescriptor=__nebulaDaemonWriteProtectionFileDescriptor - In the implementation block
+(id)pathForProtectNebulaDaemonWritesIndicator;
+(BOOL)isCameraPerformingHighPriorityDiskActivity;
-(NSMutableDictionary *)_persistenceProtectionFileDescriptorsByType;
-(id)_burstProcessingProtectionPathForIdentifier:(id)arg1 ;
-(id)init;
-(void)_protectionQueueAbortProtectionForProtectionTypes;
-(void)_protectionQueueRemovePersistenceProtectionIndicatorForType:(long long)arg1 unlinkFile:(BOOL)arg2 logIdentifier:(id)arg3 ;
-(NSCountedSet *)_persistenceProtectionInflightRequestsByType;
-(void)_protectionQueueAbortProtectionForNebulaDaemonWritesForReason:(id)arg1 ;
-(int)_persistenceProtectionFileDescriptorForType:(long long)arg1 ;
-(void)abortOutstandingNebulaDaemonWriteProtectionsForReason:(id)arg1 ;
-(int)_nebulaDaemonWriteProtectionFileDescriptor;
-(void)_addBurstProcessingProtectionIndicatorForIdentifier:(id)arg1 ;
-(void)_protectionQueueStartProtectingNebulaDaemonWritesForIdentifier:(id)arg1 ;
-(void)_protectionQueueStartProtectingPersistenceForType:(long long)arg1 logIdentifier:(id)arg2 ;
-(int)_burstProcessingProtectionFileDescriptorForIdentifier:(id)arg1 ;
-(long long)_persistenceProtectionTypeForRequest:(id)arg1 ;
-(void)stopProtectingNebulaDaemonWritesForIdentifier:(id)arg1 ;
-(id)_persistenceProtectionPathForType:(long long)arg1 ;
-(void)startProtectingNebulaDaemonWritesForIdentifier:(id)arg1 ;
-(void)stopProtectingBurstProcessingForIdentifier:(id)arg1 ;
-(void)_protectionQueueRemoveBurstProcessingProtectionIndicatorForIdentifier:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)_protectionQueue;
-(void)stopProtectingPersistenceForRequest:(id)arg1 ;
-(void)_protectionQueueStopProtectingNebulaDaemonWritesForIdentifier:(id)arg1 closeFile:(BOOL)arg2 ;
-(void)startProtectingPersistenceForRequest:(id)arg1 ;
-(NSMutableDictionary *)_burstProcessingProtectionFileDescriptorsByIdentifier;
-(NSMutableSet *)_nebulaDaemonWriteProtectionInflightIdentifiers;
-(void)_protectionQueueStopProtectingPersistenceForType:(long long)arg1 logIdentifier:(id)arg2 ;
-(void)startProtectingBurstProcessingForIdentifier:(id)arg1 ;
-(void)dealloc;
-(void)_protectionQueueAbortProtectionForBurstProcessing;
-(void)_addPersistenceProtectionIndicatorForType:(long long)arg1 logIdentifier:(id)arg2 ;
@end

