/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/

#import <RunningBoard/RunningBoard-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSMutableOrderedSet, NSMutableDictionary;

@interface RBProcessIndex : NSObject <NSFastEnumeration> {

	os_unfair_lock_s _lock;
	unsigned long long _capacity;
	NSMutableOrderedSet* _processes;
	NSMutableDictionary* _processByIdentity;
	NSMutableDictionary* _processByInstance;
	NSMutableDictionary* _processByIdentifier;

}
+(id)index;
+(id)indexWithCapacity:(unsigned long long)arg1 ;
-(BOOL)containsIdentity:(id)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_RB2*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)init;
-(BOOL)containsProcess:(id)arg1 ;
-(id)processForIdentifier:(id)arg1 ;
-(id)processForIdentity:(id)arg1 ;
-(id)processForInstance:(id)arg1 ;
-(BOOL)containsInstance:(id)arg1 ;
-(id)allProcesses;
-(void)removeAllObjects;
-(BOOL)addProcess:(id)arg1 ;
-(BOOL)containsIdentifier:(id)arg1 ;
-(BOOL)removeProcess:(id)arg1 ;
@end

