/*
* Generated on Thursday, January 14, 2021 at 2:23:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@end

