/*
* Generated on Monday, March 1, 2021 at 2:34:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
*/

#import <DAEAS/ASTask.h>

@class NSSet;

@interface ASPingTask : ASTask {

	NSSet* _folders;
	NSSet* _oldFolders;
	int _seconds;
	int _oldSeconds;

}
-(void)finishWithError:(id)arg1 ;
-(double)timeoutInterval;
-(void)loadRequest:(id)arg1 ;
-(id)folders;
-(int)heartbeat;
-(id)requestBody;
-(void)requestCancelTaskWithReason:(int)arg1 ;
-(BOOL)shouldHoldPowerAssertion;
-(long long)taskStatusForExchangeStatus:(int)arg1 ;
-(int)commandCode;
-(BOOL)getTopLevelToken:(char*)arg1 outStatusCodePage:(char*)arg2 outStatusToken:(char*)arg3 ;
-(BOOL)processContext:(id)arg1 ;
-(BOOL)shouldStallAfterConnectionLost;
-(id)initWithHeartbeat:(int)arg1 folders:(id)arg2 oldHeartbeat:(int)arg3 oldFolders:(id)arg4 ;
-(int)interfaceBinding;
-(BOOL)shouldHandleServerErrorRetryLater;
-(BOOL)shouldReportTimeInNetwork;
@end

