/*
* Generated on Thursday, January 14, 2021 at 2:28:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <ProVideo/ProVideo-Structs.h>
#import <ProVideo/PAEFilterDefaultBase.h>

@class NSMutableDictionary, NSURL, NSData;

@interface PAEPhotosFilters : PAEFilterDefaultBase {

	PCMutex* cacheMutex;
	NSMutableDictionary* LUTcache;
	NSURL* LUTCubeURL;
	NSURL* LUTScubeURL;
	NSURL* LUTCcubeURL;
	int whichFilter;
	NSData* cool16BitLUT;

}
-(id)properties;
-(void)dealloc;
-(id)initWithAPIManager:(id)arg1 ;
-(BOOL)addParameters;
-(BOOL)canThrowRenderOutput:(id)arg1 withInput:(id)arg2 withInfo:(SCD_Struct_PA84*)arg3 ;
-(BOOL)frameSetup:(SCD_Struct_PA84*)arg1 inputInfo:(SCD_Struct_PA83)arg2 hardware:(BOOL*)arg3 software:(BOOL*)arg4 ;
-(BOOL)variesOverTime;
-(BOOL)read:(id)arg1 red:(float*)arg2 green:(float*)arg3 blue:(float*)arg4 ;
-(BOOL)readCubeLine:(id)arg1 intoLUTEntries:(vector<RGBA8Pixel, std::__1::allocator<RGBA8Pixel> >*)arg2 ;
-(id)readCubeData:(id)arg1 error:(id*)arg2 ;
-(id)lutFromCubeFile:(id)arg1 ;
-(id)lutFromScubeFile:(id)arg1 ;
-(id)lutFromCcubeFile:(id)arg1 ;
-(id)LUTFromCache:(int)arg1 atPath:(id)arg2 ;
-(id)convertLUTTo16Bit:(HGRef<HGBitmap>*)arg1 ;
-(HGRef<HGBitmap>*)lutBitmapForFilter:(int)arg1 lutDimensions:(int*)arg2 ;
-(HGRef<HGNode>*)generateCoolNode:(HGRef<HGBitmap>*)arg1 withInput:(HGRef<HGNode>*)arg2 ;
@end

