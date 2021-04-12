/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/

#import <ContactsFoundation/ContactsFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSMutableDictionary, NSArray, NSDictionary;

@interface CNMultiDictionary : NSObject <NSCopying, NSMutableCopying> {

	NSMutableDictionary* _entries;

}

@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) NSArray * allKeys; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
+(id)multiDictionary;
+(id)multiDictionaryWithObject:(id)arg1 forKey:(id)arg2 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(unsigned long long)count;
-(NSArray *)allKeys;
-(BOOL)containsKey:(id)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(id)objectsForKeys:(id)arg1 ;
-(id)initWithEntries:(id)arg1 ;
-(id)objectsForKey:(id)arg1 ;
-(void)eachObject:(/*^block*/id)arg1 ;
@end

