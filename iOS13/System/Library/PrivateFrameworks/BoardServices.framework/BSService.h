/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
*/


#import <BoardServices/BoardServices-Structs.h>
@class BSServiceDomain, BSServiceSpecification, BSZeroingWeakReference, NSMutableDictionary, NSMutableArray;

@interface BSService : NSObject {

	BSServiceDomain* _domain;
	BSServiceSpecification* _specification;
	os_unfair_lock_s _lock;
	BSZeroingWeakReference* _lock_globalListener;
	NSMutableDictionary* _lock_instanceToListener;
	NSMutableArray* _lock_pendedConnections;

}
-(id)_identifier;
-(id)_initWithSpecification:(id)arg1 domain:(id)arg2 ;
-(id)_registerListener:(id)arg1 forInstance:(id)arg2 ;
-(void)_disableConnectionPending;
-(void)_didReceiveConnection:(id)arg1 ;
@end

