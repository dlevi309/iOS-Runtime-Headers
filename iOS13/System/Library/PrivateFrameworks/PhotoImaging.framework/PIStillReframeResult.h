/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/

@class VNSaliencyImageObservation, NSArray;


@protocol PIStillReframeResult <NURenderResult>
@property (nonatomic,readonly) CGRect bounds; 
@property (nonatomic,readonly) double confidence; 
@property (nonatomic,readonly) VNSaliencyImageObservation * saliencyObservation; 
@property (nonatomic,copy,readonly) NSArray * ANODSubjects; 
@required
-(double)confidence;
-(CGRect)bounds;
-(VNSaliencyImageObservation *)saliencyObservation;
-(NSArray *)ANODSubjects;

@end

