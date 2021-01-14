/*
* Generated on Thursday, January 14, 2021 at 2:21:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

@class XMattingBoxTensorFilter;


@protocol MattingFilter
@property (assign) SCD_Struct_XM72 config; 
@property (retain) XMattingBoxTensorFilter * boxTensorFilter; 
@property (readonly) BOOL stateComputed; 
@property (readonly) BOOL coefficientsComputed; 
@required
-(SCD_Struct_XM72)config;
-(void)setBoxTensorFilter:(id)arg1;
-(int)encodeStepOn:(id)arg1;
-(BOOL)coefficientsComputed;
-(int)encodeApplyCoefficientsOn:(id)arg1 colorGuide:(id)arg2 disparityGuide:(id)arg3 constraints:(id)arg4 destinationAlphaTexture:(id)arg5;
-(XMattingBoxTensorFilter *)boxTensorFilter;
-(int)encodeStateOn:(id)arg1 colorGuide:(id)arg2 disparityGuide:(id)arg3 initialSegmentation:(id)arg4 constraints:(id)arg5;
-(BOOL)stateComputed;
-(int)encodeUpsampleOn:(id)arg1 segmentation:(id)arg2 colorGuide:(id)arg3 disparityGuide:(id)arg4 outputMatte:(id)arg5;
-(void)setConfig:(SCD_Struct_XM72)arg1;
-(void)releaseResources;
-(id)initWithDevice:(id)arg1 library:(id)arg2;
-(int)allocateResources:(SCD_Struct_XM72)arg1;

@end

