/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCCoreConfigurationObserving.h>

@protocol FCCoreConfigurationManager;
@class FCEndpointConnection, FCAsyncSerialQueue, NSURL, NSString;

@interface FCNewsletterEndpointConnection : NSObject <FCCoreConfigurationObserving> {

	FCEndpointConnection* _endpointConnection;
	FCAsyncSerialQueue* _serialQueue;
	id<FCCoreConfigurationManager> _configurationManager;
	NSURL* _baseURL;

}

@property (nonatomic,retain) FCEndpointConnection * endpointConnection;                        //@synthesize endpointConnection=_endpointConnection - In the implementation block
@property (nonatomic,retain) FCAsyncSerialQueue * serialQueue;                                 //@synthesize serialQueue=_serialQueue - In the implementation block
@property (nonatomic,retain) id<FCCoreConfigurationManager> configurationManager;              //@synthesize configurationManager=_configurationManager - In the implementation block
@property (nonatomic,retain) NSURL * baseURL;                                                  //@synthesize baseURL=_baseURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithConfigurationManager:(id)arg1 ;
-(id<FCCoreConfigurationManager>)configurationManager;
-(FCEndpointConnection *)endpointConnection;
-(void)setConfigurationManager:(id<FCCoreConfigurationManager>)arg1 ;
-(NSURL *)baseURL;
-(FCAsyncSerialQueue *)serialQueue;
-(void)updateBaseURL:(id)arg1 ;
-(void)setSerialQueue:(FCAsyncSerialQueue *)arg1 ;
-(id)initWithEndpointConnection:(id)arg1 configurationManager:(id)arg2 ;
-(void)setEndpointConnection:(FCEndpointConnection *)arg1 ;
-(void)newsletterSubscribeTo:(id)arg1 callbackQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)submitPersonalizationVector:(id)arg1 withCallbackQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)getNewsletterSubscriptionWithCallbackQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)deletePersonalizationVectorWithCallbackQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)configurationManager:(id)arg1 configurationDidChange:(id)arg2 ;
-(void)setBaseURL:(NSURL *)arg1 ;
@end

