/*
* Generated on Monday, March 1, 2021 at 2:33:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


@protocol CAMStillImagePersistenceCoordinatorDelegate;
@class NSMutableDictionary;

@interface CAMStillImagePersistenceCoordinator : NSObject {

	id<CAMStillImagePersistenceCoordinatorDelegate> _delegate;
	NSMutableDictionary* __receivedCoordinationInfos;
	NSMutableDictionary* __pendingLocalPersistenceResults;

}

@property (nonatomic,readonly) NSMutableDictionary * _receivedCoordinationInfos;                             //@synthesize _receivedCoordinationInfos=__receivedCoordinationInfos - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _pendingLocalPersistenceResults;                        //@synthesize _pendingLocalPersistenceResults=__pendingLocalPersistenceResults - In the implementation block
@property (nonatomic,__weak,readonly) id<CAMStillImagePersistenceCoordinatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL hasReceivedAllExpectedResponses; 
-(id<CAMStillImagePersistenceCoordinatorDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 ;
-(NSMutableDictionary *)_receivedCoordinationInfos;
-(NSMutableDictionary *)_pendingLocalPersistenceResults;
-(void)_dispatchRemotePersistenceIfPossibleForPairWithOriginalResultSpecifiers:(unsigned long long)arg1 overCaptureResultSpecifiers:(unsigned long long)arg2 request:(id)arg3 identifier:(id)arg4 shouldPersistAsSingleAsset:(BOOL)arg5 ;
-(void)_dispatchRemotePersistenceIfPossibleForPairWithOriginalResultSpecifiers:(unsigned long long)arg1 processedResultSpecifiers:(unsigned long long)arg2 request:(id)arg3 identifier:(id)arg4 shouldPersistAsSingleAsset:(BOOL)arg5 ;
-(void)_dispatchRemotePersistenceIfPossibleForResultSpecifiers:(unsigned long long)arg1 request:(id)arg2 ;
-(id)_debugStringForUnreceivedResultSpecifiersFromExpectedResultSpecifiers:(id)arg1 receivedCoordinationInfos:(id)arg2 ;
-(unsigned)_powerAssertionReasonForResultSpecifiers:(unsigned long long)arg1 ;
-(void)updateForCoordinationInfo:(id)arg1 localPersistenceResult:(id)arg2 request:(id)arg3 ;
-(void)updateForTimeoutTimerFiredForCoordinationInfo:(id)arg1 request:(id)arg2 ;
-(BOOL)hasReceivedAllExpectedResponses;
@end

