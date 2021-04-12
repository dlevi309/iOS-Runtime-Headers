/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ApplePushService.framework/ApplePushService
*/

#import <CommonUtilities/CUTCheckpointTrace.h>

@class CUTCheckpointRange;

@interface APSIncomingMessageCheckpointTrace : CUTCheckpointTrace {

	CUTCheckpointRange* _sendToClient;
	CUTCheckpointRange* _storeInMessageStore;

}

@property (nonatomic,readonly) CUTCheckpointRange * sendToClient;                     //@synthesize sendToClient=_sendToClient - In the implementation block
@property (nonatomic,readonly) CUTCheckpointRange * storeInMessageStore;              //@synthesize storeInMessageStore=_storeInMessageStore - In the implementation block
-(id)init;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 name:(id)arg3 uniqueIdentifier:(id)arg4 ;
-(CUTCheckpointRange *)sendToClient;
-(CUTCheckpointRange *)storeInMessageStore;
@end

