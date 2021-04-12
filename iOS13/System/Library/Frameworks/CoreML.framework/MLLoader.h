/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/


#import <CoreML/CoreML-Structs.h>
@interface MLLoader : NSObject
+(id)loadModelFromAssetAtURL:(id)arg1 error:(id*)arg2 ;
+(BOOL)checkAssetPath:(id)arg1 error:(id*)arg2 ;
+(id)loadModelFromAssetAtURL:(id)arg1 configuration:(id)arg2 error:(id*)arg3 ;
+(id)loadUpdatableModelFromAssetAtURL:(id)arg1 configuration:(id)arg2 error:(id*)arg3 ;
+(id)loadModelFromArchive:(MLModelInputArchiver*)arg1 error:(id*)arg2 ;
+(BOOL)unarchiveCodedModelFrom:(MLModelInputArchiver*)arg1 to:(id*)arg2 error:(id*)arg3 ;
+(id)loadModelFromArchive:(MLModelInputArchiver*)arg1 configuration:(id)arg2 error:(id*)arg3 ;
+(id)loadUpdatableModelFromArchive:(MLModelInputArchiver*)arg1 configuration:(id)arg2 error:(id*)arg3 ;
@end

