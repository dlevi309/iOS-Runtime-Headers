/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/

#import <Preferences/Preferences-Structs.h>
#import <UIKitCore/UISlider.h>

@class UIColor, UISelectionFeedbackGenerator;

@interface PSSegmentableSlider : UISlider {

	UIColor* _trackMarkersColor;
	BOOL _segmented;
	BOOL _locksToSegment;
	BOOL _snapsToSegment;
	unsigned long long _segmentCount;
	UISelectionFeedbackGenerator* _feedbackGenerator;

}

@property (nonatomic,retain) UISelectionFeedbackGenerator * feedbackGenerator;              //@synthesize feedbackGenerator=_feedbackGenerator - In the implementation block
@property (assign,getter=isSegmented,nonatomic) BOOL segmented;                             //@synthesize segmented=_segmented - In the implementation block
@property (assign,nonatomic) BOOL locksToSegment;                                           //@synthesize locksToSegment=_locksToSegment - In the implementation block
@property (assign,nonatomic) BOOL snapsToSegment;                                           //@synthesize snapsToSegment=_snapsToSegment - In the implementation block
@property (assign,nonatomic) unsigned long long segmentCount;                               //@synthesize segmentCount=_segmentCount - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFeedbackGenerator:(UISelectionFeedbackGenerator *)arg1 ;
-(UISelectionFeedbackGenerator *)feedbackGenerator;
-(void)drawRect:(CGRect)arg1 ;
-(void)setValue:(float)arg1 animated:(BOOL)arg2 ;
-(CGRect)thumbRectForBounds:(CGRect)arg1 trackRect:(CGRect)arg2 value:(float)arg3 ;
-(void)setSegmented:(BOOL)arg1 ;
-(void)setLocksToSegment:(BOOL)arg1 ;
-(void)setSnapsToSegment:(BOOL)arg1 ;
-(void)setSegmentCount:(unsigned long long)arg1 ;
-(void)sliderTapped:(id)arg1 ;
-(void)controlInteractionBegan:(id)arg1 ;
-(void)controlInteractionEnded:(id)arg1 ;
-(unsigned long long)numberOfTicks;
-(float)offsetBetweenTicksForNumberOfTicks:(unsigned long long)arg1 ;
-(BOOL)isSegmented;
-(BOOL)locksToSegment;
-(BOOL)snapsToSegment;
-(unsigned long long)segmentCount;
@end

