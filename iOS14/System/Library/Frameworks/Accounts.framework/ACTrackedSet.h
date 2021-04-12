/*
* Generated on Thursday, January 14, 2021 at 2:20:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Accounts.framework/Accounts
*/

#import <Accounts/Accounts-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableSet, NSMutableDictionary;

@interface ACTrackedSet : NSObject <NSCoding, NSCopying, NSMutableCopying, NSSecureCoding> {

	NSMutableSet* _underlyingSet;
	NSMutableDictionary* _changesDictionary;

}

@property (readonly) unsigned long long count; 
+(BOOL)supportsSecureCoding;
+(id)setWithArray:(id)arg1 ;
+(id)setWithSet:(id)arg1 ;
+(id)set;
-(id)_initWithUnderlyingSet:(id)arg1 changesDictionary:(id)arg2 ;
-(id)init;
-(void)enumerateModificationsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)initWithObjects:(const id*)arg1 count:(unsigned long long)arg2 ;
-(id)objectEnumerator;
-(id)anyObject;
-(void)enumerateModificationsUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateObjectsUsingBlock:(/*^block*/id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)count;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqualToTrackedSet:(id)arg1 ;
-(BOOL)containsObject:(id)arg1 ;
-(id)_initWithEnumerable:(id)arg1 count:(unsigned long long)arg2 ;
-(id)allModifications;
-(id)member:(id)arg1 ;
-(id)allObjects;
-(id)description;
-(void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithSet:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithArray:(id)arg1 ;
@end

