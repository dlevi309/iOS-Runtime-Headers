/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	NSString* _applicationIdentifier;
	NSXPCConnection* _clientXPCConnection;

}

@property (copy) NSString * applicationIdentifier;                                             //@synthesize applicationIdentifier=_applicationIdentifier - In the implementation block
@property (copy) NSDictionary * launchOptions;                                                 //@synthesize launchOptions=_launchOptions - In the implementation block
@property (retain) NSXPCConnection * clientXPCConnection;                                      //@synthesize clientXPCConnection=_clientXPCConnection - In the implementation block
@property (assign) BOOL callCompletionHandlerWhenFullyComplete;                                //@synthesize callCompletionHandlerWhenFullyComplete=_callCompletionHandlerWhenFullyComplete - In the implementation block
@property (retain) BSServiceConnectionEndpoint * targetServiceConnectionEndpoint;              //@synthesize targetServiceConnectionEndpoint=_targetServiceConnectionEndpoint - In the implementation block
+(id)springBoardQueue;
+(id)springBoardDeadlockPreventionQueue;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)applicationIdentifier;
-(void)setLaunchOptions:(NSDictionary *)arg1 ;
-(void)setClientXPCConnection:(NSXPCConnection *)arg1 ;
-(void)setCallCompletionHandlerWhenFullyComplete:(BOOL)arg1 ;
-(void)callWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSXPCConnection *)clientXPCConnection;
-(void)callSpringBoardWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)promptAndCallSpringBoardWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)callCompletionHandlerWhenFullyComplete;
-(NSDictionary *)launchOptions;
-(BSServiceConnectionEndpoint *)targetServiceConnectionEndpoint;
-(void)setTargetServiceConnectionEndpoint:(BSServiceConnectionEndpoint *)arg1 ;
-(void)lieWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setApplicationIdentifier:(NSString *)arg1 ;
@end

