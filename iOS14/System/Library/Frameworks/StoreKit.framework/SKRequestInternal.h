/*
* Generated on Thursday, January 14, 2021 at 2:24:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
*/


@protocol SKRequestDelegate;
@class SKPaymentQueueClient, SKXPCConnection;

@interface SKRequestInternal : NSObject {

	long long _backgroundTaskIdentifier;
	SKPaymentQueueClient* _client;
	SKXPCConnection* _connection;
	id<SKRequestDelegate> _delegate;
	long long _state;

}
-(id)init;
-(void)dealloc;
@end

