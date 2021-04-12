/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/


#import <CoreML/CoreML-Structs.h>
@interface MLSaver : NSObject
+(BOOL)saveModelToAssetAtURL:(id)arg1 model:(id)arg2 error:(id*)arg3 ;
+(BOOL)saveModelToArchive:(MLModelOutputArchiver*)arg1 model:(id)arg2 error:(id*)arg3 ;
+(BOOL)saveModelToArchive:(MLModelOutputArchiver*)arg1 model:(id)arg2 compilerOptions:(id)arg3 error:(id*)arg4 ;
+(BOOL)copyModelAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
@end

