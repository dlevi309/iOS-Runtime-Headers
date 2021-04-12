/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
*/

#import <libobjc.A.dylib/BSServiceConnectionListenerDelegate.h>

@class BSServiceConnectionListener, BSServiceConnectionEndpoint, NSString;

@interface FBWorkspaceConnectionListener : NSObject <BSServiceConnectionListenerDelegate> {

	BSServiceConnectionListener* _listener;

}

@property (nonatomic,copy,readonly) BSServiceConnectionEndpoint * endpoint; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(BOOL)sharedDomainUsesDefaultShellEndpoint;
+(id)sharedDomainMachService;
+(id)sharedDomainIdentifier;
+(id)_sharedDomain;
+(BOOL)shouldInjectEndpoint;
-(void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3 ;
-(id)init;
-(BSServiceConnectionEndpoint *)endpoint;
-(id)_initWithDomain:(id)arg1 ;
-(void)dealloc;
@end

