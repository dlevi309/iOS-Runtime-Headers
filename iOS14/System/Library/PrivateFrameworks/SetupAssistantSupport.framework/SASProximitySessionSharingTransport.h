/*
* Generated on Thursday, January 14, 2021 at 2:26:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)activate;
-(CUMessageSession *)messageSession;
-(void)setMessageSession:(CUMessageSession *)arg1 ;
-(id)initWithMessageSession:(id)arg1 ;
-(void)invalidate;
-(void)sendData:(id)arg1 response:(/*^block*/id)arg2 ;
-(void)setActionMessageSession:(CUMessageSession *)arg1 ;
-(CUMessageSession *)actionMessageSession;
@end

