/*
* Generated on Monday, March 1, 2021 at 2:34:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
*/

#import <AdCore/ADSingleton.h>
#import <libobjc.A.dylib/NSURLSessionDelegate.h>

@class NSDictionary, NSURLSession, NSString;

@interface ADServer : ADSingleton <NSURLSessionDelegate> {

	int _configurationExpirationTime;
	NSDictionary* _configurations;
	NSURLSession* _session;

}

@property (retain) NSURLSession * session;                          //@synthesize session=_session - In the implementation block
@property (retain) NSDictionary * configurations;                   //@synthesize configurations=_configurations - In the implementation block
@property (assign) int configurationExpirationTime;                 //@synthesize configurationExpirationTime=_configurationExpirationTime - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)sharedInstance;
+(id)workQueue;
-(id)init;
-(NSURLSession *)session;
-(void)setSession:(NSURLSession *)arg1 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)setConfigurations:(NSDictionary *)arg1 ;
-(NSDictionary *)configurations;
-(void)restoreConfiguration;
-(int)configurationExpirationTime;
-(void)buildConfigurationDictionary:(id)arg1 ;
-(void)handleRequest:(id)arg1 serverURL:(id)arg2 responseHandler:(/*^block*/id)arg3 ;
-(void)setConfigurationExpirationTime:(int)arg1 ;
-(BOOL)shouldRestoreConfiguration;
-(id)serverURLForMessageClass:(Class)arg1 serverURL:(id)arg2 ;
-(id)serializeMessage:(id)arg1 ;
-(id)deserializeMessage:(id)arg1 error:(id*)arg2 ;
-(id)routingHeaderForClass:(Class)arg1 serverURL:(id)arg2 ;
@end

