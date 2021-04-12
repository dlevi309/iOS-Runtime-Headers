/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
*/


@class IDSDaemonResponseHandler, IMTimer;

@interface IDSDaemonRequestContext : NSObject {

	IDSDaemonResponseHandler* _responseHandler;
	/*^block*/id _timeoutBlock;
	IMTimer* _systemTimer;

}
-(id)systemTimer;
-(/*^block*/id)timeoutBlock;
-(void)killSystemTimer;
-(id)initWithResponseHandler:(id)arg1 timeoutBlock:(/*^block*/id)arg2 systemTimer:(id)arg3 ;
-(id)responseHandler;
-(void)dealloc;
@end

