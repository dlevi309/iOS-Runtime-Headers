/*
* Generated on Thursday, January 14, 2021 at 2:22:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/


#import <CoreML/CoreML-Structs.h>
@interface MLNeuralNetworkUpdateUtils : NSObject
+(BOOL)loadUpdateParameters:(NetworkUpdateParameters*)arg1 fromCompiledArchive:(MLModelInputArchiver*)arg2 error:(id*)arg3 ;
+(id)loadParameterDescriptionsAndContainerFromUpdateParameters:(const NetworkUpdateParameters*)arg1 modelDescription:(id)arg2 ;
+(id)createClassLabelToIndexMapWith:(id)arg1 ;
@end

