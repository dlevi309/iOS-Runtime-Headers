/*
* Generated on Monday, March 1, 2021 at 2:34:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKitUI.framework/HealthKitUI
*/


@class NSString;

@interface _HKActivityRingViewSizingDirective : NSObject {

	NSString* _identifier;
	double _width;
	double _outerRingOffset;
	double _ringThickness;
	double _ringInterspacing;

}

@property (nonatomic,retain) NSString * identifier;                //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) double width;                         //@synthesize width=_width - In the implementation block
@property (assign,nonatomic) double outerRingOffset;               //@synthesize outerRingOffset=_outerRingOffset - In the implementation block
@property (assign,nonatomic) double ringThickness;                 //@synthesize ringThickness=_ringThickness - In the implementation block
@property (assign,nonatomic) double ringInterspacing;              //@synthesize ringInterspacing=_ringInterspacing - In the implementation block
+(id)activityRingSizingDirectiveWithIdentifier:(id)arg1 width:(double)arg2 outerRingOffset:(double)arg3 ringThickness:(double)arg4 ringInterspacing:(double)arg5 ;
+(id)sortedRingRatioDirectives;
-(id)description;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(double)width;
-(void)setWidth:(double)arg1 ;
-(void)setOuterRingOffset:(double)arg1 ;
-(void)setRingThickness:(double)arg1 ;
-(void)setRingInterspacing:(double)arg1 ;
-(double)outerRingOffset;
-(double)ringThickness;
-(double)ringInterspacing;
@end

