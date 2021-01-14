/*
* Generated on Thursday, January 14, 2021 at 2:20:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)succinctDescription;
-(id)init;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSString *)debugDescription;
-(NSString *)description;
-(unsigned long long)hash;
-(BOOL)specifiesDescriptor:(id)arg1 ;
-(BOOL)containsDescriptor:(id)arg1 ;
-(void)_setDelegate:(id)arg1 ;
-(id)_initWithDestination:(long long)arg1 hidEventDescriptors:(id)arg2 ;
-(NSSet *)hidEventDescriptors;
-(void)addHIDEventDescriptors:(id)arg1 ;
-(void)removeHIDEventDescriptors:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(long long)destination;
-(BOOL)isEqual:(id)arg1 ;
@end

