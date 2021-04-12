/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NURenderJob.h>

@class NSDictionary;

@interface NUImageDataJob : NURenderJob {

	NSDictionary* _data;

}
-(id)result;
-(id)cacheKey;
-(BOOL)render:(out id*)arg1 ;
-(void)cleanUp;
-(id)requestOptions;
-(BOOL)wantsCompleteStage;
-(BOOL)wantsOutputGeometry;
-(BOOL)wantsOutputImage;
-(id)scalePolicy;
-(id)extractDataToDictionary:(id)arg1 bounds:(SCD_Struct_NU8)arg2 dataExtractor:(id)arg3 options:(id)arg4 colorSpace:(CGColorSpaceRef)arg5 error:(id*)arg6 ;
@end

