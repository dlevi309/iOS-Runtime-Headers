/*
* Generated on Thursday, January 14, 2021 at 2:28:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/


#import <PhotoImaging/PhotoImaging-Structs.h>
@interface PIImageIO : NSObject
+(BOOL)writeImage:(id)arg1 fileURL:(id)arg2 ;
+(BOOL)writeCGImage:(CGImageRef)arg1 fileURL:(id)arg2 ;
+(BOOL)writeCGImage:(CGImageRef)arg1 fileURL:(id)arg2 options:(id)arg3 ;
+(id)writeImage:(id)arg1 toTemporaryDirectoryWithBasename:(id)arg2 ;
+(id)writeImage:(id)arg1 toDirectoryAtPath:(id)arg2 withBasename:(id)arg3 ;
@end

