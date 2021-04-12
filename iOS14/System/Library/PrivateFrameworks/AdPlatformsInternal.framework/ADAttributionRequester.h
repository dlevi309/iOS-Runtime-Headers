/*
* Generated on Thursday, January 14, 2021 at 2:27:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)attachDownloadDataTo:(id)arg1 forAdamID:(id)arg2 ;
-(void)setBundleID:(NSString *)arg1 ;
-(void)setTransactionToken:(NSNumber *)arg1 ;
-(void)makeAttributionRequestWithObject:(id)arg1 andHandler:(/*^block*/id)arg2 ;
-(BOOL)productionClient;
-(int)appRunState;
-(void)setStocksAdEnabled:(BOOL)arg1 ;
-(id)initWithConnection:(id)arg1 bundleID:(id)arg2 transactionID:(id)arg3 ;
-(void)setServerToTest:(long long)arg1 ;
-(void)requestAttributionDetailsWithBlock:(/*^block*/id)arg1 ;
-(NSXPCConnection *)connection;
-(BOOL)_isAppTrackingAuthorized;
-(NSString *)bundleID;
-(void)overrideAttributionData:(id)arg1 ;
-(void)requestAttributionDetails:(/*^block*/id)arg1 ;
-(void)attachSearchMetadataTo:(id)arg1 forAdamID:(id)arg2 ;
-(NSNumber *)transactionToken;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)beginAttributionRequest:(id)arg1 reason:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

