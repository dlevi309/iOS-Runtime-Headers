/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ClassKit.framework/ClassKit
*/

#import <ClassKit/ClassKit-Structs.h>
#import <ClassKit/CLSObject.h>

@interface CLSImageUtils : CLSObject
+(id)JPEGDataFromCGImage:(CGImageRef)arg1 error:(id*)arg2 ;
+(CGImageRef)CGImageFromJPEGData:(id)arg1 error:(id*)arg2 ;
+(id)JPEGDataFromCGImage:(CGImageRef)arg1 desiredMinimumDimension:(unsigned long long)arg2 desiredMaximumDimension:(unsigned long long)arg3 error:(id*)arg4 ;
@end

