/*
* Generated on Thursday, January 14, 2021 at 2:23:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWStillImageProcessorInput.h>

@protocol BWJasperColorStillsExecutorInputDelegate;
@class NSMutableArray, NSArray;

@interface BWJasperColorStillsExecutorInput : BWStillImageProcessorInput {

	id<BWJasperColorStillsExecutorInputDelegate> _delegate;
	NSMutableArray* _pointClouds;
	SCD_Struct_BW8 _colorBufferPTS;
	double _colorBufferExposureTime;
	opaqueCMSampleBufferRef _colorBuffer;
	unsigned long long _colorBufferType;
	int _numberOfPointCloudsRequired;
	int _maxinimumNumberOfPointCLouds;

}

@property (nonatomic,retain) id<BWJasperColorStillsExecutorInputDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (getter=isReadyToExecute,nonatomic,readonly) BOOL readyToExecute; 
@property (nonatomic,readonly) NSArray * pointClouds;                                            //@synthesize pointClouds=_pointClouds - In the implementation block
@property (nonatomic,readonly) opaqueCMSampleBufferRef colorBuffer;                              //@synthesize colorBuffer=_colorBuffer - In the implementation block
@property (nonatomic,readonly) unsigned long long colorBufferType;                               //@synthesize colorBufferType=_colorBufferType - In the implementation block
@property (nonatomic,readonly) BOOL needMorePointClouds; 
-(void)addPointCloud:(opaqueCMSampleBufferRef)arg1 ;
-(id<BWJasperColorStillsExecutorInputDelegate>)delegate;
-(BOOL)isReadyToExecute;
-(BOOL)needMorePointClouds;
-(void)setColorBufferPTS:(SCD_Struct_BW8)arg1 exposureTime:(double)arg2 ;
-(void)setColorBuffer:(opaqueCMSampleBufferRef)arg1 type:(unsigned long long)arg2 ;
-(id)jasperPointCloudsForColorBuffer;
-(void)_trimPointClouds;
-(NSArray *)pointClouds;
-(unsigned long long)colorBufferType;
-(opaqueCMSampleBufferRef)colorBuffer;
-(void)setDelegate:(id<BWJasperColorStillsExecutorInputDelegate>)arg1 ;
-(id)initWithSettings:(id)arg1 portType:(id)arg2 ;
-(void)dealloc;
@end

