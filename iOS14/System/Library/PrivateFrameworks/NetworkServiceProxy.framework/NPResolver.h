/*
* Generated on Thursday, January 14, 2021 at 2:28:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
*/

#import <Network/NWResolver.h>

@protocol OS_dispatch_source;
@class NSObject;

@interface NPResolver : NWResolver {

	/*^block*/id _resolveCompletionHandler;
	NSObject*<OS_dispatch_source> _resolveTimer;

}

@property (copy) id resolveCompletionHandler;                               //@synthesize resolveCompletionHandler=_resolveCompletionHandler - In the implementation block
@property (retain) NSObject*<OS_dispatch_source> resolveTimer;              //@synthesize resolveTimer=_resolveTimer - In the implementation block
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)resolveWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setResolveTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)resolveTimer;
-(id)resolveCompletionHandler;
-(void)setResolveCompletionHandler:(id)arg1 ;
@end

