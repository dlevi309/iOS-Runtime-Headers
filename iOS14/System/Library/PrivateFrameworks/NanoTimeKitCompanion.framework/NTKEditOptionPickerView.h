/*
* Generated on Thursday, January 14, 2021 at 2:26:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setContainerView:(UIView*<NTKEditOptionContainerView>)arg1 ;
-(BOOL)active;
-(void)setActive:(BOOL)arg1 ;
-(id)description;
-(void)layoutSubviews;
-(UIView*<NTKEditOptionContainerView>)containerView;
-(unsigned long long)selectedOptionIndex;
-(UIEdgeInsets)padding;
-(CGAffineTransform)contentTransform;
-(void)setPadding:(UIEdgeInsets)arg1 ;
-(void)setContentTransform:(CGAffineTransform)arg1 ;
-(unsigned long long)numberOfOptions;
-(id)selectedOption;
-(id)initWithOptions:(id)arg1 selectedOption:(id)arg2 ;
-(void)setOptionToViewMapper:(id)arg1 ;
-(id)_newContainerView;
-(void)setNumberOfSides:(unsigned long long)arg1 ;
-(void)_tileContainerForTransitionDirection:(long long)arg1 ;
-(id)optionAtIndex:(unsigned long long)arg1 ;
-(id)_selectedSideView;
-(CGRect)_frameForContainerView;
-(Class)_sideViewClass;
-(void)_willDisplaySideView:(id)arg1 ;
-(void)_configureSideView:(id)arg1 forOption:(id)arg2 ;
-(void)setTransitionFraction:(double)arg1 fromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3 ;
-(unsigned long long)numberOfSides;
-(void)applyBreathingScale:(double)arg1 ;
-(void)applyRubberBandingFraction:(double)arg1 ;
-(void)_updateContainer;
-(void)_enumerateSideViewsWithBlock:(/*^block*/id)arg1 ;
-(void)_transitionToSelectedOption;
-(void)_transitionAnimatedToSelectedOptionFromIndex:(unsigned long long)arg1 ;
-(void)setSelectedOptionIndex:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)decrementSelection;
-(void)incrementSelection;
-(id)_sideViewAtIndex:(unsigned long long)arg1 ;
-(void)setSelectedOptionIndex:(unsigned long long)arg1 ;
-(id)optionToViewMapper;
@end

