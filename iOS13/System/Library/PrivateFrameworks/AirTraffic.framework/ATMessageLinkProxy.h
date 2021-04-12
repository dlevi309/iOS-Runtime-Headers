/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
*/

#import <AirTraffic/ATMessageLink.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/ATMessageLinkObserver.h>
#import <libobjc.A.dylib/ATMessageLinkRequestHandler.h>

@class NSXPCConnection, NSXPCListenerEndpoint, NSHashTable, NSMutableDictionary, NSMutableSet, NSString;

@interface ATMessageLinkProxy : ATMessageLink <NSSecureCoding, ATMessageLinkObserver, ATMessageLinkRequestHandler> {

	NSXPCConnection* _connection;
	NSXPCListenerEndpoint* _endpoint;
	NSHashTable* _observers;
	NSMutableDictionary* _requestHandlers;
	NSMutableSet* _streams;
	BOOL _open;
	BOOL _initialized;
	NSString* _identifier;
	int _endpointType;

}

@property (assign,getter=isInitialized,nonatomic) BOOL initialized;              //@synthesize initialized=_initialized - In the implementation block
@property (assign,getter=isOpen,nonatomic) BOOL open;                            //@synthesize open=_open - In the implementation block
@property (assign,nonatomic) int endpointType;                                   //@synthesize endpointType=_endpointType - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                //@synthesize identifier=_identifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(void)addObserver:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(id)initWithEndpoint:(id)arg1 ;
-(BOOL)isOpen;
-(void)sendResponse:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(BOOL)isInitialized;
-(void)setOpen:(BOOL)arg1 ;
-(int)endpointType;
-(void)setInitialized:(BOOL)arg1 ;
-(void)setEndpointType:(int)arg1 ;
-(void)sendRequest:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)messageLinkWasOpened:(id)arg1 ;
-(void)messageLinkWasInitialized:(id)arg1 ;
-(void)messageLinkWasClosed:(id)arg1 ;
-(void)messageLink:(id)arg1 didReceiveRequest:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)addRequestHandler:(id)arg1 forDataClass:(id)arg2 ;
-(void)removeRequestHandlerForDataClass:(id)arg1 ;
@end

