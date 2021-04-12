/*
* Generated on Monday, March 1, 2021 at 2:34:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
*/


@protocol OS_dispatch_queue;
@class NSXPCConnection, NSDate, NSObject;

@interface BCSBusinessQueryService : NSObject {

	NSXPCConnection* _connection;
	NSDate* _lastTimeoutDate;
	NSObject*<OS_dispatch_queue> _serialDispatchQueue;

}

@property (retain) NSXPCConnection * connection;                                            //@synthesize connection=_connection - In the implementation block
@property (retain) NSDate * lastTimeoutDate;                                                //@synthesize lastTimeoutDate=_lastTimeoutDate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialDispatchQueue;              //@synthesize serialDispatchQueue=_serialDispatchQueue - In the implementation block
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(NSObject*<OS_dispatch_queue>)serialDispatchQueue;
-(void)warmCacheIfNecessaryForPhoneNumbers:(id)arg1 ;
-(id)businessItemForPhoneNumber:(id)arg1 isMessageable:(BOOL*)arg2 isChatSuggestVisible:(BOOL*)arg3 error:(id*)arg4 ;
-(void)_deleteInMemoryCache;
-(NSDate *)lastTimeoutDate;
-(void)_fetchBusinessItemWithDetailsForPhoneNumber:(id)arg1 forClientBundleID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setLastTimeoutDate:(NSDate *)arg1 ;
-(void)fetchBusinessItemWithPhoneNumber:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchBusinessItemWithDetailsForPhoneNumber:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchBusinessItemWithBizID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchIsBusinessPhoneNumber:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchSquareIconDataForBusinessItem:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setSerialDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

