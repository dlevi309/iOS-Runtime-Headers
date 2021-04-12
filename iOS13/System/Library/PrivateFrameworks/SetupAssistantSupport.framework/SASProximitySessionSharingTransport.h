/*
* Generated on Monday, March 1, 2021 at 2:35:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantSupport.framework/SetupAssistantSupport
*/

#import <SetupAssistantSupport/SASProximitySessionTransport.h>

@class CUMessageSession;

@interface SASProximitySessionSharingTransport : SASProximitySessionTransport {

	CUMessageSession* _messageSession;
	CUMessageSession* _actionMessageSession;

}

@property (retain) CUMessageSession * messageSession;                    //@synthesize messageSession=_messageSession - In the implementation block
@property (retain) CUMessageSession * actionMessageSession;              //@synthesize actionMessageSession=_actionMessageSession - In the implementation block
-(void)invalidate;
-(void)activate;
-(id)initWithMessageSession:(id)arg1 ;
-(void)setMessageSession:(CUMessageSession *)arg1 ;
-(CUMessageSession *)messageSession;
-(void)sendData:(id)arg1 response:(/*^block*/id)arg2 ;
-(void)setActionMessageSession:(CUMessageSession *)arg1 ;
-(CUMessageSession *)actionMessageSession;
@end

