/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
*/


@class NSXPCListenerEndpoint, NSXPCConnection, NSNumber, NSString;

@interface TKClientToken : NSObject {

	NSXPCListenerEndpoint* _serverEndpoint;
	NSXPCConnection* _serverConnection;
	BOOL _namedConnection;
	NSNumber* _targetUID;
	long long _connectionIdentifier;
	NSString* _tokenID;
	NSXPCConnection* _tokenConnection;

}

@property (nonatomic,readonly) NSXPCConnection * serverConnection; 
@property (nonatomic,readonly) NSXPCConnection * tokenConnection;                          //@synthesize tokenConnection=_tokenConnection - In the implementation block
@property (nonatomic,readonly) NSString * tokenID;                                         //@synthesize tokenID=_tokenID - In the implementation block
@property (nonatomic,readonly) NSXPCListenerEndpoint * endpoint; 
@property (nonatomic,readonly) NSXPCListenerEndpoint * configurationEndpoint; 
@property (nonatomic,readonly) NSXPCListenerEndpoint * watcherEndpoint; 
-(NSString *)tokenID;
-(NSXPCConnection *)serverConnection;
-(NSXPCConnection *)tokenConnection;
-(id)sessionWithLAContext:(id)arg1 error:(id*)arg2 ;
-(id)withError:(id*)arg1 invoke:(/*^block*/id)arg2 ;
-(NSXPCListenerEndpoint *)endpoint;
-(id)initWithTokenID:(id)arg1 serverEndpoint:(id)arg2 targetUID:(id)arg3 ;
-(BOOL)ensureConnectionWithError:(id*)arg1 ;
-(NSXPCListenerEndpoint *)configurationEndpoint;
-(id)initWithTokenID:(id)arg1 ;
-(NSXPCListenerEndpoint *)watcherEndpoint;
-(void)dealloc;
@end

