/*
* Generated on Thursday, January 14, 2021 at 2:25:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)delegate;
-(void)dealloc;
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

