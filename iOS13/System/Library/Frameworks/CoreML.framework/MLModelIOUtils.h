/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/


#import <CoreML/CoreML-Structs.h>
@interface MLModelIOUtils : NSObject
+(id)loadFromModelSpecificationInArchive:(MLModelInputArchiver*)arg1 withClass:(Class)arg2 versionInfo:(id)arg3 configuration:(id)arg4 error:(id*)arg5 ;
+(id)versionForSerializedSpecification:(MLModelSpecification*)arg1 options:(id)arg2 error:(id*)arg3 ;
+(id)serializeSpecification:(MLModelSpecification*)arg1 toArchive:(MLModelOutputArchiver*)arg2 error:(id*)arg3 ;
+(BOOL)serializeInterfaceFormat:(MLModelDescriptionSpecification*)arg1 archive:(MLModelOutputArchiver*)arg2 error:(id*)arg3 ;
+(BOOL)deserializeInterfaceFormat:(MLModelDescriptionSpecification*)arg1 archive:(MLModelInputArchiver*)arg2 error:(id*)arg3 ;
+(NSRange)rangeFromAllowedSizeRangeProtoMessage:(const SizeRange*)arg1 ;
+(id)populateConstraintsForFeatureDescription:(const FeatureDescription*)arg1 ;
+(id)descriptionFromProto:(const RepeatedPtrField<CoreML::Specification::FeatureDescription>*)arg1 ;
+(id)orderedNamesFromProto:(const RepeatedPtrField<CoreML::Specification::FeatureDescription>*)arg1 ;
+(BOOL)serializeVersionInfo:(id)arg1 archive:(MLModelOutputArchiver*)arg2 error:(id*)arg3 ;
+(id)deserializeVersionInfoFromArchive:(MLModelInputArchiver*)arg1 error:(id*)arg2 ;
+(BOOL)serializeMetadataAndInterfaceFromSpecification:(MLModelSpecification*)arg1 archive:(MLModelOutputArchiver*)arg2 error:(id*)arg3 ;
+(id)deserializeMetadataAndInterfaceFromArchive:(MLModelInputArchiver*)arg1 error:(id*)arg2 ;
+(id)inputDescriptionFromInterface:(MLModelDescriptionSpecification*)arg1 ;
+(id)outputDescriptionFromInterface:(MLModelDescriptionSpecification*)arg1 ;
+(id)trainingInputDescriptionFromInterface:(MLModelDescriptionSpecification*)arg1 ;
+(id)orderedFeatureNamesFromInterface:(MLModelDescriptionSpecification*)arg1 forInput:(BOOL)arg2 ;
@end

