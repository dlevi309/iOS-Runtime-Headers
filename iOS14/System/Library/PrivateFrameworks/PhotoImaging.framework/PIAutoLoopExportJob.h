/*
* Generated on Thursday, January 14, 2021 at 2:28:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/

#import <PhotoImaging/PhotoImaging-Structs.h>
#import <NeutrinoCore/NUVideoExportJob.h>

@interface PIAutoLoopExportJob : NUVideoExportJob
+(id)metalRenderer;
+(BOOL)shouldUseMetalRenderer;
-(id)renderer:(out id*)arg1 ;
-(id)initWithVideoExportRequest:(id)arg1 ;
-(BOOL)writeVideoFrom:(id)arg1 toWriter:(id)arg2 stillImageTime:(SCD_Struct_PI7)arg3 createCustomMetadata:(BOOL)arg4 geometryTransform:(id)arg5 inputSize:(CGSize)arg6 outputSize:(CGSize)arg7 error:(out id*)arg8 ;
-(id)initWithAutoLoopExportRequest:(id)arg1 ;
-(id)autoLoopExportRequest;
@end

