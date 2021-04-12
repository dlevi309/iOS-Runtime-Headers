/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/


#import <RunningBoard/RunningBoard-Structs.h>
@class NSMutableDictionary, NSMutableSet;

@interface RBAssertionCollection : NSObject {

	os_unfair_recursive_lock_s _lock;
	NSMutableDictionary* _assertionsByIdentifier;
	NSMutableSet* _processAssertions;
	NSMutableSet* _systemAssertions;
	NSMutableDictionary* _assertionsByOriginator;
	NSMutableDictionary* _assertionsByTargetProcessIdentity;
	NSMutableSet* _resolvedIdentifiers;

}
-(id)init;
-(unsigned long long)count;
-(void)addAssertion:(id)arg1 ;
-(id)assertionWithIdentifier:(id)arg1 ;
-(void)removeAssertion:(id)arg1 ;
-(BOOL)hasAssertionsForOriginator:(id)arg1 exceedingCount:(unsigned long long)arg2 ;
-(id)assertionsForTargetIdentity:(id)arg1 ;
-(id)assertionsForOriginator:(id)arg1 ;
-(void)enumerateAssertionsForTargetProcessIdentity:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(BOOL)hasAssertion:(id)arg1 ;
-(BOOL)hasAssertionsForOriginator:(id)arg1 ;
-(unsigned long long)assertionCountForTargetProcessIdentity:(id)arg1 ;
-(void)enumerateAssertionsWithBlock:(/*^block*/id)arg1 ;
-(void)enumerateAssertionsForSystemTargetWithBlock:(/*^block*/id)arg1 ;
-(void)enumerateAssertionsForProcessTargetsWithBlock:(/*^block*/id)arg1 ;
-(void)enumerateAssertionsForOriginator:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)assertionsForTarget:(id)arg1 ;
-(unsigned long long)assertionCountForOriginator:(id)arg1 ;
-(void)noteResolvedAssertion:(id)arg1 ;
-(BOOL)hasResolvedAssertion:(id)arg1 ;
@end

