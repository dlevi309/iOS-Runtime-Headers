/*
* Generated on Thursday, January 14, 2021 at 2:27:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FMF.framework/FMF
*/


@class FMFMapCache, NSXPCConnection;

@interface FMFMapSession : NSObject {

	FMFMapCache* _mapCache;
	NSXPCConnection* _connection;

}

@property (nonatomic,retain) FMFMapCache * mapCache;                    //@synthesize mapCache=_mapCache - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
+(id)sharedInstance;
+(id)newConnection;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)setMapCache:(FMFMapCache *)arg1 ;
-(void)mapImageForRequest:(id)arg1 andCompletion:(/*^block*/id)arg2 ;
-(void)gridImageForScreenRatio:(double)arg1 andCompletion:(/*^block*/id)arg2 ;
-(void)noLocationImageForScreenRatio:(double)arg1 andCompletion:(/*^block*/id)arg2 ;
-(void)mapImageForLocation:(id)arg1 altitude:(double)arg2 pitch:(double)arg3 screenRatio:(double)arg4 andCompletion:(/*^block*/id)arg5 ;
-(FMFMapCache *)mapCache;
-(void)gridImageForWidth:(double)arg1 height:(double)arg2 cache:(BOOL)arg3 andCompletion:(/*^block*/id)arg4 ;
-(void)noLocationImageForWidth:(double)arg1 height:(double)arg2 cache:(BOOL)arg3 andCompletion:(/*^block*/id)arg4 ;
-(void)mapImageForLocation:(id)arg1 altitude:(double)arg2 pitch:(double)arg3 width:(double)arg4 height:(double)arg5 cache:(BOOL)arg6 andCompletion:(/*^block*/id)arg7 ;
@end

