/*
* Generated on Thursday, January 14, 2021 at 2:27:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreRE.framework/CoreRE
*/

#import <CoreRE/CoreRE-Structs.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class NSString;

@interface REResourceFetchServer : NSObject <NSXPCListenerDelegate> {

	ResourceFetchManager* _resourceFetchManager;

}

@property (nonatomic,readonly) ResourceFetchManager* resourceFetchManager;              //@synthesize resourceFetchManager=_resourceFetchManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)invalidate;
-(id)initWithResourceFetchManager:(ResourceFetchManager*)arg1 ;
-(ResourceFetchManager*)resourceFetchManager;
@end

