/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/

#import <RunningBoard/RunningBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary;

@interface RBProcessMap : NSObject <NSCopying> {

	os_unfair_lock_s _lock;
	NSMutableDictionary* _valueMap;

}
-(void)enumerateWithBlock:(/*^block*/id)arg1 ;
-(BOOL)containsIdentity:(id)arg1 ;
-(id)init;
-(id)removeValueForIdentity:(id)arg1 ;
-(id)removeValueForIdentity:(id)arg1 withPredicate:(/*^block*/id)arg2 ;
-(id)valueForIdentity:(id)arg1 ;
-(unsigned long long)count;
-(void)removeIdentity:(id)arg1 ;
-(id)dictionary;
-(void)removeAllObjects;
-(id)allIdentities;
-(id)setValue:(id)arg1 forIdentity:(id)arg2 ;
-(void)addIdentity:(id)arg1 ;
-(id)allValue;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

