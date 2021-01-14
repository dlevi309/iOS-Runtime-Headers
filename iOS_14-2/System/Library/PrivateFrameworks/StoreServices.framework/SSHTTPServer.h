/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/SSHTTPServerRequestHandlerDelegate.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSMutableArray, NSObject, NSRunLoop;

@interface SSHTTPServer : NSObject <SSHTTPServerRequestHandlerDelegate> {

	NSMutableDictionary* _definedResponses;
	NSMutableArray* _incomingRequests;
	NSObject*<OS_dispatch_queue> _propertyQueue;
	CFSocketRef _socket;
	NSRunLoop* _runLoop;
	BOOL _allowsSecure;
	BOOL _verbose;
	short _port;
	int _downloadSpeed;
	int _state;
	long long _responsesDelivered;

}

@property (nonatomic,readonly) BOOL allowsSecure;                         //@synthesize allowsSecure=_allowsSecure - In the implementation block
@property (assign,nonatomic) int downloadSpeed;                           //@synthesize downloadSpeed=_downloadSpeed - In the implementation block
@property (assign,nonatomic) short port;                                  //@synthesize port=_port - In the implementation block
@property (nonatomic,readonly) long long responsesDelivered;              //@synthesize responsesDelivered=_responsesDelivered - In the implementation block
@property (nonatomic,readonly) int state;                                 //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) BOOL verbose;                                //@synthesize verbose=_verbose - In the implementation block
+(BOOL)_isPortOccupied:(short)arg1 ;
+(id)sharedServer;
-(void)setPort:(short)arg1 ;
-(short)port;
-(void)setVerbose:(BOOL)arg1 ;
-(void)setDownloadSpeed:(int)arg1 ;
-(BOOL)allowsSecure;
-(/*^block*/id)responseBlockForPath:(id)arg1 ;
-(long long)responsesDelivered;
-(id)serverLocalhostURL;
-(void)setResponseForPath:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_handleConnectWithType:(unsigned long long)arg1 handle:(int)arg2 ;
-(id)init;
-(int)downloadSpeed;
-(BOOL)start;
-(void)stop;
-(id)serverURL;
-(BOOL)verbose;
-(id)_ipAddress;
-(int)state;
-(void)requestDidFinish:(id)arg1 ;
-(void)dealloc;
@end

