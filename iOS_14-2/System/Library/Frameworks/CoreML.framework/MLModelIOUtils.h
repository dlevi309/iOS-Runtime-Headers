/*
* Generated on Thursday, January 14, 2021 at 2:22:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/


#import <CoreML/CoreML-Structs.h>
@interface MLModelIOUtils : NSObject
+(id)populateConstraintsForFeatureDescription:(const FeatureDescription*)arg1 ;
+(BOOL)serializeInterfaceFormat:(MLModelDescriptionSpecification*)arg1 archive:(MLModelOutputArchiver*)arg2 error:(id*)arg3 ;
+(BOOL)deserializeInterfaceFormat:(MLModelDescriptionSpecification*)arg1 archive:(MLModelInputArchiver*)arg2 error:(id*)arg3 ;
+(id)versionForSerializedSpecification:(MLModelSpecification*)arg1 options:(id)arg2 error:(id*)arg3 ;
+(NSRange)rangeFromAllowedSizeRangeProtoMessage:(const SizeRange*)arg1 ;
+(id)outputDescriptionFromInterface:(MLModelDescriptionSpecification*)arg1 ;
+(id)deserializeVersionInfoFromArchive:(MLModelInputArchiver*)arg1 error:(id*)arg2 ;
+(id)loadFromModelSpecificationInArchive:(MLModelInputArchiver*)arg1 withClass:(Class)arg2 versionInfo:(id)arg3 configuration:(id)arg4 error:(id*)arg5 ;
+(id)trainingInputDescriptionFromInterface:(MLModelDescriptionSpecification*)arg1 ;
+(id)descriptionFromProto:(const RepeatedPtrField<CoreML::Specification::FeatureDescription>*)arg1 ;
+(BOOL)serializeVersionInfo:(id)arg1 archive:(MLModelOutputArchiver*)arg2 error:(id*)arg3 ;
+(id)orderedFeatureNamesFromInterface:(MLModelDescriptionSpecification*)arg1 forInput:(BOOL)arg2 ;
+(id)populateConstraintsForImageFeatureDescription:(const FeatureDescription*)arg1 ;
+(id)populateConstraintsForImageFeatureDescriptionElement:(MLFeatureDescriptionSpecification*)arg1 ;
+(BOOL)serializeMetadataAndInterfaceFromSpecification:(MLModelSpecification*)arg1 archive:(MLModelOutputArchiver*)arg2 error:(id*)arg3 ;
+(id)serializeSpecification:(MLModelSpecification*)arg1 toArchive:(MLModelOutputArchiver*)arg2 error:(id*)arg3 ;
+(id)orderedNamesFromProto:(const RepeatedPtrField<CoreML::Specification::FeatureDescription>*)arg1 ;
+(id)deserializeMetadataAndInterfaceFromArchive:(MLModelInputArchiver*)arg1 error:(id*)arg2 ;
+(id)inputDescriptionFromInterface:(MLModelDescriptionSpecification*)arg1 ;
@end

