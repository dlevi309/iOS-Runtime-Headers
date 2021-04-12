/*
* Generated on Monday, March 1, 2021 at 2:35:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
*/

#import <CryptoTokenKit/CryptoTokenKit-Structs.h>
#import <CryptoTokenKit/TKTokenBaseContext.h>
#import <libobjc.A.dylib/TKTokenDriverProtocol.h>

@class TKTokenConfigurationConnection, TKTokenDriver, NSString;

@interface TKTokenDriverContext : TKTokenBaseContext <TKTokenDriverProtocol> {

	TKTokenConfigurationConnection* _configurationConnection;
	id _initialKeepAlive;
	TKTokenDriver* _driver;

}

@property (nonatomic,readonly) TKTokenDriver * driver;                                                //@synthesize driver=_driver - In the implementation block
@property (nonatomic,readonly) id<TKTokenDriverHostProtocol> host; 
@property (nonatomic,readonly) TKTokenConfigurationConnection * configurationConnection; 
@property (nonatomic,readonly) double idleTimeout; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<TKTokenDriverHostProtocol>)host;
-(TKTokenDriver *)driver;
-(void)setup;
-(double)idleTimeout;
-(TKTokenConfigurationConnection *)configurationConnection;
-(void)auditAuthOperation:(id)arg1 auditToken:(SCD_Struct_TK0)arg2 success:(BOOL)arg3 ;
-(void)acquireTokenWithInstanceID:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)acquireTokenWithSlot:(id)arg1 AID:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)configureWithReply:(/*^block*/id)arg1 ;
-(void)releaseTokenWithInstanceID:(id)arg1 reply:(/*^block*/id)arg2 ;
-(BOOL)startRequestWithError:(id*)arg1 ;
-(id)configurationForTokenID:(id)arg1 ;
@end

