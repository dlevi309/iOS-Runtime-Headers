/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)multiDictionaryWithObject:(id)arg1 forKey:(id)arg2 ;
+(id)multiDictionary;
-(NSDictionary *)dictionaryRepresentation;
-(BOOL)containsKey:(id)arg1 ;
-(id)initWithEntries:(id)arg1 ;
-(id)init;
-(id)objectsForKeys:(id)arg1 ;
-(id)objectsForKey:(id)arg1 ;
-(unsigned long long)count;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(void)eachObject:(/*^block*/id)arg1 ;
-(NSArray *)allKeys;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

