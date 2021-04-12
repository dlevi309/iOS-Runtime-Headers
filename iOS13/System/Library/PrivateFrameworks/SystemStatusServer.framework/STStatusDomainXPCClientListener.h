/*
* Generated on Monday, March 1, 2021 at 2:33:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SystemStatusServer.framework/SystemStatusServer
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol STStatusDomainServerHandle;
@class NSXPCListener, NSString;

@interface STStatusDomainXPCClientListener : NSObject <NSXPCListenerDelegate> {

	id<STStatusDomainServerHandle> _serverHandle;
	NSXPCListener* _xpcListener;

}

@property (nonatomic,__weak,readonly) id<STStatusDomainServerHandle> serverHandle;              //@synthesize serverHandle=_serverHandle - In the implementation block
@property (nonatomic,readonly) NSXPCListener * xpcListener;                                     //@synthesize xpcListener=_xpcListener - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(NSXPCListener *)xpcListener;
-(id)initWithServerHandle:(id)arg1 ;
-(id<STStatusDomainServerHandle>)serverHandle;
@end

