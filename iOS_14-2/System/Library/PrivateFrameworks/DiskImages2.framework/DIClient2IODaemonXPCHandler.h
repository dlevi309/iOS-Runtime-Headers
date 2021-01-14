/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DiskImages2.framework/DiskImages2
*/

#import <DiskImages2/DIBaseXPCHandler.h>

@class NSXPCListenerEndpoint;

@interface DIClient2IODaemonXPCHandler : DIBaseXPCHandler {

	NSXPCListenerEndpoint* _xpcListenerEndpoint;

}

@property (nonatomic,retain) NSXPCListenerEndpoint * xpcListenerEndpoint;              //@synthesize xpcListenerEndpoint=_xpcListenerEndpoint - In the implementation block
-(void)createConnection;
-(id)remoteObjectInterface;
-(id)initWithEndpoint:(id)arg1 ;
-(BOOL)addToRefCountWithError:(id*)arg1 ;
-(NSXPCListenerEndpoint *)xpcListenerEndpoint;
-(void)setXpcListenerEndpoint:(NSXPCListenerEndpoint *)arg1 ;
@end

