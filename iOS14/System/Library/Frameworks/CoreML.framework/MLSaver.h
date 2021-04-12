/*
* Generated on Thursday, January 14, 2021 at 2:22:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/


#import <CoreML/CoreML-Structs.h>
@interface MLSaver : NSObject
+(BOOL)saveModelToAssetAtURL:(id)arg1 model:(id)arg2 error:(id*)arg3 ;
+(BOOL)saveModelToArchive:(MLModelOutputArchiver*)arg1 model:(id)arg2 error:(id*)arg3 ;
+(BOOL)saveModelToArchive:(MLModelOutputArchiver*)arg1 model:(id)arg2 compilerOptions:(id)arg3 error:(id*)arg4 ;
+(BOOL)copyModelAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
@end

