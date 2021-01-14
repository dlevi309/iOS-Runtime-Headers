/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
*/

#import <IDS/IDSDaemonListenerProtocol.h>

@class IDSDaemonRequestTimer, NSString;

@interface IDSReportiMessageSpamDaemonResponseListener : NSObject <IDSDaemonListenerProtocol> {

	IDSDaemonRequestTimer* _requestTimer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)iMessageReportSpamCheckUnknownResponseForRequestID:(id)arg1 status:(long long)arg2 abusive:(BOOL)arg3 delay:(double)arg4 withError:(id)arg5 ;
-(id)initWithRequestTimer:(id)arg1 ;
@end

