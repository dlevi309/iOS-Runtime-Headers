/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol UICoordinateSpace;
#import <UIKitCore/UIKitCore-Structs.h>
@class UISelectionFeedbackGenerator;

@interface _UIDatePickerCalendarTimeSoundDriver : NSObject {

	SCD_Struct_UI34 _flags;
	long long _highlightedValue;
	long long _selectedValue;
	UISelectionFeedbackGenerator* _feedbackGenerator;
	id<UICoordinateSpace> _coordinateSpace;

}

@property (assign,nonatomic) long long highlightedValue;                                    //@synthesize highlightedValue=_highlightedValue - In the implementation block
@property (assign,nonatomic) long long selectedValue;                                       //@synthesize selectedValue=_selectedValue - In the implementation block
@property (nonatomic,retain) UISelectionFeedbackGenerator * feedbackGenerator;              //@synthesize feedbackGenerator=_feedbackGenerator - In the implementation block
@property (assign,nonatomic,__weak) id<UICoordinateSpace> coordinateSpace;                  //@synthesize coordinateSpace=_coordinateSpace - In the implementation block
-(void)setCoordinateSpace:(id<UICoordinateSpace>)arg1 ;
-(void)setFeedbackGenerator:(UISelectionFeedbackGenerator *)arg1 ;
-(void)warmUp;
-(void)coolDown;
-(id)init;
-(id<UICoordinateSpace>)coordinateSpace;
-(UISelectionFeedbackGenerator *)feedbackGenerator;
-(void)setHighlightedValue:(long long)arg1 ;
-(void)playHighlightSound;
-(void)playSnappingSound;
-(void)updateWithHighlightedValue:(long long)arg1 ;
-(void)updateWithSnapped;
-(void)performWithoutSounds:(/*^block*/id)arg1 ;
-(long long)highlightedValue;
-(long long)selectedValue;
-(void)setSelectedValue:(long long)arg1 ;
-(id)initWithCoordinateSpace:(id)arg1 ;
@end

