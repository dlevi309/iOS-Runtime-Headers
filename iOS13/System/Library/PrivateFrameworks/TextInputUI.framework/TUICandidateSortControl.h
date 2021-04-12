/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
*/

#import <TextInputUI/TextInputUI-Structs.h>
#import <UIKitCore/UIControl.h>

@protocol TUICandidateViewStyle;
@class NSArray, UISegmentedControl;

@interface TUICandidateSortControl : UIControl {

	NSArray* _titles;
	id<TUICandidateViewStyle> _style;
	UISegmentedControl* _segmentedControl;

}

@property (nonatomic,retain) UISegmentedControl * segmentedControl;              //@synthesize segmentedControl=_segmentedControl - In the implementation block
@property (nonatomic,copy) NSArray * titles;                                     //@synthesize titles=_titles - In the implementation block
@property (assign,nonatomic) long long selectedIndex; 
@property (nonatomic,retain) id<TUICandidateViewStyle> style;                    //@synthesize style=_style - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(id<TUICandidateViewStyle>)style;
-(void)setStyle:(id<TUICandidateViewStyle>)arg1 ;
-(void)commonInit;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(long long)selectedIndex;
-(void)setSelectedIndex:(long long)arg1 ;
-(UISegmentedControl *)segmentedControl;
-(void)setSegmentedControl:(UISegmentedControl *)arg1 ;
-(void)setTitles:(NSArray *)arg1 ;
-(NSArray *)titles;
-(CGRect)segmentedControlFrame;
-(double)segmentedControlWidth;
-(void)handleValueChanged;
@end

