/*
* Generated on Thursday, January 14, 2021 at 2:28:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithServerHandle:(id)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(id<STStatusDomainServerHandle>)serverHandle;
-(NSXPCListener *)xpcListener;
-(void)dealloc;
@end

