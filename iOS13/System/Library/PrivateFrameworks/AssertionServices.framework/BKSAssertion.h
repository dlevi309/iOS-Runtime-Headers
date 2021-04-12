/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssertionServices.framework/AssertionServices
*/

#import <AssertionServices/AssertionServices-Structs.h>
#import <libobjc.A.dylib/RBSAssertionObserving.h>

@class RBSAssertion, RBSTarget, NSMutableArray, NSString;

@interface BKSAssertion : NSObject <RBSAssertionObserving> {

	RBSAssertion* _internalAssertion;
	/*^block*/id _acquisitionHandler;
	/*^block*/id _invalidationHandler;
	RBSTarget* _target;
	NSMutableArray* _attributes;
	NSString* _name;
	os_unfair_lock_s _lock;

}

@property (nonatomic,copy) NSString * name; 
@property (nonatomic,readonly) BOOL valid; 
@property (nonatomic,copy) id invalidationHandler; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(NSString *)name;
-(void)invalidate;
-(id)_target;
-(void)setName:(NSString *)arg1 ;
-(void)setInvalidationHandler:(id)arg1 ;
-(id)_attributes;
-(BOOL)acquire;
-(id)invalidationHandler;
-(void)assertion:(id)arg1 didInvalidateWithError:(id)arg2 ;
-(void)assertionWillInvalidate:(id)arg1 ;
-(BOOL)valid;
-(void)_setTarget:(id)arg1 ;
-(void)_lock_reaquireAssertion;
-(unsigned long long)_bksErrorForRBSAssertionError:(unsigned long long)arg1 ;
-(void)_invalidateSynchronously:(BOOL)arg1 ;
-(void)_lock_setAttributes:(id)arg1 ;
-(id)_initWithName:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_setAttributes:(id)arg1 ;
-(id)_internalAssertion;
-(/*^block*/id)_acquisitionHandler;
-(void)_acquireAsynchronously;
-(void)_lock:(/*^block*/id)arg1 ;
-(id)_lock_name;
-(void)_lock_setName:(id)arg1 ;
-(id)_lock_internalAssertion;
-(void)_lock_setInternalAssertion:(id)arg1 ;
-(/*^block*/id)_lock_acquisitionHandler;
-(id)_lock_attributes;
@end

