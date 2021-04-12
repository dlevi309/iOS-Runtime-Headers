/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/


#import <CoreML/CoreML-Structs.h>
@interface MLModelDescriptionUtils : NSObject
+(Metadata*)createMetaData:(id)arg1 ;
+(ImageFeatureType*)getImageFeatureTypeFromConstraint:(id)arg1 ;
+(ArrayFeatureType*)getArrayFeatureTypeFromConstraint:(id)arg1 ;
+(DictionaryFeatureType*)getDictionaryFeatureTypeFromConstraint:(id)arg1 error:(id*)arg2 ;
+(SequenceFeatureType*)getSequenceFeatureTypeFromConstraint:(id)arg1 error:(id*)arg2 ;
+(FeatureType*)createFeatureTypeFromFeatureDescription:(id)arg1 error:(id*)arg2 ;
+(void)copyFeatureDescriptionFrom:(id)arg1 to:(FeatureDescription*)arg2 error:(id*)arg3 ;
+(ModelDescription*)createModelDescription:(id)arg1 error:(id*)arg2 ;
+(BOOL)saveModelDescription:(id)arg1 toSpecification:(MLModelSpecification*)arg2 error:(id*)arg3 ;
@end

