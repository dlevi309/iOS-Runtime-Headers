/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <Contacts/Contacts-Structs.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/CNKeyDescriptor_Private.h>

@class NSString;

@interface CNContactKeyVector : NSObject <NSMutableCopying, CNKeyDescriptor_Private> {

	long long _bitBuckets[1];

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)keyVectorWithKeys:(id)arg1 ;
+(id)keyVector;
+(id)keyVectorWithKey:(id)arg1 ;
+(id)freezeIfClassIsImmutable:(id)arg1 ;
+(id)keyVectorWithAllKeys;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(BOOL)containsKey:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)enumeratePropertiesUsingBlock:(/*^block*/id)arg1 ;
-(id)_cn_requiredKeys;
-(id)_cn_optionalKeys;
-(BOOL)intersectsKeyVector:(id)arg1 ;
-(void)_cn_executeGetterForRepresentedKeys:(/*^block*/id)arg1 ;
-(id)_cn_ignorableKeys;
-(id)keyVectorByAddingKey:(id)arg1 ;
-(BOOL)isEqualToKeyVector:(id)arg1 ;
-(id)keyVectorByAddingKeysFromKeyVector:(id)arg1 ;
-(id)keyVectorByRemovingKeysFromKeyVector:(id)arg1 ;
-(id)initWithKeys:(id)arg1 ;
-(id)initWithAllKeys;
-(void)_checkStorageSize;
-(long long*)_bitBuckets;
-(id)keyVectorByAddingKeys:(id)arg1 ;
-(BOOL)containsAllKeys;
-(BOOL)isSubsetOfKeyVector:(id)arg1 ;
@end

