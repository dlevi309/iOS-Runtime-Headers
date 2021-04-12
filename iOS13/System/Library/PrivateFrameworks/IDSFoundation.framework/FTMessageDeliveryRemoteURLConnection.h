/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/

@class NSString, NSURLRequest;


@protocol FTMessageDeliveryRemoteURLConnection <NSObject>
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
@required
-(void)load;
-(void)cancel;
-(id)block;
-(void)setRequest:(id)arg1;
-(NSURLRequest *)request;
-(void)setBlock:(/*^block*/id)arg1;
-(NSString *)bundleIdentifierForDataUsage;
-(BOOL)forceCellularIfPossible;
-(BOOL)requireIDSHost;
-(BOOL)shouldUsePipelining;
-(int)concurrentConnections;
-(BOOL)disableKeepAlive;
-(int)keepAliveWifi;
-(int)keepAliveCell;
-(BOOL)shouldReturnTimingData;
-(void)setForceCellularIfPossible:(BOOL)arg1;
-(void)setBundleIdentifierForDataUsage:(id)arg1;
-(void)setRequireIDSHost:(BOOL)arg1;
-(void)setShouldUsePipelining:(BOOL)arg1;
-(void)setConcurrentConnections:(int)arg1;
-(void)setDisableKeepAlive:(BOOL)arg1;
-(void)setKeepAliveWifi:(int)arg1;
-(void)setKeepAliveCell:(int)arg1;
-(void)setShouldReturnTimingData:(BOOL)arg1;

@end

