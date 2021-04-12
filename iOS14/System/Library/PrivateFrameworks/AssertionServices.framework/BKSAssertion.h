/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)assertion:(id)arg1 didInvalidateWithError:(id)arg2 ;
-(void)assertionWillInvalidate:(id)arg1 ;
-(id)init;
-(void)_invalidateSynchronously:(BOOL)arg1 ;
-(void)_lock:(/*^block*/id)arg1 ;
-(id)_lock_attributes;
-(void)_setAttributes:(id)arg1 ;
-(/*^block*/id)_acquisitionHandler;
-(NSString *)name;
-(id)_target;
-(id)_attributes;
-(id)_initWithName:(id)arg1 handler:(/*^block*/id)arg2 ;
-(BOOL)acquire;
-(void)_lock_setInternalAssertion:(id)arg1 ;
-(BOOL)valid;
-(id)_lock_internalAssertion;
-(void)_acquireAsynchronously;
-(id)_lock_name;
-(void)_lock_setAttributes:(id)arg1 ;
-(void)invalidate;
-(void)_lock_reaquireAssertion;
-(void)setName:(NSString *)arg1 ;
-(void)_lock_setName:(id)arg1 ;
-(void)setInvalidationHandler:(id)arg1 ;
-(/*^block*/id)_lock_acquisitionHandler;
-(id)_internalAssertion;
-(id)invalidationHandler;
-(void)_setTarget:(id)arg1 ;
-(unsigned long long)_bksErrorForRBSAssertionError:(unsigned long long)arg1 ;
-(void)dealloc;
@end

