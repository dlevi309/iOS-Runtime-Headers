/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)objectForKeyedSubscript:(id)arg1 ;
-(id)init;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSArray *)allObjects;
-(id)description;
-(id)objectForKey:(id)arg1 ;
-(unsigned long long)hash;
-(NSArray *)allKeys;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

