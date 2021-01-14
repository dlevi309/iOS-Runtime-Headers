/*
* Generated on Thursday, January 14, 2021 at 2:21:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCCoreConfigurationObserving.h>

@protocol FCCoreConfigurationManager;
@class NSURL, FCEndpointConnection, FCAsyncSerialQueue, NSString;

@interface FCClientEndpointConnection : NSObject <FCCoreConfigurationObserving> {

	NSURL* _baseURL;
	FCEndpointConnection* _endpointConnection;
	id<FCCoreConfigurationManager> _configurationManager;
	FCAsyncSerialQueue* _serialQueue;

}

@property (nonatomic,retain) NSURL * baseURL;                                                  //@synthesize baseURL=_baseURL - In the implementation block
@property (nonatomic,retain) FCEndpointConnection * endpointConnection;                        //@synthesize endpointConnection=_endpointConnection - In the implementation block
@property (nonatomic,retain) id<FCCoreConfigurationManager> configurationManager;              //@synthesize configurationManager=_configurationManager - In the implementation block
@property (nonatomic,retain) FCAsyncSerialQueue * serialQueue;                                 //@synthesize serialQueue=_serialQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithConfigurationManager:(id)arg1 ;
-(id<FCCoreConfigurationManager>)configurationManager;
-(FCEndpointConnection *)endpointConnection;
-(void)setConfigurationManager:(id<FCCoreConfigurationManager>)arg1 ;
-(NSURL *)baseURL;
-(void)fetchArticleWithURL:(id)arg1 callbackQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(FCAsyncSerialQueue *)serialQueue;
-(void)reportConcern:(id)arg1 callbackQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)updateBaseURLWith:(id)arg1 ;
-(void)setSerialQueue:(FCAsyncSerialQueue *)arg1 ;
-(id)initWithEndpointConnection:(id)arg1 configurationManager:(id)arg2 ;
-(void)setEndpointConnection:(FCEndpointConnection *)arg1 ;
-(void)configurationManager:(id)arg1 configurationDidChange:(id)arg2 ;
-(void)setBaseURL:(NSURL *)arg1 ;
-(void)submitWebAccessWithTagID:(id)arg1 purchaseID:(id)arg2 emailAddress:(id)arg3 purchaseReceipt:(id)arg4 countryCode:(id)arg5 languageCode:(id)arg6 callbackQueue:(id)arg7 completion:(/*^block*/id)arg8 ;
@end

