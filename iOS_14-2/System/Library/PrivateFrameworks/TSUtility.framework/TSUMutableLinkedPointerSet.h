/*
* Generated on Thursday, January 14, 2021 at 2:28:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
*/

#import <TSUtility/TSUtility-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class TSULinkedPointerSetEntry;

@interface TSUMutableLinkedPointerSet : NSObject <NSFastEnumeration> {

	CFDictionaryRef mDictionary;
	TSULinkedPointerSetEntry* mHead;
	TSULinkedPointerSetEntry* mTail;

}
-(id)reverseObjectEnumerator;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_TS1*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)init;
-(id)objectEnumerator;
-(id)array;
-(unsigned long long)count;
-(id)firstObject;
-(BOOL)containsObject:(id)arg1 ;
-(void)addObject:(id)arg1 ;
-(void)removeAllObjects;
-(void)removeObject:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(id)objectEnumeratorAfterObject:(id)arg1 ;
-(BOOL)hasObjects;
-(void)insertFirstObject:(id)arg1 ;
@end

