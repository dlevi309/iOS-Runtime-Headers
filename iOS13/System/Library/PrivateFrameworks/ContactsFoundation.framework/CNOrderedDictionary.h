/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/

#import <ContactsFoundation/ContactsFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSMutableDictionary, NSMutableArray, NSArray;

@interface CNOrderedDictionary : NSObject <NSCopying, NSMutableCopying> {

	NSMutableDictionary* _dictionary;
	NSMutableArray* _orderedKeys;

}

@property (copy,readonly) NSArray * allKeys; 
@property (copy,readonly) NSArray * allObjects; 
+(id)dictionaryWithObject:(id)arg1 forKey:(id)arg2 ;
+(id)orderedDictionary;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSArray *)allKeys;
-(id)objectForKey:(id)arg1 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(NSArray *)allObjects;
@end

