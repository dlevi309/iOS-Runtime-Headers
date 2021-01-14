/*
* Generated on Thursday, January 14, 2021 at 2:28:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <ProVideo/ProVideo-Structs.h>
#import <ProVideo/PAEFilterDefaultBase.h>

@class PAEKeyerMatteTools, PAEKeyerPreprocess;

@interface PAEChromaKeyeriOS : PAEFilterDefaultBase {

	PAEKeyerMatteTools* _matteTools;
	PAEKeyerPreprocess* _preprocessTools;
	HGBitmapLoader* _lutsBitmapLoaderCache;

}
-(id)properties;
-(void)dealloc;
-(id)initWithAPIManager:(id)arg1 ;
-(BOOL)addParameters;
-(BOOL)canThrowRenderOutput:(id)arg1 withInput:(id)arg2 withInfo:(SCD_Struct_PA84*)arg3 ;
-(BOOL)frameSetup:(SCD_Struct_PA84*)arg1 inputInfo:(SCD_Struct_PA83)arg2 hardware:(BOOL*)arg3 software:(BOOL*)arg4 ;
-(void)createLutForNode:(HGNode*)arg1 input:(int)arg2 rect:(const HGRect*)arg3 omKeyer:(PAEKeyerOMKeyer2D*)arg4 ;
@end

