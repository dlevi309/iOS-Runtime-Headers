/*
* Generated on Thursday, January 14, 2021 at 2:23:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/


#import <Metal/Metal-Structs.h>
@interface _MTLIndirectDispatchThreadgroupsArguments : NSObject {

	SCD_Struct_MT31 _threadgroupsPerGrid;
	SCD_Struct_MT31 _threadsPerThreadgroup;

}

@property (assign,nonatomic) SCD_Struct_MT31 threadgroupsPerGrid;                //@synthesize threadgroupsPerGrid=_threadgroupsPerGrid - In the implementation block
@property (assign,nonatomic) SCD_Struct_MT31 threadsPerThreadgroup;              //@synthesize threadsPerThreadgroup=_threadsPerThreadgroup - In the implementation block
-(SCD_Struct_MT31)threadgroupsPerGrid;
-(void)setThreadgroupsPerGrid:(SCD_Struct_MT31)arg1 ;
-(SCD_Struct_MT31)threadsPerThreadgroup;
-(void)setThreadsPerThreadgroup:(SCD_Struct_MT31)arg1 ;
@end

