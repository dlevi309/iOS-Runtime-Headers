/*
* Generated on Thursday, January 14, 2021 at 2:28:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/


#import <PhotoImaging/PhotoImaging-Structs.h>
@class VNSaliencyImageObservation, NSArray;

@interface PIReframeResult : NSObject {

	double _confidence;
	VNSaliencyImageObservation* _saliencyObservation;
	NSArray* _ANODSubjects;
	CGRect _bounds;

}

@property (nonatomic,readonly) CGRect bounds;                                               //@synthesize bounds=_bounds - In the implementation block
@property (nonatomic,readonly) double confidence;                                           //@synthesize confidence=_confidence - In the implementation block
@property (nonatomic,retain) VNSaliencyImageObservation * saliencyObservation;              //@synthesize saliencyObservation=_saliencyObservation - In the implementation block
@property (nonatomic,copy) NSArray * ANODSubjects;                                          //@synthesize ANODSubjects=_ANODSubjects - In the implementation block
-(double)confidence;
-(CGRect)bounds;
-(VNSaliencyImageObservation *)saliencyObservation;
-(void)setSaliencyObservation:(VNSaliencyImageObservation *)arg1 ;
-(void)setANODSubjects:(NSArray *)arg1 ;
-(NSArray *)ANODSubjects;
-(id)initWithBounds:(CGRect)arg1 confidence:(double)arg2 ANODSubjects:(id)arg3 saliencyObservation:(id)arg4 ;
@end

