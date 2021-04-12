/*
* Generated on Thursday, January 14, 2021 at 2:26:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
*/


@protocol OS_dispatch_queue;
@class MFWeakReferenceHolder, NSObject;

@interface _MFContentProtectionObserverWrapper : NSObject {

	MFWeakReferenceHolder* _observerReference;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) id<MFContentProtectionObserver> observer; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                    //@synthesize queue=_queue - In the implementation block
-(id<MFContentProtectionObserver>)observer;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)initWithObserver:(id)arg1 queue:(id)arg2 ;
-(void)dealloc;
@end

