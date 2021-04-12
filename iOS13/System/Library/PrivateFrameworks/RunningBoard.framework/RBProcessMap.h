/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/

#import <RunningBoard/RunningBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary;

@interface RBProcessMap : NSObject <NSCopying> {

	os_unfair_lock_s _lock;
	NSMutableDictionary* _stateMap;

}
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)count;
-(void)removeAllObjects;
-(id)dictionary;
-(void)enumerateWithBlock:(/*^block*/id)arg1 ;
-(id)stateForIdentity:(id)arg1 ;
-(void)removeIdentity:(id)arg1 ;
-(id)removeStateForIdentity:(id)arg1 ;
-(id)setState:(id)arg1 forIdentity:(id)arg2 ;
-(id)removeStateForIdentity:(id)arg1 withPredicate:(/*^block*/id)arg2 ;
-(BOOL)containsIdentity:(id)arg1 ;
-(id)allState;
-(void)addIdentity:(id)arg1 ;
-(id)allIdentities;
@end

