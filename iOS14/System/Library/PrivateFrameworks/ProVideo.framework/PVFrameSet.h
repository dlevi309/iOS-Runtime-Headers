/*
* Generated on Thursday, January 14, 2021 at 2:28:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,readonly) SCD_Struct_PV22 presentationTimeStamp; 
@property (nonatomic,readonly) PVImageBuffer * colorImageBuffer; 
@property (nonatomic,readonly) AVDepthData * depthData;                            //@synthesize depthData=_depthData - In the implementation block
@property (retain) PVImageBuffer * alphaMaskImageBuffer;                           //@synthesize alphaMaskImageBuffer=_alphaMaskImageBuffer - In the implementation block
-(AVDepthData *)depthData;
-(SCD_Struct_PV22)presentationTimeStamp;
-(id)metadataDict;
-(void)setMetadataDict:(id)arg1 ;
-(id)metadataObjectForKey:(id)arg1 ;
-(PVImageBuffer *)colorImageBuffer;
-(void)setMetadataObject:(id)arg1 forKey:(id)arg2 ;
-(PVCMSampleBuffer *)colorSampleBuffer;
-(id)initWithColorBuffer:(id)arg1 depthData:(id)arg2 metadata:(id)arg3 ;
-(id)initWithColorBuffer:(id)arg1 metadata:(id)arg2 ;
-(PVImageBuffer *)alphaMaskImageBuffer;
-(void)setAlphaMaskImageBuffer:(PVImageBuffer *)arg1 ;
-(void)commonInitWithColorBuffer:(id)arg1 depthData:(id)arg2 metadata:(id)arg3 ;
@end

