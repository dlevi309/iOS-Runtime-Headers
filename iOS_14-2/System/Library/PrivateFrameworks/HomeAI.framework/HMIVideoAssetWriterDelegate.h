/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/


@protocol HMIVideoAssetWriterDelegate <NSObject>
@required
-(void)assetWriter:(id)arg1 didOutputInitializationSegment:(id)arg2;
-(void)assetWriter:(id)arg1 didOutputSeparableSegment:(id)arg2 timeRange:(SCD_Struct_HM4)arg3;
-(void)assetWriter:(id)arg1 didFailWithError:(id)arg2;

@end

