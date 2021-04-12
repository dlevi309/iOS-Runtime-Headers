/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sleep.framework/Sleep
*/

#import <Sleep/Sleep-Structs.h>
#import <Sleep/HKSPTestObject.h>
#import <libobjc.A.dylib/HKSPMutableObject.h>

@class HKSPChangeSet, NSString, HKSPTestObject, NSDate, NSSet;

@interface HKSPMutableTestObject : HKSPTestObject <HKSPMutableObject> {

	HKSPChangeSet* _changeSet;

}

@property (nonatomic,copy) NSString * testProperty; 
@property (nonatomic,copy) NSString * otherProperty; 
@property (nonatomic,retain) HKSPTestObject * testRelationship; 
@property (nonatomic,copy) NSDate * lastModifiedDate; 
@property (nonatomic,readonly) HKSPChangeSet * changeSet;                    //@synthesize changeSet=_changeSet - In the implementation block
@property (nonatomic,readonly) unsigned long long version; 
@property (nonatomic,readonly) NSSet * significantChanges; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)freeze;
-(HKSPChangeSet *)changeSet;
-(id)init;
-(id)mutableCopy;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)testProperty;
-(NSString *)otherProperty;
-(HKSPTestObject *)testRelationship;
-(void)setTestProperty:(NSString *)arg1 ;
-(void)setOtherProperty:(NSString *)arg1 ;
-(void)setTestRelationship:(HKSPTestObject *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)_isMutable;
@end

