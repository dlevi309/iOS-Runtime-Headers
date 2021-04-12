/*
* Generated on Thursday, January 14, 2021 at 2:23:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/

#import <libobjc.A.dylib/TUCallProviderManagerXPCClient.h>

@protocol TUCallProviderManagerXPCClient <NSObject>
@required
-(oneway void)updateProvidersByIdentifier:(id)arg1 localProvidersByIdentifier:(id)arg2 pairedHostDeviceProvidersByIdentifier:(id)arg3;

@end

#import <libobjc.A.dylib/TUCallProviderManagerDataSource.h>

@protocol TUCallProviderManagerDataSourceDelegate, OS_dispatch_queue;
@class NSDictionary, NSObject, NSXPCConnection, NSString;

@interface TUCallProviderManagerXPCClient : NSObject <TUCallProviderManagerXPCClient, TUCallProviderManagerDataSource> {

	BOOL _requestedInitialState;
	int _token;
	id<TUCallProviderManagerDataSourceDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;
	NSXPCConnection* _xpcConnection;
	NSDictionary* _providersByIdentifier;
	NSDictionary* _localProvidersByIdentifier;
	NSDictionary* _pairedHostDeviceProvidersByIdentifier;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                       //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSXPCConnection * xpcConnection;                                          //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (assign,nonatomic) int token;                                                                //@synthesize token=_token - In the implementation block
@property (assign,nonatomic) BOOL requestedInitialState;                                               //@synthesize requestedInitialState=_requestedInitialState - In the implementation block
@property (nonatomic,copy) NSDictionary * providersByIdentifier;                                       //@synthesize providersByIdentifier=_providersByIdentifier - In the implementation block
@property (nonatomic,copy) NSDictionary * localProvidersByIdentifier;                                  //@synthesize localProvidersByIdentifier=_localProvidersByIdentifier - In the implementation block
@property (nonatomic,copy) NSDictionary * pairedHostDeviceProvidersByIdentifier;                       //@synthesize pairedHostDeviceProvidersByIdentifier=_pairedHostDeviceProvidersByIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL currentProcessCanAccessInitialState; 
@property (assign,nonatomic,__weak) id<TUCallProviderManagerDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)callProviderManagerClientXPCInterface;
+(id)callProviderManagerServerXPCInterface;
+(id)callProviderManagerAllowedClasses;
+(void)setAsynchronousServer:(id)arg1 ;
+(void)setSynchronousServer:(id)arg1 ;
+(id)synchronousServer;
+(id)asynchronousServer;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(NSXPCConnection *)xpcConnection;
-(id)synchronousServerWithErrorHandler:(/*^block*/id)arg1 ;
-(id)init;
-(id<TUCallProviderManagerDataSourceDelegate>)delegate;
-(void)setPairedHostDeviceProvidersByIdentifier:(NSDictionary *)arg1 ;
-(NSDictionary *)pairedHostDeviceProvidersByIdentifier;
-(void)setLocalProvidersByIdentifier:(NSDictionary *)arg1 ;
-(BOOL)requestedInitialState;
-(void)setProvidersByIdentifier:(NSDictionary *)arg1 ;
-(oneway void)updateProvidersByIdentifier:(id)arg1 localProvidersByIdentifier:(id)arg2 pairedHostDeviceProvidersByIdentifier:(id)arg3 ;
-(void)setDelegate:(id<TUCallProviderManagerDataSourceDelegate>)arg1 ;
-(id)serverWithErrorHandler:(/*^block*/id)arg1 ;
-(id)server;
-(void)setToken:(int)arg1 ;
-(BOOL)currentProcessCanAccessInitialState;
-(NSDictionary *)localProvidersByIdentifier;
-(BOOL)openURL:(id)arg1 isSensitive:(BOOL)arg2 error:(id*)arg3 ;
-(void)blockUntilInitialStateReceived;
-(void)invalidate;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSDictionary *)providersByIdentifier;
-(int)token;
-(void)launchAppForDialRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)donateUserIntentForProviderWithIdentifier:(id)arg1 ;
-(void)_requestInitialState;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_updateProvidersByIdentifier:(id)arg1 localProvidersByIdentifier:(id)arg2 pairedHostDeviceProvidersByIdentifier:(id)arg3 ;
-(void)setRequestedInitialState:(BOOL)arg1 ;
-(void)dealloc;
@end

