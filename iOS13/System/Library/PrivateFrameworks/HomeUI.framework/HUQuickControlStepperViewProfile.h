/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HUQuickControlViewProfile.h>

@class NSArray;

@interface HUQuickControlStepperViewProfile : HUQuickControlViewProfile {

	BOOL _showSegmentTitles;
	unsigned long long _numberOfSegments;
	unsigned long long _stepperBehavior;
	unsigned long long _stepperStyle;
	NSArray* _segmentTitles;

}

@property (assign,nonatomic) unsigned long long numberOfSegments;              //@synthesize numberOfSegments=_numberOfSegments - In the implementation block
@property (assign,nonatomic) unsigned long long stepperBehavior;               //@synthesize stepperBehavior=_stepperBehavior - In the implementation block
@property (assign,nonatomic) BOOL showSegmentTitles;                           //@synthesize showSegmentTitles=_showSegmentTitles - In the implementation block
@property (assign,nonatomic) unsigned long long stepperStyle;                  //@synthesize stepperStyle=_stepperStyle - In the implementation block
@property (nonatomic,copy) NSArray * segmentTitles;                            //@synthesize segmentTitles=_segmentTitles - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)numberOfSegments;
-(void)setSegmentTitles:(NSArray *)arg1 ;
-(NSArray *)segmentTitles;
-(void)setNumberOfSegments:(unsigned long long)arg1 ;
-(BOOL)supportsTouchContinuation;
-(unsigned long long)stepperStyle;
-(BOOL)showSegmentTitles;
-(unsigned long long)stepperBehavior;
-(void)setStepperBehavior:(unsigned long long)arg1 ;
-(void)setShowSegmentTitles:(BOOL)arg1 ;
-(void)setStepperStyle:(unsigned long long)arg1 ;
@end

