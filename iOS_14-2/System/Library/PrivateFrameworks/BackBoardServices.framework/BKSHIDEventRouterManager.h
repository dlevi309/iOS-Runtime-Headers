/*
* Generated on Thursday, January 14, 2021 at 2:20:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
*/

#import <libobjc.A.dylib/_BKSHIDEventRouterDelegate.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@protocol OS_dispatch_queue, BSInvalidatable;
@class BKSHIDEventDeliveryManager, NSObject, NSMutableArray, NSArray, NSString;

@interface BKSHIDEventRouterManager : NSObject <_BKSHIDEventRouterDelegate, BSDescriptionProviding> {

	BKSHIDEventDeliveryManager* _deliveryManager;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _queue_routers;
	BOOL _queue_needsFlush;
	id<BSInvalidatable> _queue_dispatchingRulesAssertion;

}

@property (nonatomic,retain) NSArray * eventRouters; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)succinctDescription;
-(id)init;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSString *)debugDescription;
-(NSString *)description;
-(NSArray *)eventRouters;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(void)_queue_flush;
-(void)_queue_routerDidChange:(id)arg1 ;
-(void)setEventRouters:(NSArray *)arg1 ;
-(id)_initWithDeliveryManager:(id)arg1 ;
-(id)_targetForDestination:(long long)arg1 ;
-(id)_queue_succinctDescriptionBuilder;
-(id)succinctDescriptionBuilder;
-(void)dealloc;
@end

