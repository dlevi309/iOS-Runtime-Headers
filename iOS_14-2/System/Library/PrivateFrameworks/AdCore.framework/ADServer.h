/*
* Generated on Thursday, January 14, 2021 at 2:24:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
*/

#import <AdCore/ADSingleton.h>
#import <libobjc.A.dylib/NSURLSessionDelegate.h>

@class NSDictionary, NSString, NSURLSession;

@interface ADServer : ADSingleton <NSURLSessionDelegate> {

	int _configurationExpirationTime;
	NSDictionary* _configurations;
	NSString* _resourceConnectProxyURL;
	NSURLSession* _session;

}

@property (retain) NSURLSession * session;                          //@synthesize session=_session - In the implementation block
@property (retain) NSDictionary * configurations;                   //@synthesize configurations=_configurations - In the implementation block
@property (assign) int configurationExpirationTime;                 //@synthesize configurationExpirationTime=_configurationExpirationTime - In the implementation block
@property (retain) NSString * resourceConnectProxyURL;              //@synthesize resourceConnectProxyURL=_resourceConnectProxyURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)workQueue;
+(id)sharedInstance;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(id)init;
-(NSURLSession *)session;
-(void)restoreConfiguration;
-(int)configurationExpirationTime;
-(void)saveProxyURL;
-(void)buildConfigurationDictionary:(id)arg1 ;
-(BOOL)shouldRestoreConfiguration;
-(void)setSession:(NSURLSession *)arg1 ;
-(void)setConfigurations:(NSDictionary *)arg1 ;
-(NSString *)resourceConnectProxyURL;
-(void)handleRequest:(id)arg1 serverURL:(id)arg2 responseHandler:(/*^block*/id)arg3 ;
-(id)routingHeaderForClass:(Class)arg1 serverURL:(id)arg2 ;
-(void)setConfigurationExpirationTime:(int)arg1 ;
-(NSDictionary *)configurations;
-(void)setResourceConnectProxyURL:(NSString *)arg1 ;
-(void)saveConfig;
-(id)deserializeMessage:(id)arg1 error:(id*)arg2 ;
-(id)serializeMessage:(id)arg1 ;
-(id)serverURLForMessageClass:(Class)arg1 serverURL:(id)arg2 ;
@end

