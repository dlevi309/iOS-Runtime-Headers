/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
*/

#import <HMFoundation/HMFObject.h>
#import <HMFoundation/HMFLogging.h>
#import <HMFoundation/HMFObject.h>

@protocol OS_dispatch_queue, HMFMessageReceiver;
@class NSObject, NSString, HMFMessageDestination, NSArray;

@interface __HMFMessageHandler : HMFObject <HMFLogging, HMFObject> {

	unsigned long long _hash;
	NSObject*<OS_dispatch_queue> _queue;
	id<HMFMessageReceiver> _receiver;
	NSString* _name;
	HMFMessageDestination* _destination;
	NSArray* _policies;

}

@property (readonly) NSObject*<OS_dispatch_queue> queue;                          //@synthesize queue=_queue - In the implementation block
@property (__weak,readonly) id<HMFMessageReceiver> receiver;                      //@synthesize receiver=_receiver - In the implementation block
@property (copy,readonly) NSString * name;                                        //@synthesize name=_name - In the implementation block
@property (copy,readonly) HMFMessageDestination * destination;                    //@synthesize destination=_destination - In the implementation block
@property (copy,readonly) NSArray * policies;                                     //@synthesize policies=_policies - In the implementation block
@property (readonly) unsigned long long hash;                                     //@synthesize hash=_hash - In the implementation block
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSString * shortDescription; 
@property (copy,readonly) NSString * privateDescription; 
@property (copy,readonly) NSString * propertyDescription; 
@property (nonatomic,copy,readonly) NSArray * attributeDescriptions; 
+(id)logCategory;
+(id)handlerWithReceiver:(id)arg1 name:(id)arg2 policies:(id)arg3 selector:(SEL)arg4 ;
+(id)handlerWithReceiver:(id)arg1 name:(id)arg2 policies:(id)arg3 handler:(/*^block*/id)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)name;
-(NSObject*<OS_dispatch_queue>)queue;
-(HMFMessageDestination *)destination;
-(NSArray *)policies;
-(NSString *)shortDescription;
-(id<HMFMessageReceiver>)receiver;
-(id)logIdentifier;
-(NSArray *)attributeDescriptions;
-(BOOL)invokeWithMessage:(id)arg1 ;
-(id)initWithReceiver:(id)arg1 name:(id)arg2 policies:(id)arg3 ;
@end

