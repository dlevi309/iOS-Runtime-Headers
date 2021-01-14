/*
* Generated on Thursday, January 14, 2021 at 2:28:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
*/

#import <TouchRemote/TRConnection.h>

@class SFService;

@interface TRServerConnection : TRConnection {

	SFService* _service;

}

@property (assign,nonatomic,__weak) SFService * service;              //@synthesize service=_service - In the implementation block
-(void)sendResponse:(id)arg1 ;
-(void)sendRequest:(id)arg1 ;
-(id)initWithService:(id)arg1 ;
-(void)setService:(SFService *)arg1 ;
-(void)invalidate;
-(void)sendEvent:(id)arg1 ;
-(SFService *)service;
@end

