/*
* Generated on Thursday, January 14, 2021 at 2:28:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SystemStatus.framework/SystemStatus
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol STDynamicActivityAttributionServerHandle;
@class NSXPCListener, NSString;

@interface STDynamicActivityAttributionListener : NSObject <NSXPCListenerDelegate> {

	id<STDynamicActivityAttributionServerHandle> _serverHandle;
	NSXPCListener* _xpcListener;

}

@property (nonatomic,__weak,readonly) id<STDynamicActivityAttributionServerHandle> serverHandle;              //@synthesize serverHandle=_serverHandle - In the implementation block
@property (nonatomic,readonly) NSXPCListener * xpcListener;                                                   //@synthesize xpcListener=_xpcListener - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithServerHandle:(id)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(id<STDynamicActivityAttributionServerHandle>)serverHandle;
-(NSXPCListener *)xpcListener;
-(void)dealloc;
@end

