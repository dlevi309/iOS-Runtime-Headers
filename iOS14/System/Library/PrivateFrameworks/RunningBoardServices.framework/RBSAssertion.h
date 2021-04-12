/*
* Generated on Thursday, January 14, 2021 at 2:21:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
*/


@protocol RBSServiceLocalProtocol;
#import <RunningBoardServices/RunningBoardServices-Structs.h>
@class NSHashTable, RBSAssertionDescriptor, RBSAssertionIdentifier, NSString, RBSTarget, NSArray;

@interface RBSAssertion : NSObject {

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
-(void)_serverWillInvalidate;
-(void)addObserver:(id)arg1 ;
-(id)init;
-(id)debugDescription;
-(BOOL)acquireWithError:(out id*)arg1 ;
-(void)setExpirationWarningHandler:(/*^block*/id)arg1 ;
-(RBSAssertionDescriptor *)descriptor;
-(NSArray *)attributes;
-(id)_initWithServerValidatedDescriptor:(id)arg1 ;
-(id)description;
-(BOOL)isValid;
-(BOOL)invalidateWithError:(out id*)arg1 ;
-(void)_serverInvalidateWithError:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)_serverDidChangeIdentifier:(id)arg1 ;
-(oneway void)acquireWithInvalidationHandler:(/*^block*/id)arg1 ;
-(unsigned long long)state;
-(oneway void)invalidate;
-(NSString *)explanation;
-(RBSTarget *)target;
-(void)setInvalidationHandler:(/*^block*/id)arg1 ;
-(RBSAssertionIdentifier *)identifier;
-(id)_initWithDescriptor:(id)arg1 service:(id)arg2 ;
-(id)initWithExplanation:(id)arg1 target:(id)arg2 attributes:(id)arg3 ;
-(void)dealloc;
@end

