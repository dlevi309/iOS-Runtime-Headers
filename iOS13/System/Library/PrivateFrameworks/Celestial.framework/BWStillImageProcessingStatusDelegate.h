/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/


@protocol BWStillImageProcessingStatusDelegate <NSObject>
@required
-(void)nodeDidCaptureStillImage:(id)arg1;
-(void)node:(id)arg1 didSelectReferenceFrameBracketedCaptureSequenceNumber:(id)arg2 pts:(SCD_Struct_BW2)arg3;
-(void)node:(id)arg1 didSelectNewReferenceFrameWithPTS:(SCD_Struct_BW2)arg2 transform:(id)arg3;
-(void)node:(id)arg1 didReceiveOriginalImageWithPTS:(SCD_Struct_BW2)arg2;

@end

