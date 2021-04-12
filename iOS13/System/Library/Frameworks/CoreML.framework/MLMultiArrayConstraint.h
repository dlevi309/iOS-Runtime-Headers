/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/

#import <CoreML/CoreML-Structs.h>
#import <libobjc.A.dylib/MLFeatureValueConstraint.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, MLMultiArrayShapeConstraint;

@interface MLMultiArrayConstraint : NSObject <MLFeatureValueConstraint, NSCopying, NSSecureCoding> {

	NSArray* _shape;
	long long _dataType;
	MLMultiArrayShapeConstraint* _shapeConstraint;

}

@property (nonatomic,readonly) NSArray * shape;                                            //@synthesize shape=_shape - In the implementation block
@property (nonatomic,readonly) long long dataType;                                         //@synthesize dataType=_dataType - In the implementation block
@property (nonatomic,readonly) MLMultiArrayShapeConstraint * shapeConstraint;              //@synthesize shapeConstraint=_shapeConstraint - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)constraintWithShape:(id)arg1 dataType:(long long)arg2 shapeConstraint:(id)arg3 ;
+(id)constraintWithShape:(id)arg1 dataType:(long long)arg2 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)shape;
-(MLMultiArrayShapeConstraint *)shapeConstraint;
-(long long)dataType;
-(BOOL)isAllowedValue:(id)arg1 error:(id*)arg2 ;
-(BOOL)isAllowedShape:(id)arg1 error:(id*)arg2 ;
-(id)initWithShape:(id)arg1 dataType:(long long)arg2 shapeConstraint:(id)arg3 ;
-(BOOL)isAllowedDataType:(long long)arg1 error:(id*)arg2 ;
-(BOOL)isAllowedValue:(id)arg1 isNeuralNetworkInput:(BOOL)arg2 usingRank5Mapping:(BOOL)arg3 featureName:(id)arg4 error:(id*)arg5 ;
@end

