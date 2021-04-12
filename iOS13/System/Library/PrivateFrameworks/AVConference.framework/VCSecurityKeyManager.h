/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@protocol OS_dispatch_queue;
#import <AVConference/AVConference-Structs.h>
@class NSMutableDictionary, VCMasterKeyIndex, NSObject, NSMutableArray;

@interface VCSecurityKeyManager : NSObject {

	NSMutableDictionary* _sendKeys;
	NSMutableDictionary* _receiveKeys;
	VCMasterKeyIndex* _latestSendKeyIndex;
	VCMasterKeyIndex* _latestReceiveKeyIndex;
	VCMasterKeyIndex* _keyIndexNotReceived;
	BOOL _isSendKeysCleanUpPending;
	BOOL _isReceiveKeysCleanUpPending;
	id _delegate;
	NSObject*<OS_dispatch_queue> _keyManagerQueue;
	BOOL _isKeyIndexNotReceivedReported;
	double _lastKeyIndexNotReceived;
	id _reportingAgentWeak;
	NSMutableArray* _unknownKeyIndexList;

}
-(void)dealloc;
-(id)delegate;
-(opaqueRTCReportingRef)reportingAgent;
-(id)initWithDelegate:(id)arg1 reportingAgent:(opaqueRTCReportingRef)arg2 ;
-(BOOL)addSecurityKeyMaterial:(id)arg1 ;
-(void)pruneSendKeyMaterialWithDelay:(double)arg1 ;
-(void)pruneRecvKeyMaterialWithDelay:(double)arg1 ;
-(id)getRecvKeyMaterialWithIndex:(id)arg1 ;
-(id)getSendKeyMaterialWithIndex:(id)arg1 ;
-(id)getLatestSendKeyMaterial;
-(id)getLatestRecvKeyMaterial;
@end

