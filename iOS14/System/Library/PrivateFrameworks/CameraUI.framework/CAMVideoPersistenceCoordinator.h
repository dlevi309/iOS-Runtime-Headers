/*
* Generated on Thursday, January 14, 2021 at 2:26:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


@protocol CAMVideoPersistenceCoordinationDelegate;
@class NSString, NSMutableDictionary;

@interface CAMVideoPersistenceCoordinator : NSObject {

	id<CAMVideoPersistenceCoordinationDelegate> _delegate;
	NSString* _loggingIdentifier;
	NSMutableDictionary* __receivedCoordinationInfos;
	NSMutableDictionary* __pendingLocalPersistenceResults;
	NSString* __loggingPrefix;

}

@property (nonatomic,readonly) NSMutableDictionary * _receivedCoordinationInfos;                         //@synthesize _receivedCoordinationInfos=__receivedCoordinationInfos - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _pendingLocalPersistenceResults;                    //@synthesize _pendingLocalPersistenceResults=__pendingLocalPersistenceResults - In the implementation block
@property (nonatomic,readonly) NSString * _loggingPrefix;                                                //@synthesize _loggingPrefix=__loggingPrefix - In the implementation block
@property (nonatomic,__weak,readonly) id<CAMVideoPersistenceCoordinationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSString * loggingIdentifier;                                        //@synthesize loggingIdentifier=_loggingIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasReceivedAllExpectedResponses; 
-(id)initWithDelegate:(id)arg1 loggingIdentifier:(id)arg2 ;
-(id<CAMVideoPersistenceCoordinationDelegate>)delegate;
-(id)_debugStringForUnreceivedResultSpecifiersFromExpectedResultSpecifiers:(id)arg1 receivedCoordinationInfos:(id)arg2 ;
-(void)_dispatchRemotePersistenceIfPossibleForPairWithOriginalResultSpecifiers:(unsigned long long)arg1 overCaptureResultSpecifiers:(unsigned long long)arg2 request:(id)arg3 shouldPersistAsSingleAsset:(BOOL)arg4 ;
-(NSMutableDictionary *)_pendingLocalPersistenceResults;
-(void)updateForTimeoutTimerFiredForCoordinationInfo:(id)arg1 request:(id)arg2 ;
-(unsigned)_powerAssertionReasonForResultSpecifiers:(unsigned long long)arg1 ;
-(NSString *)_loggingPrefix;
-(NSString *)loggingIdentifier;
-(void)updateForCoordinationInfo:(id)arg1 localPersistenceResult:(id)arg2 request:(id)arg3 ;
-(NSMutableDictionary *)_receivedCoordinationInfos;
-(BOOL)hasReceivedAllExpectedResponses;
-(void)_dispatchRemotePersistenceIfPossibleForResultSpecifiers:(unsigned long long)arg1 request:(id)arg2 ;
@end

