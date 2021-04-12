/*
* Generated on Monday, March 1, 2021 at 2:35:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

