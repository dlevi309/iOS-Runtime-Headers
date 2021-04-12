/*
* Generated on Monday, March 1, 2021 at 2:32:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PKEdgeLocatable.h>
#import <libobjc.A.dylib/PKPalettePopoverDismissing.h>
#import <libobjc.A.dylib/PKPaletteViewSizeScaling.h>
#import <libobjc.A.dylib/PKPaletteViewStateObserving.h>

@protocol PKPaletteViewStateObservable;
@class PKPaletteUndoRedoView, PKPaletteAdditionalOptionsView, UIView, UIStackView, NSLayoutConstraint, PKPaletteToolPickerAndColorPickerView, PKPaletteToolPickerView, PKPaletteColorPickerView, NSString;

@interface PKPaletteContentView : UIView <PKEdgeLocatable, PKPalettePopoverDismissing, PKPaletteViewSizeScaling, PKPaletteViewStateObserving> {

	BOOL _usingSmallestSupportedWidth;
	unsigned long long _edgeLocation;
	double _scalingFactor;
	PKPaletteUndoRedoView* _undoRedoView;
	PKPaletteAdditionalOptionsView* _additionalOptionsView;
	UIView* _contextualEditingView;
	id<PKPaletteViewStateObservable> _paletteViewState;
	UIStackView* _stackView;
	NSLayoutConstraint* _stackViewTopConstraint;
	NSLayoutConstraint* _stackViewBottomConstraint;
	NSLayoutConstraint* _stackViewLeftConstraint;
	NSLayoutConstraint* _stackViewRightConstraint;
	NSLayoutConstraint* _stackViewCenterXConstraint;
	NSLayoutConstraint* _stackViewCompactLeftConstraint;
	NSLayoutConstraint* _stackViewCompactRightConstraint;
	PKPaletteToolPickerAndColorPickerView* _toolAndColorPickerContainerView;
	NSLayoutConstraint* _toolAndColorPickerContainerViewHeightConstraint;
	NSLayoutConstraint* _toolAndColorPickerContainerViewWidthConstraint;

}

@property (assign,nonatomic,__weak) id<PKPaletteViewStateObservable> paletteViewState;                             //@synthesize paletteViewState=_paletteViewState - In the implementation block
@property (nonatomic,retain) UIStackView * stackView;                                                              //@synthesize stackView=_stackView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * stackViewTopConstraint;                                          //@synthesize stackViewTopConstraint=_stackViewTopConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * stackViewBottomConstraint;                                       //@synthesize stackViewBottomConstraint=_stackViewBottomConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * stackViewLeftConstraint;                                         //@synthesize stackViewLeftConstraint=_stackViewLeftConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * stackViewRightConstraint;                                        //@synthesize stackViewRightConstraint=_stackViewRightConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * stackViewCenterXConstraint;                                      //@synthesize stackViewCenterXConstraint=_stackViewCenterXConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * stackViewCompactLeftConstraint;                                  //@synthesize stackViewCompactLeftConstraint=_stackViewCompactLeftConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * stackViewCompactRightConstraint;                                 //@synthesize stackViewCompactRightConstraint=_stackViewCompactRightConstraint - In the implementation block
@property (nonatomic,retain) UIView * contextualEditingView;                                                       //@synthesize contextualEditingView=_contextualEditingView - In the implementation block
@property (nonatomic,retain) PKPaletteToolPickerAndColorPickerView * toolAndColorPickerContainerView;              //@synthesize toolAndColorPickerContainerView=_toolAndColorPickerContainerView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * toolAndColorPickerContainerViewHeightConstraint;                 //@synthesize toolAndColorPickerContainerViewHeightConstraint=_toolAndColorPickerContainerViewHeightConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * toolAndColorPickerContainerViewWidthConstraint;                  //@synthesize toolAndColorPickerContainerViewWidthConstraint=_toolAndColorPickerContainerViewWidthConstraint - In the implementation block
@property (assign,getter=isUsingSmallestSupportedWidth,nonatomic) BOOL usingSmallestSupportedWidth;                //@synthesize usingSmallestSupportedWidth=_usingSmallestSupportedWidth - In the implementation block
@property (nonatomic,readonly) PKPaletteUndoRedoView * undoRedoView;                                               //@synthesize undoRedoView=_undoRedoView - In the implementation block
@property (nonatomic,readonly) PKPaletteToolPickerView * toolPickerView; 
@property (nonatomic,readonly) PKPaletteColorPickerView * colorPickerView; 
@property (nonatomic,readonly) PKPaletteAdditionalOptionsView * additionalOptionsView;                             //@synthesize additionalOptionsView=_additionalOptionsView - In the implementation block
@property (assign,nonatomic) long long contextEditingMode; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) unsigned long long edgeLocation;                                                      //@synthesize edgeLocation=_edgeLocation - In the implementation block
@property (assign,nonatomic) double scalingFactor;                                                                 //@synthesize scalingFactor=_scalingFactor - In the implementation block
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(UIStackView *)stackView;
-(void)safeAreaInsetsDidChange;
-(void)setStackView:(UIStackView *)arg1 ;
-(void)setStackViewTopConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setStackViewBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)stackViewTopConstraint;
-(NSLayoutConstraint *)stackViewBottomConstraint;
-(void)_updateUI;
-(double)scalingFactor;
-(UIView *)contextualEditingView;
-(CGRect)plusButtonFrame;
-(void)dismissPalettePopoverWithCompletion:(/*^block*/id)arg1 ;
-(unsigned long long)edgeLocation;
-(void)setEdgeLocation:(unsigned long long)arg1 ;
-(void)_installStackView;
-(void)_installUndoRedoButtonsView;
-(id)initWithPaletteViewStateObservable:(id)arg1 ;
-(void)_installContextualEditingView;
-(void)_updateContextEditingViewVisibility;
-(void)_installAdditionalOptionsView;
-(PKPaletteToolPickerAndColorPickerView *)toolAndColorPickerContainerView;
-(PKPaletteToolPickerView *)toolPickerView;
-(PKPaletteColorPickerView *)colorPickerView;
-(void)setUsingSmallestSupportedWidth:(BOOL)arg1 ;
-(long long)contextEditingMode;
-(PKPaletteUndoRedoView *)undoRedoView;
-(void)setScalingFactor:(double)arg1 ;
-(PKPaletteAdditionalOptionsView *)additionalOptionsView;
-(void)setContextEditingMode:(long long)arg1 ;
-(id<PKPaletteViewStateObservable>)paletteViewState;
-(BOOL)isUsingSmallestSupportedWidth;
-(NSLayoutConstraint *)stackViewLeftConstraint;
-(NSLayoutConstraint *)stackViewRightConstraint;
-(NSLayoutConstraint *)stackViewCompactLeftConstraint;
-(NSLayoutConstraint *)stackViewCompactRightConstraint;
-(NSLayoutConstraint *)stackViewCenterXConstraint;
-(NSLayoutConstraint *)toolAndColorPickerContainerViewWidthConstraint;
-(NSLayoutConstraint *)toolAndColorPickerContainerViewHeightConstraint;
-(void)didChangeAnnotationSupport:(id)arg1 ;
-(void)_dismissPalettePopoverUsingConfirmationBlock:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setContextualEditingView:(UIView *)arg1 ;
-(void)setPaletteViewState:(id<PKPaletteViewStateObservable>)arg1 ;
-(void)setStackViewLeftConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setStackViewRightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setStackViewCenterXConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setStackViewCompactLeftConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setStackViewCompactRightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setToolAndColorPickerContainerView:(PKPaletteToolPickerAndColorPickerView *)arg1 ;
-(void)setToolAndColorPickerContainerViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setToolAndColorPickerContainerViewWidthConstraint:(NSLayoutConstraint *)arg1 ;
@end

