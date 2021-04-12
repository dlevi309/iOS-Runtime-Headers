/*
* Generated on Monday, March 1, 2021 at 2:34:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Settings/GeneralSettingsUI.framework/GeneralSettingsUI
*/

#import <UIKitCore/UIControl.h>

@protocol PSGCircleSegmentedControlDelegate;
@class NSMutableArray, UIStackView, PSGCircleSegment, UIImage, UILabel;

@interface PSGCircleSegmentedControl : UIControl {

	NSMutableArray* _segmentPlaceholders;
	NSMutableArray* _segments;
	UIStackView* _stack;
	PSGCircleSegment* _selectedSegment;
	NSMutableArray* _segmentConstraints;
	NSMutableArray* _selectedSegmentConstraints;
	UIImage* _placeholderImage;
	UIImage* _buttonImage;
	UIImage* _highlightedImage;
	UIImage* _activeImage;
	id<PSGCircleSegmentedControlDelegate> _delegate;
	UILabel* _label;

}

@property (assign,nonatomic,__weak) id<PSGCircleSegmentedControlDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UILabel * label;                                                    //@synthesize label=_label - In the implementation block
-(id)init;
-(id<PSGCircleSegmentedControlDelegate>)delegate;
-(void)setDelegate:(id<PSGCircleSegmentedControlDelegate>)arg1 ;
-(void)setLabel:(UILabel *)arg1 ;
-(UILabel *)label;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setSelectedSegmentIndex:(unsigned long long)arg1 ;
-(void)addSegmentWithTitle:(id)arg1 ;
-(id)_circleImageWithColor:(id)arg1 fillColor:(id)arg2 diameter:(double)arg3 ;
-(void)segmentTapped:(id)arg1 ;
-(void)setPositionConstraintsActive:(BOOL)arg1 forButtonAtIndex:(unsigned long long)arg2 ;
-(void)selectSegmentAtIndex:(unsigned long long)arg1 ;
-(void)menuButtonPressed;
@end

