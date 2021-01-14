/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/

#import <CoreServices/CoreServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary, BSServiceConnectionEndpoint, NSXPCConnection;

@interface _LSSpringBoardCall : NSObject <NSCopying> {

	NSString* _schemeIfNotFileURL;
	BOOL _callCompletionHandlerWhenFullyComplete;
	NSDictionary* _launchOptions;
	BSServiceConnectionEndpoint* _targetServiceConnectionEndpoint;
	NSString* _bundleIdentifier;
	NSXPCConnection* _clientXPCConnection;

}

@property (copy) NSString * bundleIdentifier;                                                  //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (copy) NSDictionary * launchOptions;                                                 //@synthesize launchOptions=_launchOptions - In the implementation block
@property (retain) NSXPCConnection * clientXPCConnection;                                      //@synthesize clientXPCConnection=_clientXPCConnection - In the implementation block
@property (assign) BOOL callCompletionHandlerWhenFullyComplete;                                //@synthesize callCompletionHandlerWhenFullyComplete=_callCompletionHandlerWhenFullyComplete - In the implementation block
@property (retain) BSServiceConnectionEndpoint * targetServiceConnectionEndpoint;              //@synthesize targetServiceConnectionEndpoint=_targetServiceConnectionEndpoint - In the implementation block
+(id)springBoardDeadlockPreventionQueue;
+(id)springBoardQueue;
-(NSDictionary *)launchOptions;
-(void)setCallCompletionHandlerWhenFullyComplete:(BOOL)arg1 ;
-(void)promptAndCallSpringBoardWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setLaunchOptions:(NSDictionary *)arg1 ;
-(void)callSpringBoardWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setTargetServiceConnectionEndpoint:(BSServiceConnectionEndpoint *)arg1 ;
-(BSServiceConnectionEndpoint *)targetServiceConnectionEndpoint;
-(void)callWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)callCompletionHandlerWhenFullyComplete;
-(void)lieWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setClientXPCConnection:(NSXPCConnection *)arg1 ;
-(NSString *)bundleIdentifier;
-(id)debugDescription;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(NSXPCConnection *)clientXPCConnection;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

