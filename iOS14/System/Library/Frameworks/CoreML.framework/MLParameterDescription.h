/*
* Generated on Thursday, January 14, 2021 at 2:22:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/

#import <CoreML/CoreML-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class MLParameterKey, MLNumericConstraint;

@interface MLParameterDescription : NSObject <NSSecureCoding> {

	MLParameterKey* _key;
	id _defaultValue;
	MLNumericConstraint* _numericConstraint;

}

@property (nonatomic,retain) MLParameterKey * key;                                 //@synthesize key=_key - In the implementation block
@property (nonatomic,retain) id defaultValue;                                      //@synthesize defaultValue=_defaultValue - In the implementation block
@property (nonatomic,retain) MLNumericConstraint * numericConstraint;              //@synthesize numericConstraint=_numericConstraint - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)parameterDescriptionForKey:(id)arg1 int64ParameterSpec:(const Int64Parameter*)arg2 ;
+(id)parameterDescriptionForKey:(id)arg1 doubleParameterSpec:(const DoubleParameter*)arg2 ;
+(id)parameterDescriptionForKey:(id)arg1 stringParameterSpec:(const StringParameter*)arg2 ;
+(id)parameterDescriptionForKey:(id)arg1 boolParameterSpec:(const BoolParameter*)arg2 ;
+(id)parameterDescriptionForKey:(id)arg1 defaultValue:(id)arg2 numericConstraint:(id)arg3 ;
-(void)setDefaultValue:(id)arg1 ;
-(id)defaultValue;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(MLParameterKey *)key;
-(id)initWithCoder:(id)arg1 ;
-(MLNumericConstraint *)numericConstraint;
-(void)setNumericConstraint:(MLNumericConstraint *)arg1 ;
-(void)setKey:(MLParameterKey *)arg1 ;
@end

