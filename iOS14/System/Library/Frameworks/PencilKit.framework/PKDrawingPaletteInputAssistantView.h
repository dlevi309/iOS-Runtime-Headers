/*
* Generated on Thursday, January 14, 2021 at 2:24:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PKPaletteButtonIntrinsicContentSizeObserver.h>
#import <libobjc.A.dylib/PKEdgeLocatable.h>
#import <libobjc.A.dylib/PKPaletteViewSizeScaling.h>

@class NSArray, PKPaletteButton, UIStackView, PKPaletteButtonGroupView, NSHashTable, NSString;

@interface PKDrawingPaletteInputAssistantView : UIView <PKPaletteButtonIntrinsicContentSizeObserver, PKEdgeLocatable, PKPaletteViewSizeScaling> {

	BOOL _useCompactLayout;
	BOOL _shouldShowKeyboardButton;
	BOOL _shouldShowReturnKeyButton;
	BOOL _enableKeyboardButtons;
	unsigned long long _edgeLocation;
	double _scalingFactor;
	NSArray* _buttons;
	PKPaletteButton* _keyboardButton;
	PKPaletteButton* _returnKeyButton;
	UIStackView* _contentStackView;
	PKPaletteButtonGroupView* _topOrTrailingGroupView;
	PKPaletteButtonGroupView* _bottomOrLeadingGroupView;
	NSHashTable* _viewStateObservers;

}

@property (nonatomic,retain) UIStackView * contentStackView;                                   //@synthesize contentStackView=_contentStackView - In the implementation block
@property (nonatomic,retain) PKPaletteButtonGroupView * topOrTrailingGroupView;                //@synthesize topOrTrailingGroupView=_topOrTrailingGroupView - In the implementation block
@property (nonatomic,retain) PKPaletteButtonGroupView * bottomOrLeadingGroupView;              //@synthesize bottomOrLeadingGroupView=_bottomOrLeadingGroupView - In the implementation block
@property (nonatomic,retain) PKPaletteButton * keyboardButton;                                 //@synthesize keyboardButton=_keyboardButton - In the implementation block
@property (nonatomic,retain) PKPaletteButton * returnKeyButton;                                //@synthesize returnKeyButton=_returnKeyButton - In the implementation block
@property (nonatomic,retain) NSHashTable * viewStateObservers;                                 //@synthesize viewStateObservers=_viewStateObservers - In the implementation block
@property (nonatomic,copy) NSArray * buttons;                                                  //@synthesize buttons=_buttons - In the implementation block
@property (nonatomic,readonly) BOOL hasInputAssistantItems; 
@property (assign,nonatomic) BOOL useCompactLayout;                                            //@synthesize useCompactLayout=_useCompactLayout - In the implementation block
@property (assign,nonatomic) BOOL shouldShowKeyboardButton;                                    //@synthesize shouldShowKeyboardButton=_shouldShowKeyboardButton - In the implementation block
@property (assign,nonatomic) BOOL shouldShowReturnKeyButton;                                   //@synthesize shouldShowReturnKeyButton=_shouldShowReturnKeyButton - In the implementation block
@property (assign,nonatomic) BOOL enableKeyboardButtons;                                       //@synthesize enableKeyboardButtons=_enableKeyboardButtons - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) unsigned long long edgeLocation;                                  //@synthesize edgeLocation=_edgeLocation - In the implementation block
@property (assign,nonatomic) double scalingFactor;                                             //@synthesize scalingFactor=_scalingFactor - In the implementation block
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSArray *)buttons;
-(double)scalingFactor;
-(void)_updateUI;
-(void)setUseCompactLayout:(BOOL)arg1 ;
-(BOOL)useCompactLayout;
-(void)setScalingFactor:(double)arg1 ;
-(void)setButtons:(NSArray *)arg1 ;
-(UIStackView *)contentStackView;
-(void)setContentStackView:(UIStackView *)arg1 ;
-(unsigned long long)edgeLocation;
-(void)setEdgeLocation:(unsigned long long)arg1 ;
-(void)_updateContentScalingFactor;
-(BOOL)enableKeyboardButtons;
-(void)setEnableKeyboardButtons:(BOOL)arg1 ;
-(void)setShouldShowKeyboardButton:(BOOL)arg1 ;
-(void)setShouldShowReturnKeyButton:(BOOL)arg1 ;
-(PKPaletteButton *)keyboardButton;
-(PKPaletteButton *)returnKeyButton;
-(void)removeViewStateObserver:(id)arg1 ;
-(void)addViewStateObserver:(id)arg1 ;
-(BOOL)hasInputAssistantItems;
-(NSHashTable *)viewStateObservers;
-(BOOL)shouldShowKeyboardButton;
-(BOOL)shouldShowReturnKeyButton;
-(void)_updateGroupViewContents;
-(void)_updateContentViewSpacing;
-(void)_notifyViewStateDidChange;
-(void)setKeyboardButton:(PKPaletteButton *)arg1 ;
-(void)setReturnKeyButton:(PKPaletteButton *)arg1 ;
-(void)_updateContentOrientation;
-(PKPaletteButtonGroupView *)topOrTrailingGroupView;
-(PKPaletteButtonGroupView *)bottomOrLeadingGroupView;
-(id)_topOrTrailingGroupViewButtons;
-(long long)_contentStackViewAlignment;
-(double)_contentStackViewSpacing;
-(void)buttonDidChangeIntrinsicContentSize:(id)arg1 ;
-(void)setTopOrTrailingGroupView:(PKPaletteButtonGroupView *)arg1 ;
-(void)setBottomOrLeadingGroupView:(PKPaletteButtonGroupView *)arg1 ;
-(void)setViewStateObservers:(NSHashTable *)arg1 ;
@end

