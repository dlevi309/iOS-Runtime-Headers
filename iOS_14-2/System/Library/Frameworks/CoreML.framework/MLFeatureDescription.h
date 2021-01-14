/*
* Generated on Thursday, January 14, 2021 at 2:22:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/

#import <CoreML/CoreML-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary, MLMultiArrayConstraint, MLImageConstraint, MLDictionaryConstraint, MLSequenceConstraint;

@interface MLFeatureDescription : NSObject <NSCopying, NSSecureCoding> {

	BOOL _optional;
	NSString* _name;
	long long _type;
	NSDictionary* _valueConstraints;
	MLMultiArrayConstraint* _multiArrayConstraintCached;
	MLImageConstraint* _imageConstraintCached;
	MLDictionaryConstraint* _dictionaryConstraintCached;
	MLSequenceConstraint* _sequenceConstraintCached;

}

@property (retain) NSDictionary * valueConstraints;                                              //@synthesize valueConstraints=_valueConstraints - In the implementation block
@property (nonatomic,readonly) MLMultiArrayConstraint * multiArrayConstraintCached;              //@synthesize multiArrayConstraintCached=_multiArrayConstraintCached - In the implementation block
@property (nonatomic,readonly) MLImageConstraint * imageConstraintCached;                        //@synthesize imageConstraintCached=_imageConstraintCached - In the implementation block
@property (nonatomic,readonly) MLDictionaryConstraint * dictionaryConstraintCached;              //@synthesize dictionaryConstraintCached=_dictionaryConstraintCached - In the implementation block
@property (nonatomic,readonly) MLSequenceConstraint * sequenceConstraintCached;                  //@synthesize sequenceConstraintCached=_sequenceConstraintCached - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                             //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) long long type;                                                   //@synthesize type=_type - In the implementation block
@property (getter=isOptional,nonatomic,readonly) BOOL optional;                                  //@synthesize optional=_optional - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)featureDescriptionWithName:(id)arg1 type:(long long)arg2 optional:(BOOL)arg3 constraints:(id)arg4 ;
-(id)debugQuickLookObject;
-(BOOL)isOptional;
-(MLImageConstraint *)imageConstraintCached;
-(BOOL)isAllowedValue:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)multiArrayConstraint;
-(NSString *)name;
-(id)initWithName:(id)arg1 type:(long long)arg2 optional:(BOOL)arg3 contraints:(id)arg4 ;
-(id)description;
-(MLDictionaryConstraint *)dictionaryConstraintCached;
-(NSDictionary *)valueConstraints;
-(id)imageConstraint;
-(MLSequenceConstraint *)sequenceConstraintCached;
-(BOOL)isAllowedValue:(id)arg1 error:(id*)arg2 ;
-(void)setValueConstraints:(NSDictionary *)arg1 ;
-(long long)type;
-(id)dictionaryConstraint;
-(id)initWithCoder:(id)arg1 ;
-(id)sequenceConstraint;
-(MLMultiArrayConstraint *)multiArrayConstraintCached;
-(BOOL)allowsValuesWithDescription:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

