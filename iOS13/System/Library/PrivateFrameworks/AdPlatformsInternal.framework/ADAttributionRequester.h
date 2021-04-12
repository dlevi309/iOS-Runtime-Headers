/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AdPlatformsInternal.framework/AdPlatformsInternal
*/

#import <libobjc.A.dylib/ADAttribution_XPC.h>

@class NSXPCConnection, NSNumber, NSString;

@interface ADAttributionRequester : NSObject <ADAttribution_XPC> {

	NSXPCConnection* _connection;
	NSNumber* _transactionToken;
	NSString* _bundleID;

}

@property (nonatomic,retain) NSString * bundleID;                       //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSNumber * transactionToken;               //@synthesize transactionToken=_transactionToken - In the implementation block
-(NSXPCConnection *)connection;
-(NSString *)bundleID;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)setBundleID:(NSString *)arg1 ;
-(NSNumber *)transactionToken;
-(void)setTransactionToken:(NSNumber *)arg1 ;
-(void)requestAttributionDetailsWithBlock:(/*^block*/id)arg1 ;
-(void)setStocksAdEnabled:(BOOL)arg1 ;
-(id)initWithConnection:(id)arg1 bundleID:(id)arg2 transactionID:(id)arg3 ;
-(int)appRunState;
-(void)overrideAttributionData:(id)arg1 ;
-(BOOL)productionClient;
-(void)makeAttributionRequestWithObject:(id)arg1 andHandler:(/*^block*/id)arg2 ;
-(void)attachSearchMetadataTo:(id)arg1 forAdamID:(id)arg2 ;
-(void)attachDownloadDataTo:(id)arg1 forAdamID:(id)arg2 ;
-(void)requestAttributionDetails:(/*^block*/id)arg1 ;
-(void)beginAttributionRequest:(id)arg1 reason:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

