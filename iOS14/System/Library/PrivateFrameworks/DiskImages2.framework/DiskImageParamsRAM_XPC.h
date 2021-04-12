/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DiskImages2.framework/DiskImages2
*/

#import <DiskImages2/DiskImages2-Structs.h>
#import <DiskImages2/DiskImageParamsRaw_XPC.h>

@interface DiskImageParamsRAM_XPC : DiskImageParamsRaw_XPC
+(BOOL)supportsSecureCoding;
-(id)initWithURL:(id)arg1 error:(id*)arg2 ;
-(void)setBlockSize:(unsigned long long)arg1 ;
-(unique_ptr<DiskImage, std::__1::default_delete<DiskImage> >*)createDiskImage;
@end

