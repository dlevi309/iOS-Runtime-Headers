/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isInvalidated,nonatomic,readonly) BOOL invalidated;              //@synthesize invalidated=_invalidated - In the implementation block
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(BOOL)isInvalidated;
-(void)_invalidateFromParent:(BOOL)arg1 ;
-(id)initWithParent:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)invokeHandler;
@end

