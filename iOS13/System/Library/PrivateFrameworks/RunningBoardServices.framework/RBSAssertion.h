/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
*/

#import <RunningBoardServices/RunningBoardServices-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@protocol RBSServiceLocalProtocol;
@class NSHashTable, RBSAssertionDescriptor, RBSAssertionIdentifier, NSString, RBSTarget, NSArray;

@interface RBSAssertion : NSObject <BSDescriptionProviding> {

	NSHashTable* _observers;
	/*^block*/id _invalidationHandler;
	/*^block*/id _warningHandler;
	os_unfair_lock_s _lock;
	RBSAssertionDescriptor* _descriptor;
	unsigned long long _state;
	id<RBSServiceLocalProtocol> _service;

}

@property (nonatomic,copy,readonly) RBSAssertionIdentifier * identifier; 
@property (nonatomic,copy,readonly) RBSAssertionDescriptor * descriptor; 
@property (nonatomic,readonly) unsigned long long state; 
@property (nonatomic,copy,readonly) NSString * explanation; 
@property (nonatomic,readonly) RBSTarget * target; 
@property (nonatomic,copy,readonly) NSArray * attributes; 
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(oneway void)invalidate;
-(BOOL)isValid;
-(RBSTarget *)target;
-(RBSAssertionIdentifier *)identifier;
-(id)_observers;
-(void)setInvalidationHandler:(/*^block*/id)arg1 ;
-(NSArray *)attributes;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(unsigned long long)state;
-(RBSAssertionDescriptor *)descriptor;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)_initWithDescriptor:(id)arg1 service:(id)arg2 ;
-(NSString *)explanation;
-(BOOL)acquireWithError:(out id*)arg1 ;
-(BOOL)_clientInvalidateWithError:(out id*)arg1 ;
-(id)initWithExplanation:(id)arg1 target:(id)arg2 attributes:(id)arg3 ;
-(oneway void)acquireWithInvalidationHandler:(/*^block*/id)arg1 ;
-(BOOL)invalidateWithError:(out id*)arg1 ;
-(void)setExpirationWarningHandler:(/*^block*/id)arg1 ;
-(id)_initWithServerValidatedDescriptor:(id)arg1 ;
-(void)_serverInvalidateWithError:(id)arg1 ;
-(void)_serverWillInvalidate;
-(void)_serverDidChangeIdentifier:(id)arg1 ;
@end

