/*
* Generated on Thursday, January 14, 2021 at 2:22:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setShouldUsePipelining:(BOOL)arg1;
-(id)block;
-(void)setRequireIDSHost:(BOOL)arg1;
-(void)setRequest:(id)arg1;
-(void)setBlock:(/*^block*/id)arg1;
-(void)setConcurrentConnections:(int)arg1;
-(NSURLRequest *)request;
-(NSString *)bundleIdentifierForDataUsage;
-(void)setBundleIdentifierForDataUsage:(id)arg1;
-(void)setDisableKeepAlive:(BOOL)arg1;
-(int)keepAliveCell;
-(BOOL)requireIDSHost;
-(void)setShouldReturnTimingData:(BOOL)arg1;
-(void)setKeepAliveCell:(int)arg1;
-(void)setForceCellularIfPossible:(BOOL)arg1;
-(BOOL)shouldReturnTimingData;
-(void)setKeepAliveWifi:(int)arg1;
-(BOOL)disableKeepAlive;
-(BOOL)shouldUsePipelining;
-(BOOL)forceCellularIfPossible;
-(int)keepAliveWifi;
-(void)cancel;
-(int)concurrentConnections;

@end

