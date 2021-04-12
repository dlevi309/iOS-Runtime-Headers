/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP
*/


@protocol CDPStateUIProvider, CDPAuthProvider;
@class CDPContext, CDPDaemonConnection, CDPStateUIProviderProxy;

@interface CDPController : NSObject {

	CDPContext* _context;
	id<CDPStateUIProvider> _uiProvider;
	id<CDPAuthProvider> _authProvider;
	CDPDaemonConnection* _daemonConn;
	CDPStateUIProviderProxy* _uiProviderProxy;

}

@property (nonatomic,retain) CDPDaemonConnection * daemonConn;                       //@synthesize daemonConn=_daemonConn - In the implementation block
@property (nonatomic,retain) CDPStateUIProviderProxy * uiProviderProxy;              //@synthesize uiProviderProxy=_uiProviderProxy - In the implementation block
@property (nonatomic,readonly) CDPContext * context;                                 //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) id<CDPStateUIProvider> uiProvider;                      //@synthesize uiProvider=_uiProvider - In the implementation block
@property (nonatomic,retain) id<CDPAuthProvider> authProvider;                       //@synthesize authProvider=_authProvider - In the implementation block
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(CDPContext *)context;
-(id)initWithContext:(id)arg1 ;
-(void)setUiProvider:(id<CDPStateUIProvider>)arg1 ;
-(void)setAuthProvider:(id<CDPAuthProvider>)arg1 ;
-(id<CDPStateUIProvider>)uiProvider;
-(CDPDaemonConnection *)daemonConn;
-(CDPStateUIProviderProxy *)uiProviderProxy;
-(id<CDPAuthProvider>)authProvider;
-(id)initWithXpcEndpoint:(id)arg1 context:(id)arg2 ;
-(void)setDaemonConn:(CDPDaemonConnection *)arg1 ;
-(void)setUiProviderProxy:(CDPStateUIProviderProxy *)arg1 ;
@end

