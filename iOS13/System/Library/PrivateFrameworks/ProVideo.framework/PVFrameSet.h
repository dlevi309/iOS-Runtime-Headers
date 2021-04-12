/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/


#import <ProVideo/ProVideo-Structs.h>
@class NSMutableDictionary, PVCMSampleBuffer, AVDepthData, PVImageBuffer;

@interface PVFrameSet : NSObject {

	unique_ptr<PVGCDLock, std::__1::default_delete<PVGCDLock> >* _mdLock;
	NSMutableDictionary* _metadata;
	PVCMSampleBuffer* _colorSampleBuffer;
	AVDepthData* _depthData;
	PVImageBuffer* _alphaMaskImageBuffer;

}

@property (nonatomic,readonly) PVCMSampleBuffer * colorSampleBuffer;               //@synthesize colorSampleBuffer=_colorSampleBuffer - In the implementation block
@property (nonatomic,readonly) SCD_Struct_PV20 presentationTimeStamp; 
@property (nonatomic,readonly) PVImageBuffer * colorImageBuffer; 
@property (nonatomic,readonly) AVDepthData * depthData;                            //@synthesize depthData=_depthData - In the implementation block
@property (retain) PVImageBuffer * alphaMaskImageBuffer;                           //@synthesize alphaMaskImageBuffer=_alphaMaskImageBuffer - In the implementation block
-(AVDepthData *)depthData;
-(SCD_Struct_PV20)presentationTimeStamp;
-(id)metadataDict;
-(void)setMetadataDict:(id)arg1 ;
-(PVCMSampleBuffer *)colorSampleBuffer;
-(id)initWithColorBuffer:(id)arg1 depthData:(id)arg2 metadata:(id)arg3 ;
-(void)setMetadataObject:(id)arg1 forKey:(id)arg2 ;
-(PVImageBuffer *)colorImageBuffer;
-(id)initWithColorBuffer:(id)arg1 metadata:(id)arg2 ;
-(id)metadataObjectForKey:(id)arg1 ;
-(PVImageBuffer *)alphaMaskImageBuffer;
-(void)setAlphaMaskImageBuffer:(PVImageBuffer *)arg1 ;
-(void)commonInitWithColorBuffer:(id)arg1 depthData:(id)arg2 metadata:(id)arg3 ;
@end

