/*
* Generated on Monday, March 1, 2021 at 2:35:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)properties;
-(id)initWithAPIManager:(id)arg1 ;
-(BOOL)addParameters;
-(BOOL)canThrowRenderOutput:(id)arg1 withInput:(id)arg2 withInfo:(SCD_Struct_PA79*)arg3 ;
-(BOOL)frameSetup:(SCD_Struct_PA79*)arg1 inputInfo:(SCD_Struct_PA80)arg2 hardware:(BOOL*)arg3 software:(BOOL*)arg4 ;
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
-(HGRef<HGNode>*)applyP3PhotosFilterToNode:(HGRef<HGNode>*)arg1 withInputImage:(id)arg2 andLUTNode:(HGRef<HGNode>*)arg3 ;
@end

