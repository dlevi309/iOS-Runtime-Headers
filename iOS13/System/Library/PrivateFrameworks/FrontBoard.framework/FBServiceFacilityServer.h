/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
*/

#import <libobjc.A.dylib/BSServiceConnectionListenerDelegate.h>
#import <libobjc.A.dylib/FBSServiceFacilityManaging.h>

@protocol OS_dispatch_queue;
@class BSServiceDomainSpecification, NSObject, BSServiceConnectionListener, NSMutableDictionary, NSMutableSet, NSString;

@interface FBServiceFacilityServer : NSObject <BSServiceConnectionListenerDelegate, FBSServiceFacilityManaging> {

	BSServiceDomainSpecification* _domain;
	NSObject*<OS_dispatch_queue> _queue;
	BSServiceConnectionListener* _serviceListener;
	NSMutableDictionary* _facilitiesByIdentifier;
	NSMutableSet* _completedMilestones;
	NSMutableDictionary* _suspendedFacilitiesByIdentifier;
	NSMutableSet* _pendingConnects;

}

@property (nonatomic,readonly) BSServiceDomainSpecification * domain;              //@synthesize domain=_domain - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)run;
-(BSServiceDomainSpecification *)domain;
-(id)_initWithDomain:(id)arg1 ;
-(void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3 ;
-(void)addFacility:(id)arg1 ;
-(void)removeFacility:(id)arg1 ;
-(void)_facilityQueue_facility:(id)arg1 handleMessage:(id)arg2 client:(id)arg3 ;
-(BOOL)_queue_areFacilityPrerequisitesSatisfied:(id)arg1 ;
-(void)_queue_evaluateSuspendedFacility:(id)arg1 ;
-(void)_queue_evaluateSuspendedFacilities;
-(void)noteMilestoneReached:(id)arg1 ;
@end

