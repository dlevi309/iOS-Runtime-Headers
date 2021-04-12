/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/


#import <Metal/Metal-Structs.h>
@interface _MTLIndirectDispatchThreadsArguments : NSObject {

	SCD_Struct_MT11 _threadsPerGrid;
	SCD_Struct_MT11 _threadsPerThreadgroup;

}

@property (assign,nonatomic) SCD_Struct_MT11 threadsPerGrid;                     //@synthesize threadsPerGrid=_threadsPerGrid - In the implementation block
@property (assign,nonatomic) SCD_Struct_MT11 threadsPerThreadgroup;              //@synthesize threadsPerThreadgroup=_threadsPerThreadgroup - In the implementation block
-(SCD_Struct_MT11)threadsPerThreadgroup;
-(void)setThreadsPerThreadgroup:(SCD_Struct_MT11)arg1 ;
-(SCD_Struct_MT11)threadsPerGrid;
-(void)setThreadsPerGrid:(SCD_Struct_MT11)arg1 ;
@end

