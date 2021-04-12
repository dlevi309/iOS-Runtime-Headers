/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libMemoryResourceException.dylib
*/


@protocol FPOutputFormatter <NSObject>
@optional
-(void)printVmmapLikeOutputForProcess:(id)arg1 regions:(id)arg2;

@required
-(void)end;
-(void)printSummaryCategories:(id)arg1 total:(SCD_Struct_FP0*)arg2 hadErrors:(BOOL)arg3;
-(void)printProcessHeader:(id)arg1;
-(void)endProcessHeader:(id)arg1;
-(void)printProcessTotal:(id)arg1 forProcess:(id)arg2;
-(void)printProcessCategories:(id)arg1 total:(SCD_Struct_FP0*)arg2;
-(void)printSharedCategories:(id)arg1 sharedWith:(id)arg2 forProcess:(id)arg3 hasProcessView:(BOOL)arg4 total:(SCD_Struct_FP0*)arg5;
-(void)printProcessAuxData:(id)arg1;
-(void)printProcessesWithWarnings:(id)arg1 processesWithErrors:(id)arg2 globalErrors:(id)arg3;
-(void)printGlobalAuxData:(id)arg1;

@end

