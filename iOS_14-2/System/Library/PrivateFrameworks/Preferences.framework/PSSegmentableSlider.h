/*
* Generated on Thursday, January 14, 2021 at 2:20:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setFeedbackGenerator:(UISelectionFeedbackGenerator *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UISelectionFeedbackGenerator *)feedbackGenerator;
-(void)drawRect:(CGRect)arg1 ;
-(CGRect)thumbRectForBounds:(CGRect)arg1 trackRect:(CGRect)arg2 value:(float)arg3 ;
-(void)setValue:(float)arg1 animated:(BOOL)arg2 ;
-(void)setSegmented:(BOOL)arg1 ;
-(void)setLocksToSegment:(BOOL)arg1 ;
-(void)setSegmentCount:(unsigned long long)arg1 ;
-(void)setSnapsToSegment:(BOOL)arg1 ;
-(BOOL)isSegmented;
-(unsigned long long)segmentCount;
-(void)sliderTapped:(id)arg1 ;
-(unsigned long long)numberOfTicks;
-(void)controlInteractionBegan:(id)arg1 ;
-(void)controlInteractionEnded:(id)arg1 ;
-(BOOL)locksToSegment;
-(BOOL)snapsToSegment;
-(float)offsetBetweenTicksForNumberOfTicks:(unsigned long long)arg1 ;
@end

