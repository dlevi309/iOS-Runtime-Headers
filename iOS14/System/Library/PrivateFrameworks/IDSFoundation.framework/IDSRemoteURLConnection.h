/*
* Generated on Thursday, January 14, 2021 at 2:22:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/

#import <libobjc.A.dylib/FTMessageDeliveryRemoteURLConnection.h>

@protocol OS_xpc_object;
@class NSString, NSURLRequest, NSObject;

@interface IDSRemoteURLConnection : NSObject <FTMessageDeliveryRemoteURLConnection> {

	NSURLRequest* _request;
	NSString* _bundleIdentifierForDataUsage;
	/*^block*/id _block;
	NSObject*<OS_xpc_object> _connection;
	BOOL _cancelled;
	BOOL _loading;
	BOOL _forceCellularIfPossible;
	int _retries;
	BOOL _requireIDSHost;
	BOOL _shouldUsePipelining;
	int _concurrentConnections;
	BOOL _disableKeepAlive;
	int _keepAliveWifi;
	int _keepAliveCell;
	BOOL _shouldReturnTimingData;

}

@property (assign) BOOL requireIDSHost; 
@property (assign) BOOL forceCellularIfPossible; 
@property (retain) NSString * bundleIdentifierForDataUsage; 
@property (assign) BOOL shouldUsePipelining; 
@property (assign) int concurrentConnections; 
@property (assign) BOOL disableKeepAlive; 
@property (assign) int keepAliveWifi; 
@property (assign) int keepAliveCell; 
@property (assign) BOOL shouldReturnTimingData; 
@property (retain) NSURLRequest * request; 
@property (copy) id block; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) BOOL requireIDSHost;                                  //@synthesize requireIDSHost=_requireIDSHost - In the implementation block
@property (assign) BOOL forceCellularIfPossible;                         //@synthesize forceCellularIfPossible=_forceCellularIfPossible - In the implementation block
@property (retain) NSString * bundleIdentifierForDataUsage;              //@synthesize bundleIdentifierForDataUsage=_bundleIdentifierForDataUsage - In the implementation block
@property (assign) BOOL shouldUsePipelining;                             //@synthesize shouldUsePipelining=_shouldUsePipelining - In the implementation block
@property (assign) int concurrentConnections;                            //@synthesize concurrentConnections=_concurrentConnections - In the implementation block
@property (assign) BOOL disableKeepAlive;                                //@synthesize disableKeepAlive=_disableKeepAlive - In the implementation block
@property (assign) int keepAliveWifi;                                    //@synthesize keepAliveWifi=_keepAliveWifi - In the implementation block
@property (assign) int keepAliveCell;                                    //@synthesize keepAliveCell=_keepAliveCell - In the implementation block
@property (assign) BOOL shouldReturnTimingData;                          //@synthesize shouldReturnTimingData=_shouldReturnTimingData - In the implementation block
@property (retain) NSURLRequest * request;                               //@synthesize request=_request - In the implementation block
@property (copy) id block;                                               //@synthesize block=_block - In the implementation block
+(id)alloc;
-(void)load;
-(BOOL)_connect;
-(void)setShouldUsePipelining:(BOOL)arg1 ;
-(id)block;
-(void)setRequireIDSHost:(BOOL)arg1 ;
-(BOOL)_disconnect;
-(void)setRequest:(NSURLRequest *)arg1 ;
-(void)setBlock:(id)arg1 ;
-(void)setConcurrentConnections:(int)arg1 ;
-(NSURLRequest *)request;
-(id)initWithURLRequest:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(NSString *)bundleIdentifierForDataUsage;
-(void)setBundleIdentifierForDataUsage:(NSString *)arg1 ;
-(void)setDisableKeepAlive:(BOOL)arg1 ;
-(int)keepAliveCell;
-(BOOL)requireIDSHost;
-(void)setShouldReturnTimingData:(BOOL)arg1 ;
-(void)setKeepAliveCell:(int)arg1 ;
-(id)initWithURLRequest:(id)arg1 completionBlockWithTimingData:(/*^block*/id)arg2 ;
-(void)setForceCellularIfPossible:(BOOL)arg1 ;
-(BOOL)shouldReturnTimingData;
-(void)setKeepAliveWifi:(int)arg1 ;
-(BOOL)disableKeepAlive;
-(BOOL)shouldUsePipelining;
-(void)_disconnected;
-(BOOL)forceCellularIfPossible;
-(int)keepAliveWifi;
-(void)cancel;
-(int)concurrentConnections;
-(void)dealloc;
@end

