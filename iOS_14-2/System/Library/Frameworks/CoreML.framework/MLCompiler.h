/*
* Generated on Thursday, January 14, 2021 at 2:22:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/


#import <CoreML/CoreML-Structs.h>
@interface MLCompiler : NSObject
+(id)compileSpecificationAtURL:(id)arg1 toURL:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
+(BOOL)encryptCompiledModelAtURL:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
+(id)versionInfo;
+(BOOL)encryptFileAtURL:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
+(BOOL)storeEncryptionInfoInCompiledArchive:(MLModelOutputArchiver*)arg1 options:(id)arg2 error:(id*)arg3 ;
+(id)contentsOfDirectoryAtURL:(id)arg1 error:(id*)arg2 ;
+(BOOL)fingerprintSpecificationAtURL:(id)arg1 toArchive:(MLModelOutputArchiver*)arg2 error:(id*)arg3 ;
+(id)compiledVersionForSpecificationAtURL:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
+(id)compiledVersionForSpecification:(MLModelSpecification*)arg1 options:(id)arg2 error:(id*)arg3 ;
+(id)compileSpecification:(MLModelSpecification*)arg1 toArchive:(MLModelOutputArchiver*)arg2 options:(id)arg3 error:(id*)arg4 ;
@end

