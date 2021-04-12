/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/PKInvalidatable.h>

@class PKNotifyRegistration, NSString;

@interface PKNotifySubregistration : NSObject <PKInvalidatable> {

	os_unfair_lock_s _lock;
	PKNotifyRegistration* _parent;
	/*^block*/id _handler;
	BOOL _invalidated;

}

@property (getter=isInvalidated,nonatomic,readonly) BOOL invalidated;              //@synthesize invalidated=_invalidated - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isInvalidated;
-(id)init;
-(void)invalidate;
-(void)invokeHandler;
-(id)initWithParent:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_invalidateFromParent:(BOOL)arg1 ;
-(void)dealloc;
@end

