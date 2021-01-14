/*
* Generated on Thursday, January 14, 2021 at 2:28:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
*/

#import <TouchRemote/TROperation.h>

@interface TRNetworkOperation : TROperation {

	/*^block*/id _sendingWiFiInfoHandler;

}

@property (nonatomic,copy) id sendingWiFiInfoHandler;              //@synthesize sendingWiFiInfoHandler=_sendingWiFiInfoHandler - In the implementation block
-(void)execute;
-(void)_handleResponse:(id)arg1 ;
-(void)_sendRequestWithSSID:(id)arg1 password:(id)arg2 ;
-(id)sendingWiFiInfoHandler;
-(void)setSendingWiFiInfoHandler:(id)arg1 ;
@end

