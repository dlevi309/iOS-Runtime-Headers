/*
* Generated on Thursday, January 14, 2021 at 2:28:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

