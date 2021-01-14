/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sleep.framework/Sleep
*/

#import <Sleep/Sleep-Structs.h>
#import <libobjc.A.dylib/HKSPObject.h>

@class NSDate, NSString, NSSet;

@interface HKSPTestObject : NSObject <HKSPObject> {

	NSDate* lastModifiedDate;
	unsigned long long version;
	NSString* _testProperty;
	NSString* _otherProperty;
	HKSPTestObject* _testRelationship;

}

@property (nonatomic,readonly) NSString * testProperty;                        //@synthesize testProperty=_testProperty - In the implementation block
@property (nonatomic,readonly) NSString * otherProperty;                       //@synthesize otherProperty=_otherProperty - In the implementation block
@property (nonatomic,readonly) HKSPTestObject * testRelationship;              //@synthesize testRelationship=_testRelationship - In the implementation block
@property (nonatomic,readonly) unsigned long long version; 
@property (nonatomic,copy,readonly) NSDate * lastModifiedDate; 
@property (nonatomic,readonly) NSSet * significantChanges; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEquivalentTo:(id)arg1 ;
-(id)mutableCopy;
-(NSDate *)lastModifiedDate;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)_equateTo:(id)arg1 builderBuilderBlock:(/*^block*/id)arg2 ;
-(void)copyFromObject:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(unsigned long long)hash;
-(id)initFromObject:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_buildForEquivalenceTo:(id)arg1 builder:(id)arg2 ;
-(NSString *)testProperty;
-(id)initWithTestProperty:(id)arg1 testRelationship:(id)arg2 ;
-(id)initWithTestProperty:(id)arg1 otherProperty:(id)arg2 testRelationship:(id)arg3 ;
-(NSString *)otherProperty;
-(HKSPTestObject *)testRelationship;
-(id)initWithTestProperty:(id)arg1 ;
-(unsigned long long)version;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)_isMutable;
-(BOOL)isEqual:(id)arg1 ;
@end

