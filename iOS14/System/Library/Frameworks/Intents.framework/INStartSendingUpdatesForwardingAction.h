/*
* Generated on Thursday, January 14, 2021 at 2:21:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/INIntentForwardingAction.h>
#import <libobjc.A.dylib/BSXPCCoding.h>

@protocol INIntentResponseObserver;
@class NSXPCConnection, NSXPCListenerEndpoint, NSString;

@interface INStartSendingUpdatesForwardingAction : INIntentForwardingAction <BSXPCCoding> {

	id<INIntentResponseObserver> _observer;
	NSXPCConnection* _connection;
	NSXPCListenerEndpoint* _endpoint;

}

@property (nonatomic,retain) NSXPCConnection * connection;                         //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) NSXPCListenerEndpoint * endpoint;                   //@synthesize endpoint=_endpoint - In the implementation block
@property (nonatomic,readonly) id<INIntentResponseObserver> observer;              //@synthesize observer=_observer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)responseClass;
-(id<INIntentResponseObserver>)observer;
-(void)executeRemotelyWithVendorRemote:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)executeLocallyWithIntentDeliverer:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSXPCListenerEndpoint *)endpoint;
-(NSXPCConnection *)connection;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(id)initWithIntent:(id)arg1 endpointProvider:(id)arg2 observer:(id)arg3 ;
-(id)initWithIntent:(id)arg1 endpoint:(id)arg2 observer:(id)arg3 ;
@end

