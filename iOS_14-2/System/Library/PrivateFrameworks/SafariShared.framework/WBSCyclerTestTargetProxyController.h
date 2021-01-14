/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@class NSXPCConnection;

@interface WBSCyclerTestTargetProxyController : NSObject {

	NSXPCConnection* _xpcConnection;

}

@property (nonatomic,copy) id disconnectionHandler; 
@property (nonatomic,readonly) id<WBSCyclerTestTarget> testTargetProxy; 
-(id)init;
-(void)setDisconnectionHandler:(id)arg1 ;
-(id<WBSCyclerTestTarget>)testTargetProxy;
-(id)initWithEndpoint:(id)arg1 ;
-(id)disconnectionHandler;
-(void)dealloc;
@end

