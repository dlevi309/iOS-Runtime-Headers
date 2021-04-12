/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setup;
-(id<TKTokenDriverHostProtocol>)host;
-(BOOL)startRequestWithError:(id*)arg1 ;
-(void)acquireTokenWithInstanceID:(id)arg1 reply:(/*^block*/id)arg2 ;
-(TKTokenConfigurationConnection *)configurationConnection;
-(TKTokenDriver *)driver;
-(void)configureWithReply:(/*^block*/id)arg1 ;
-(void)auditAuthOperation:(id)arg1 auditToken:(SCD_Struct_TK0)arg2 success:(BOOL)arg3 ;
-(void)releaseTokenWithInstanceID:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)configurationForTokenID:(id)arg1 ;
-(double)idleTimeout;
-(void)acquireTokenWithSlot:(id)arg1 AID:(id)arg2 reply:(/*^block*/id)arg3 ;
@end

