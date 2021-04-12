/*
* Generated on Monday, March 1, 2021 at 2:32:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <AnnotationKit/AKFormFeature.h>

@class AKFormFeatureLine, NSArray;

@interface AKFormFeatureSegmented : AKFormFeature {

	AKFormFeatureLine* _baseline;
	NSArray* _characterSegmentRects;
	CGRect _enclosingRegionRect;

}

@property (nonatomic,retain) AKFormFeatureLine * baseline;                 //@synthesize baseline=_baseline - In the implementation block
@property (assign,nonatomic) CGRect enclosingRegionRect;                   //@synthesize enclosingRegionRect=_enclosingRegionRect - In the implementation block
@property (nonatomic,retain) NSArray * characterSegmentRects;              //@synthesize characterSegmentRects=_characterSegmentRects - In the implementation block
+(id)segments:(id)arg1 withEnclosingRect:(CGRect)arg2 baseline:(id)arg3 onPage:(id)arg4 ;
-(void)setBaseline:(AKFormFeatureLine *)arg1 ;
-(AKFormFeatureLine *)baseline;
-(void)setEnclosingRegionRect:(CGRect)arg1 ;
-(CGRect)enclosingRegionRect;
-(id)initWithCharacterSegments:(id)arg1 enclosingRect:(CGRect)arg2 baseline:(id)arg3 onPage:(id)arg4 ;
-(NSArray *)characterSegmentRects;
-(void)setCharacterSegmentRects:(NSArray *)arg1 ;
@end

