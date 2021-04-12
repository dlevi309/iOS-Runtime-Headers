/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
*/

#import <BulletinDistributorCompanion/BLTSettingsSendSerializerPassthrough.h>

@protocol OS_dispatch_queue;
@class NSObject, BLTSendQueueSerializer, NSMutableArray, NSMutableDictionary;

@interface BLTSettingsSendSerializer : BLTSettingsSendSerializerPassthrough {

	NSObject*<OS_dispatch_queue> _queue;
	BLTSendQueueSerializer* _queueSerializer;
	NSMutableArray* _completionHandlers;
	NSMutableDictionary* _ackHandlers;
	/*^block*/id _acknowledgementBlock;
	unsigned long long _ackHandlerCount;
	unsigned long long _responseCount;

}
-(id)init;
-(void)handleFileURL:(id)arg1 ;
-(void)sendRequest:(id)arg1 type:(unsigned short)arg2 withTimeout:(id)arg3 withDescription:(id)arg4 onlyOneFor:(id)arg5 didSend:(/*^block*/id)arg6 andResponse:(/*^block*/id)arg7 spoolToFile:(BOOL)arg8 ;
-(void)sendNowWithSent:(/*^block*/id)arg1 withAcknowledgement:(/*^block*/id)arg2 withTimeout:(id)arg3 ;
@end

