/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(unsigned long long)count;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_IM9*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(BOOL)containsKey:(id)arg1 ;
-(id)orderedObjects;
-(void)setOrderedObject:(id)arg1 forKey:(id)arg2 ;
-(id)orderedObjectForKey:(id)arg1 ;
-(void)removeOrderedObjectForKey:(id)arg1 ;
-(BOOL)containsOrderedObject:(id)arg1 ;
@end

