/*
* Generated on Thursday, January 14, 2021 at 2:25:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NURenderJob.h>

@class NSDictionary;

@interface NUImageDataJob : NURenderJob {

	NSDictionary* _data;

}
-(id)cacheKey;
-(BOOL)render:(out id*)arg1 ;
-(id)result;
-(id)requestOptions;
-(void)cleanUp;
-(BOOL)wantsCompleteStage;
-(BOOL)wantsOutputGeometry;
-(BOOL)wantsOutputImage;
-(id)scalePolicy;
-(id)extractDataToDictionary:(id)arg1 bounds:(SCD_Struct_NU8)arg2 dataExtractor:(id)arg3 options:(id)arg4 colorSpace:(CGColorSpaceRef)arg5 error:(id*)arg6 ;
@end

