/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/


#import <ProVideo/ProVideo-Structs.h>
@class PVImageBuffer;

@interface PVComputeGuidedFilter : NSObject {

	PVImageBuffer* _guide;
	int _radius;
	float _epsilon;

}

@property (nonatomic,readonly) int radius;                 //@synthesize radius=_radius - In the implementation block
@property (nonatomic,readonly) float epsilon;              //@synthesize epsilon=_epsilon - In the implementation block
-(int)radius;
-(float)epsilon;
-(BOOL)runCPUPathOnInput:(HGBitmap*)arg1 guide:(HGBitmap*)arg2 output:(HGBitmap*)arg3 radius:(int)arg4 epsilon:(float)arg5 ;
-(void)processStage1Float32Input:(float*)arg1 inputRowBytes:(unsigned long long)arg2 guide:(float*)arg3 guideRowBytes:(unsigned long long)arg4 output:(float*)arg5 outputRowBytes:(unsigned long long)arg6 width:(int)arg7 height:(int)arg8 radius:(int)arg9 ;
-(void)processStage1UInt8Input:(char*)arg1 inputRowBytes:(unsigned long long)arg2 guide:(char*)arg3 guideRowBytes:(unsigned long long)arg4 output:(float*)arg5 outputRowBytes:(unsigned long long)arg6 width:(int)arg7 height:(int)arg8 radius:(int)arg9 ;
-(void)processStage5Float32Guide:(float*)arg1 guideRowBytes:(unsigned long long)arg2 stats:(float*)arg3 statsRowBytes:(unsigned long long)arg4 output:(float*)arg5 outputRowBytes:(unsigned long long)arg6 width:(int)arg7 height:(int)arg8 radius:(int)arg9 ;
-(void)processStage5UInt6Guide:(char*)arg1 guideRowBytes:(unsigned long long)arg2 stats:(float*)arg3 statsRowBytes:(unsigned long long)arg4 output:(char*)arg5 outputRowBytes:(unsigned long long)arg6 width:(int)arg7 height:(int)arg8 radius:(int)arg9 ;
-(id)initWithGuide:(id)arg1 radius:(int)arg2 epsilon:(float)arg3 ;
-(BOOL)applyFilterToInput:(id)arg1 output:(id)arg2 ;
@end

