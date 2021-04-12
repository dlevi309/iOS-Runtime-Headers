/*
* Generated on Thursday, January 14, 2021 at 2:28:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <ProVideo/ProVideo-Structs.h>
#import <ProVideo/PVRendererBase.h>

@interface PVEffectPreviewGenerator : PVRendererBase
+(id)sharedGenerator;
+(void)cleanupCaches;
-(id)initWithOptions:(id)arg1 ;
-(void)generatePreviewForEffect:(id)arg1 atTime:(SCD_Struct_PV22)arg2 inputImage:(CGImageRef)arg3 outputSize:(CGSize)arg4 waitForFinish:(BOOL)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)cancelAllPendingPreviewRequests;
@end

