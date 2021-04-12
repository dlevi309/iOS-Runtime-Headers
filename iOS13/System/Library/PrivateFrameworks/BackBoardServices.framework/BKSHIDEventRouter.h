/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@protocol OS_dispatch_queue, _BKSHIDEventRouterDelegate;
@class NSObject, NSMutableSet, NSSet, NSString;

@interface BKSHIDEventRouter : NSObject <BSDescriptionProviding> {

	long long _destination;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableSet* _queue_hidEventDescriptors;
	id<_BKSHIDEventRouterDelegate> _queue_delegate;
	NSSet* _queue_cachedHidEventDescriptors;

}

@property (readonly) long long destination;                         //@synthesize destination=_destination - In the implementation block
@property (copy,readonly) NSSet * hidEventDescriptors; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)routerWithDestination:(long long)arg1 ;
+(id)defaultEventRouters;
+(id)defaultSystemAppEventRouter;
+(id)defaultFocusedAppEventRouter;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)debugDescription;
-(long long)destination;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)_setDelegate:(id)arg1 ;
-(id)_initWithDestination:(long long)arg1 hidEventDescriptors:(id)arg2 ;
-(NSSet *)hidEventDescriptors;
-(void)addHIDEventDescriptors:(id)arg1 ;
-(void)removeHIDEventDescriptors:(id)arg1 ;
-(BOOL)specifiesDescriptor:(id)arg1 ;
-(BOOL)containsDescriptor:(id)arg1 ;
@end

