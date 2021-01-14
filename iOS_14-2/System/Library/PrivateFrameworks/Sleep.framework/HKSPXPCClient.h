/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sleep.framework/Sleep
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@protocol HKSPClient;
@class NSXPCConnection, NSString;

@interface HKSPXPCClient : NSObject <BSDescriptionProviding> {

	NSXPCConnection* _connection;
	id<HKSPClient> _clientLink;
	NSString* _clientIdentifier;

}

@property (copy) NSString * clientIdentifier;                             //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,readonly) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) id<HKSPClient> clientLink;                 //@synthesize clientLink=_clientLink - In the implementation block
@property (nonatomic,readonly) int processID; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)clientForConnection:(id)arg1 clientLink:(id)arg2 ;
+(id)clientForConnection:(id)arg1 clientIdentifierProvider:(id)arg2 clientLink:(id)arg3 ;
-(id)succinctDescription;
-(int)processID;
-(void)setClientIdentifier:(NSString *)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSString *)description;
-(NSXPCConnection *)connection;
-(unsigned long long)hash;
-(id<HKSPClient>)clientLink;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(NSString *)clientIdentifier;
-(id)succinctDescriptionBuilder;
-(id)initWithConnection:(id)arg1 clientIdentifierProvider:(id)arg2 clientLink:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
@end

