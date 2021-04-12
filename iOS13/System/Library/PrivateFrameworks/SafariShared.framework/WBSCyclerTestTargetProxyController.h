/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@class NSXPCConnection;

@interface WBSCyclerTestTargetProxyController : NSObject {

	NSXPCConnection* _xpcConnection;

}

@property (nonatomic,copy) id disconnectionHandler; 
@property (nonatomic,readonly) id<WBSCyclerTestTarget> testTargetProxy; 
-(id)init;
-(void)dealloc;
-(id)initWithEndpoint:(id)arg1 ;
-(void)setDisconnectionHandler:(id)arg1 ;
-(id<WBSCyclerTestTarget>)testTargetProxy;
-(id)disconnectionHandler;
@end

