/*
* Generated on Monday, March 1, 2021 at 2:35:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
*/

#import <TouchRemote/TRConnection.h>

@class SFService;

@interface TRServerConnection : TRConnection {

	SFService* _service;

}

@property (assign,nonatomic,__weak) SFService * service;              //@synthesize service=_service - In the implementation block
-(void)invalidate;
-(SFService *)service;
-(void)sendResponse:(id)arg1 ;
-(void)sendEvent:(id)arg1 ;
-(void)setService:(SFService *)arg1 ;
-(id)initWithService:(id)arg1 ;
-(void)sendRequest:(id)arg1 ;
@end

