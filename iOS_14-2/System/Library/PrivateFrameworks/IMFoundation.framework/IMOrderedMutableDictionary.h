/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
*/

#import <IMFoundation/IMFoundation-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSMutableDictionary, NSMutableOrderedSet, NSArray;

@interface IMOrderedMutableDictionary : NSObject <NSFastEnumeration> {

	NSMutableDictionary* _dictionary;
	NSMutableOrderedSet* _mutableOrderedSet;
	NSArray* _orderedItems;

}

@property (readonly) unsigned long long count; 
-(BOOL)containsKey:(id)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_IM11*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)init;
-(unsigned long long)count;
-(id)orderedObjects;
-(void)setOrderedObject:(id)arg1 forKey:(id)arg2 ;
-(id)orderedObjectForKey:(id)arg1 ;
-(void)removeOrderedObjectForKey:(id)arg1 ;
-(BOOL)containsOrderedObject:(id)arg1 ;
@end

