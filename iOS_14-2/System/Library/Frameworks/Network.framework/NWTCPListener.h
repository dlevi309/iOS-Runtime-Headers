/*
* Generated on Thursday, January 14, 2021 at 2:22:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Network.framework/Network
*/


@protocol OS_nw_listener, NWTCPListenerDelegate;
@class NWEndpoint, NSError, NSObject, NWParameters, NSString;

@interface NWTCPListener : NSObject {

	NWEndpoint* _localEndpoint;
	NSError* _error;
	NSObject*<OS_nw_listener> _internalListener;
	NWParameters* _parameters;
	NWEndpoint* _endpoint;
	NSString* _launchdKey;
	id<NWTCPListenerDelegate> _delegate;

}

@property (retain) NSObject*<OS_nw_listener> internalListener;              //@synthesize internalListener=_internalListener - In the implementation block
@property (retain) NWParameters * parameters;                               //@synthesize parameters=_parameters - In the implementation block
@property (retain) NWEndpoint * endpoint;                                   //@synthesize endpoint=_endpoint - In the implementation block
@property (retain) NSString * launchdKey;                                   //@synthesize launchdKey=_launchdKey - In the implementation block
@property (__weak) id<NWTCPListenerDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (retain) NSError * error;                                         //@synthesize error=_error - In the implementation block
@property (retain) NWEndpoint * localEndpoint;                              //@synthesize localEndpoint=_localEndpoint - In the implementation block
-(NWParameters *)parameters;
-(void)setParameters:(NWParameters *)arg1 ;
-(void)handleNewConnection:(id)arg1 ;
-(id<NWTCPListenerDelegate>)delegate;
-(void)handleError:(id)arg1 ;
-(void)setEndpoint:(NWEndpoint *)arg1 ;
-(NWEndpoint *)endpoint;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(void)setDelegate:(id<NWTCPListenerDelegate>)arg1 ;
-(NSObject*<OS_nw_listener>)internalListener;
-(void)setInternalListener:(NSObject*<OS_nw_listener>)arg1 ;
-(id)initWithParameters:(id)arg1 delegate:(id)arg2 ;
-(NWEndpoint *)localEndpoint;
-(id)initWithParameters:(id)arg1 delegate:(id)arg2 launchdKey:(id)arg3 bonjourEndpoint:(id)arg4 ;
-(id)initWithLaunchdKey:(id)arg1 parameters:(id)arg2 delegate:(id)arg3 ;
-(id)initWithBonjourServiceEndpoint:(id)arg1 parameters:(id)arg2 delegate:(id)arg3 ;
-(NSString *)launchdKey;
-(void)setLaunchdKey:(NSString *)arg1 ;
-(void)setLocalEndpoint:(NWEndpoint *)arg1 ;
-(void)cancel;
-(void)startInternal;
@end

