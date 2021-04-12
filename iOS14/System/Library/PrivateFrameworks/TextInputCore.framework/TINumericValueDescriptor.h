/*
* Generated on Thursday, January 14, 2021 at 2:25:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/

#import <TextInputCore/TIMetricDescriptor.h>

@class NSString, NSNumber, NSArray;

@interface TINumericValueDescriptor : TIMetricDescriptor {

	NSString* _calculationExpression;
	NSString* _calculationPrecondition;
	NSNumber* _calculationDefaultValue;
	NSArray* _calculationDependencies;
	NSArray* _bucketThresholds;
	NSArray* _bucketValues;

}

@property (nonatomic,readonly) NSString * calculationExpression;                //@synthesize calculationExpression=_calculationExpression - In the implementation block
@property (nonatomic,readonly) NSString * calculationPrecondition;              //@synthesize calculationPrecondition=_calculationPrecondition - In the implementation block
@property (nonatomic,readonly) NSNumber * calculationDefaultValue;              //@synthesize calculationDefaultValue=_calculationDefaultValue - In the implementation block
@property (nonatomic,readonly) NSArray * calculationDependencies;               //@synthesize calculationDependencies=_calculationDependencies - In the implementation block
@property (nonatomic,readonly) NSArray * bucketThresholds;                      //@synthesize bucketThresholds=_bucketThresholds - In the implementation block
@property (nonatomic,readonly) NSArray * bucketValues;                          //@synthesize bucketValues=_bucketValues - In the implementation block
+(id)numericValueDescriptorWithMetricName:(id)arg1 calculationExpression:(id)arg2 calculationPrecondition:(id)arg3 calculationDefaultValue:(id)arg4 calculationDependencies:(id)arg5 bucketThresholds:(id)arg6 bucketValues:(id)arg7 ;
-(id)initWithMetricName:(id)arg1 calculationExpression:(id)arg2 calculationPrecondition:(id)arg3 calculationDefaultValue:(id)arg4 calculationDependencies:(id)arg5 bucketThresholds:(id)arg6 bucketValues:(id)arg7 ;
-(NSString *)calculationExpression;
-(NSString *)calculationPrecondition;
-(NSNumber *)calculationDefaultValue;
-(NSArray *)calculationDependencies;
-(NSArray *)bucketThresholds;
-(NSArray *)bucketValues;
@end

