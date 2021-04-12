/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIPickerViewDelegate.h>
#import <UIKit/UIPickerViewDataSource.h>
#import <libobjc.A.dylib/HUQuickControlInteractiveView.h>

@protocol HUQuickControlViewInteractionDelegate;
@class HUQuickControlWheelPickerViewProfile, NSArray, UIPickerView, UIView, NSNumber, UISelectionFeedbackGenerator, UIImpactFeedbackGenerator, NSString;

@interface HUQuickControlWheelPickerView : UIView <UIPickerViewDelegate, UIPickerViewDataSource, HUQuickControlInteractiveView> {

	BOOL _userInteractionActive;
	id<HUQuickControlViewInteractionDelegate> _interactionDelegate;
	unsigned long long _reachabilityState;
	HUQuickControlWheelPickerViewProfile* _profile;
	NSArray* _items;
	UIPickerView* _pickerView;
	UIView* _topGradientView;
	UIView* _bottomGradientView;
	UIView* _selectedRowSurroundingView;
	NSNumber* _selectedRow;
	double _maxTextWidth;
	UISelectionFeedbackGenerator* _selectionFeedbackGenerator;
	UIImpactFeedbackGenerator* _impactFeedbackGenerator;

}

@property (assign,getter=isUserInteractionActive,nonatomic) BOOL userInteractionActive;                         //@synthesize userInteractionActive=_userInteractionActive - In the implementation block
@property (nonatomic,retain) UIPickerView * pickerView;                                                         //@synthesize pickerView=_pickerView - In the implementation block
@property (nonatomic,retain) UIView * topGradientView;                                                          //@synthesize topGradientView=_topGradientView - In the implementation block
@property (nonatomic,retain) UIView * bottomGradientView;                                                       //@synthesize bottomGradientView=_bottomGradientView - In the implementation block
@property (nonatomic,retain) UIView * selectedRowSurroundingView;                                               //@synthesize selectedRowSurroundingView=_selectedRowSurroundingView - In the implementation block
@property (nonatomic,retain) NSNumber * selectedRow;                                                            //@synthesize selectedRow=_selectedRow - In the implementation block
@property (assign,nonatomic) double maxTextWidth;                                                               //@synthesize maxTextWidth=_maxTextWidth - In the implementation block
@property (nonatomic,retain) UISelectionFeedbackGenerator * selectionFeedbackGenerator;                         //@synthesize selectionFeedbackGenerator=_selectionFeedbackGenerator - In the implementation block
@property (nonatomic,retain) UIImpactFeedbackGenerator * impactFeedbackGenerator;                               //@synthesize impactFeedbackGenerator=_impactFeedbackGenerator - In the implementation block
@property (nonatomic,copy) HUQuickControlWheelPickerViewProfile * profile;                                      //@synthesize profile=_profile - In the implementation block
@property (nonatomic,retain) NSArray * items;                                                                   //@synthesize items=_items - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) id value; 
@property (nonatomic,retain) id secondaryValue; 
@property (assign,nonatomic) unsigned long long reachabilityState;                                              //@synthesize reachabilityState=_reachabilityState - In the implementation block
@property (assign,nonatomic,__weak) id<HUQuickControlViewInteractionDelegate> interactionDelegate;              //@synthesize interactionDelegate=_interactionDelegate - In the implementation block
+(BOOL)requiresConstraintBasedLayout;
-(id)value;
-(void)setValue:(id)arg1 ;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(HUQuickControlWheelPickerViewProfile *)profile;
-(void)setProfile:(HUQuickControlWheelPickerViewProfile *)arg1 ;
-(id)initWithProfile:(id)arg1 ;
-(void)setInteractionDelegate:(id<HUQuickControlViewInteractionDelegate>)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setUserInteractionEnabled:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)tintColorDidChange;
-(UIImpactFeedbackGenerator *)impactFeedbackGenerator;
-(void)setImpactFeedbackGenerator:(UIImpactFeedbackGenerator *)arg1 ;
-(long long)numberOfComponentsInPickerView:(id)arg1 ;
-(long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2 ;
-(id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4 ;
-(void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3 ;
-(UIPickerView *)pickerView;
-(void)setPickerView:(UIPickerView *)arg1 ;
-(UISelectionFeedbackGenerator *)selectionFeedbackGenerator;
-(void)setSelectionFeedbackGenerator:(UISelectionFeedbackGenerator *)arg1 ;
-(id<HUQuickControlViewInteractionDelegate>)interactionDelegate;
-(void)_updateUI;
-(NSNumber *)selectedRow;
-(void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)arg1 ;
-(id)intrinsicSizeDescriptorForControlSize:(unsigned long long)arg1 ;
-(void)setTopGradientView:(UIView *)arg1 ;
-(UIView *)topGradientView;
-(void)setBottomGradientView:(UIView *)arg1 ;
-(UIView *)bottomGradientView;
-(void)setSelectedRowSurroundingView:(UIView *)arg1 ;
-(UIView *)selectedRowSurroundingView;
-(void)setMaxTextWidth:(double)arg1 ;
-(void)setUserInteractionActive:(BOOL)arg1 ;
-(void)setSelectedRow:(NSNumber *)arg1 ;
-(void)_updateSelectedRowBorderView:(id)arg1 ;
-(double)maxTextWidth;
-(unsigned long long)reachabilityState;
-(void)_updateUIForReachabilityState:(unsigned long long)arg1 ;
-(void)_prepareForTapticFeedback;
-(void)_actuateSelectionTapticFeedback;
-(void)setReachabilityState:(unsigned long long)arg1 ;
-(BOOL)isUserInteractionActive;
@end

