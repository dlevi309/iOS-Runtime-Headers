/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)set;
+(id)setWithSet:(id)arg1 ;
+(id)setWithArray:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)initWithObjects:(const id*)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long)count;
-(id)member:(id)arg1 ;
-(id)objectEnumerator;
-(id)initWithArray:(id)arg1 ;
-(BOOL)containsObject:(id)arg1 ;
-(void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)allObjects;
-(void)enumerateObjectsUsingBlock:(/*^block*/id)arg1 ;
-(id)initWithSet:(id)arg1 ;
-(id)anyObject;
-(void)enumerateModificationsUsingBlock:(/*^block*/id)arg1 ;
-(id)_initWithEnumerable:(id)arg1 count:(unsigned long long)arg2 ;
-(void)enumerateModificationsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)_initWithUnderlyingSet:(id)arg1 changesDictionary:(id)arg2 ;
-(BOOL)isEqualToTrackedSet:(id)arg1 ;
-(id)allModifications;
@end

