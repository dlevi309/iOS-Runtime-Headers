/*
* Generated on Monday, March 1, 2021 at 2:35:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UIView.h>

@protocol NTKEditOptionContainerView;
@class NSArray, UIView;

@interface NTKEditOptionPickerView : UIView {

	NSArray* _options;
	unsigned long long _visibleOptionBufferSize;
	/*^block*/id _optionToViewMapper;
	BOOL _active;
	unsigned long long _numberOfOptions;
	unsigned long long _selectedOptionIndex;
	UIView*<NTKEditOptionContainerView> _containerView;
	UIEdgeInsets _padding;
	CGAffineTransform _contentTransform;

}

@property (nonatomic,retain) UIView*<NTKEditOptionContainerView> containerView;              //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfOptions;                           //@synthesize numberOfOptions=_numberOfOptions - In the implementation block
@property (nonatomic,copy) id optionToViewMapper;                                            //@synthesize optionToViewMapper=_optionToViewMapper - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfSides; 
@property (assign,nonatomic) UIEdgeInsets padding;                                           //@synthesize padding=_padding - In the implementation block
@property (assign,nonatomic) CGAffineTransform contentTransform;                             //@synthesize contentTransform=_contentTransform - In the implementation block
@property (nonatomic,readonly) id selectedOption; 
@property (assign,nonatomic) unsigned long long selectedOptionIndex;                         //@synthesize selectedOptionIndex=_selectedOptionIndex - In the implementation block
@property (assign,nonatomic) BOOL active;                                                    //@synthesize active=_active - In the implementation block
-(id)description;
-(void)setActive:(BOOL)arg1 ;
-(void)setPadding:(UIEdgeInsets)arg1 ;
-(BOOL)active;
-(UIView*<NTKEditOptionContainerView>)containerView;
-(void)setContainerView:(UIView*<NTKEditOptionContainerView>)arg1 ;
-(void)layoutSubviews;
-(UIEdgeInsets)padding;
-(unsigned long long)selectedOptionIndex;
-(id)_newContainerView;
-(id)selectedOption;
-(unsigned long long)numberOfOptions;
-(void)setSelectedOptionIndex:(unsigned long long)arg1 ;
-(void)setContentTransform:(CGAffineTransform)arg1 ;
-(CGAffineTransform)contentTransform;
-(void)setTransitionFraction:(double)arg1 fromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3 ;
-(void)setSelectedOptionIndex:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(id)initWithOptions:(id)arg1 selectedOption:(id)arg2 ;
-(void)setOptionToViewMapper:(id)arg1 ;
-(void)setNumberOfSides:(unsigned long long)arg1 ;
-(void)_tileContainerForTransitionDirection:(long long)arg1 ;
-(id)optionAtIndex:(unsigned long long)arg1 ;
-(id)_selectedSideView;
-(CGRect)_frameForContainerView;
-(Class)_sideViewClass;
-(void)_willDisplaySideView:(id)arg1 ;
-(void)_configureSideView:(id)arg1 forOption:(id)arg2 ;
-(unsigned long long)numberOfSides;
-(void)applyBreathingScale:(double)arg1 ;
-(void)applyRubberBandingFraction:(double)arg1 ;
-(void)_updateContainer;
-(void)_enumerateSideViewsWithBlock:(/*^block*/id)arg1 ;
-(void)_transitionToSelectedOption;
-(void)_transitionAnimatedToSelectedOptionFromIndex:(unsigned long long)arg1 ;
-(void)decrementSelection;
-(void)incrementSelection;
-(id)_sideViewAtIndex:(unsigned long long)arg1 ;
-(id)optionToViewMapper;
@end

