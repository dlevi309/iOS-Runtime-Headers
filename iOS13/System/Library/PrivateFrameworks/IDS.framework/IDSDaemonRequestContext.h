/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
*/


@class IDSDaemonResponseHandler, IMTimer;

@interface IDSDaemonRequestContext : NSObject {

	IDSDaemonResponseHandler* _responseHandler;
	/*^block*/id _timeoutBlock;
	IMTimer* _systemTimer;

}
-(void)dealloc;
-(id)responseHandler;
-(id)initWithResponseHandler:(id)arg1 timeoutBlock:(/*^block*/id)arg2 systemTimer:(id)arg3 ;
-(/*^block*/id)timeoutBlock;
-(id)systemTimer;
-(void)killSystemTimer;
@end

