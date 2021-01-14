/*
* Generated on Thursday, January 14, 2021 at 2:22:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/


#import <CoreML/CoreML-Structs.h>
@interface MLLoader : NSObject
+(id)loadUpdatableModelFromAssetAtURL:(id)arg1 configuration:(id)arg2 error:(id*)arg3 ;
+(id)loadModelFromArchive:(MLModelInputArchiver*)arg1 error:(id*)arg2 ;
+(id)loadUpdatableModelFromArchive:(MLModelInputArchiver*)arg1 configuration:(id)arg2 error:(id*)arg3 ;
+(BOOL)createDecryptSessionForModelAtURL:(id)arg1 configuration:(id)arg2 decryptSession:(id*)arg3 error:(id*)arg4 ;
+(id)loadModelFromAssetAtURL:(id)arg1 error:(id*)arg2 ;
+(id)loadModelFromAssetAtURL:(id)arg1 configuration:(id)arg2 error:(id*)arg3 ;
+(BOOL)unarchiveCodedModelFrom:(MLModelInputArchiver*)arg1 to:(id*)arg2 error:(id*)arg3 ;
+(id)loadModelFromArchive:(MLModelInputArchiver*)arg1 configuration:(id)arg2 loaderEvent:(id)arg3 error:(id*)arg4 ;
+(id)loadModelFromArchive:(MLModelInputArchiver*)arg1 configuration:(id)arg2 error:(id*)arg3 ;
+(id)loadModelFromAssetAtURL:(id)arg1 configuration:(id)arg2 loaderEvent:(id)arg3 error:(id*)arg4 ;
+(BOOL)checkAssetPath:(id)arg1 error:(id*)arg2 ;
@end

