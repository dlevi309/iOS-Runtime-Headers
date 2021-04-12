/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
*/

#import <BoardServices/BoardServices-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class BSProcessHandle, NSMutableDictionary, NSMutableSet, NSString;

@interface BSXPCServiceConnectionPeer : NSObject <BSDescriptionProviding> {

	BSProcessHandle* _processHandle;
	os_unfair_lock_s _lock;
	NSMutableDictionary* _lock_entitlements;
	NSMutableSet* _lock_connections;
	unsigned long long _lock_lastConnectedGenerationCount;

}

@property (nonatomic,retain,readonly) BSProcessHandle * processHandle;              //@synthesize processHandle=_processHandle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)peerOfConnection:(id)arg1 ;
+(void)invalidateConnection:(id)arg1 ;
+(id)_allPeers;
-(id)init;
-(NSString *)description;
-(id)_initWithConnection:(id)arg1 ;
-(BSProcessHandle *)processHandle;
-(BOOL)hasEntitlement:(id)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
@end

