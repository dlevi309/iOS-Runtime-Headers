/*
* Generated on Thursday, January 14, 2021 at 2:21:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTitles:(NSArray *)arg1 ;
-(void)commonInit;
-(void)setSelectedIndex:(long long)arg1 ;
-(void)layoutSubviews;
-(CGRect)segmentedControlFrame;
-(double)segmentedControlWidth;
-(void)handleValueChanged;
-(long long)selectedIndex;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)titles;
-(UISegmentedControl *)segmentedControl;
-(void)setSegmentedControl:(UISegmentedControl *)arg1 ;
-(void)setStyle:(id<TUICandidateViewStyle>)arg1 ;
-(id<TUICandidateViewStyle>)style;
@end

