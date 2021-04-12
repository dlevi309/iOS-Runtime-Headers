/*
* Generated on Thursday, January 14, 2021 at 2:22:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/

#import <CoreML/CoreML-Structs.h>
#import <CoreML/MLModel.h>
#import <libobjc.A.dylib/MLSpecificationCompiler.h>

@interface MLNeuralNetworkCompiler : MLModel <MLSpecificationCompiler>
+(id)compiledVersionForSpecification:(MLModelSpecification*)arg1 options:(id)arg2 error:(id*)arg3 ;
+(id)compileSpecification:(MLModelSpecification*)arg1 toArchive:(MLModelOutputArchiver*)arg2 options:(id)arg3 error:(id*)arg4 ;
+(BOOL)collectNNModelDetailsFromArchive:(MLModelOutputArchiver*)arg1 spec:(MLModelSpecification*)arg2 error:(id*)arg3 ;
@end

