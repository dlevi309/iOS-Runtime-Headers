/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DiskImages2.framework/DiskImages2
*/

#import <DiskImages2/DiskImages2-Structs.h>
#import <DiskImages2/DiskImageParamsXPC.h>

@interface DiskImageParamsRaw_XPC : DiskImageParamsXPC
+(BOOL)supportsSecureCoding;
-(BOOL)isWritableFormat;
-(unique_ptr<DiskImage, std::__1::default_delete<DiskImage> >*)createDiskImage;
-(unsigned long long)numBlocks;
@end

