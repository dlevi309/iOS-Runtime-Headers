/*
* Generated on Thursday, January 14, 2021 at 2:21:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/NSURLSessionDelegate.h>
#import <libobjc.A.dylib/FCCoreConfigurationObserving.h>
#import <libobjc.A.dylib/FCEndpointConnectionType.h>

@class NSURLSession, NSString;

@interface FCEndpointConnection : NSObject <NSURLSessionDelegate, FCCoreConfigurationObserving, FCEndpointConnectionType> {

	NSURLSession* _session;

}

@property (nonatomic,retain) NSURLSession * session;                //@synthesize session=_session - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)errorForStatus:(long long)arg1 url:(id)arg2 ;
-(void)performHTTPRequestWithURL:(id)arg1 valuesByHTTPHeaderField:(id)arg2 method:(id)arg3 data:(id)arg4 contentType:(id)arg5 priority:(float)arg6 requiresMescalSigning:(BOOL)arg7 requiresAuthKitHeaders:(BOOL)arg8 callbackQueue:(id)arg9 completion:(/*^block*/id)arg10 ;
-(void)performAuthenticatedHTTPRequestWithURL:(id)arg1 valuesByHTTPHeaderField:(id)arg2 method:(id)arg3 data:(id)arg4 contentType:(id)arg5 priority:(float)arg6 reauthenticateIfNeeded:(BOOL)arg7 callbackQueue:(id)arg8 completion:(/*^block*/id)arg9 ;
-(id)init;
-(void)performHTTPRequestWithURL:(id)arg1 valuesByHTTPHeaderField:(id)arg2 method:(id)arg3 data:(id)arg4 contentType:(id)arg5 priority:(float)arg6 requiresMescalSigning:(BOOL)arg7 callbackQueue:(id)arg8 completion:(/*^block*/id)arg9 ;
-(NSURLSession *)session;
-(void)setSession:(NSURLSession *)arg1 ;
-(id)initWithSourceApplicationBundleIdentifier:(id)arg1 ;
-(void)performHTTPRequestWithURL:(id)arg1 method:(id)arg2 data:(id)arg3 contentType:(id)arg4 priority:(float)arg5 requiresMescalSigning:(BOOL)arg6 callbackQueue:(id)arg7 completion:(/*^block*/id)arg8 ;
@end

