/*
* Generated on Thursday, January 14, 2021 at 2:24:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PKEdgeLocatable.h>
#import <libobjc.A.dylib/PKPalettePopoverDismissing.h>
#import <libobjc.A.dylib/PKPaletteViewSizeScaling.h>

@class PKPaletteToolPickerContainerView, PKPaletteColorPickerContainerView, PKDrawingPaletteInputAssistantView, UIStackView, NSLayoutConstraint, PKPaletteToolPickerView, PKPaletteColorPickerView, NSString;

@interface PKPaletteToolPickerAndColorPickerView : UIView <PKEdgeLocatable, PKPalettePopoverDismissing, PKPaletteViewSizeScaling> {

	BOOL _isSmallestSupportedCompactWidth;
	BOOL _colorPickerViewVisible;
	BOOL _inputAssistantViewVisible;
	unsigned long long _edgeLocation;
	double _scalingFactor;
	PKPaletteToolPickerContainerView* _toolPickerContainerView;
	PKPaletteColorPickerContainerView* _colorPickerContainerView;
	PKDrawingPaletteInputAssistantView* _paletteInputAssistantView;
	long long _contextEditingMode;
	UIStackView* _stackView;
	NSLayoutConstraint* _toolPickerContainerViewWidthConstraint;
	NSLayoutConstraint* _toolPickerContainerViewHeightConstraint;
	NSLayoutConstraint* _compactToolPickerContainerViewWidthConstraint;

}

@property (nonatomic,retain) UIStackView * stackView;                                                         //@synthesize stackView=_stackView - In the implementation block
@property (nonatomic,retain) PKPaletteToolPickerContainerView * toolPickerContainerView;                      //@synthesize toolPickerContainerView=_toolPickerContainerView - In the implementation block
@property (nonatomic,retain) PKPaletteColorPickerContainerView * colorPickerContainerView;                    //@synthesize colorPickerContainerView=_colorPickerContainerView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * toolPickerContainerViewWidthConstraint;                     //@synthesize toolPickerContainerViewWidthConstraint=_toolPickerContainerViewWidthConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * toolPickerContainerViewHeightConstraint;                    //@synthesize toolPickerContainerViewHeightConstraint=_toolPickerContainerViewHeightConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * compactToolPickerContainerViewWidthConstraint;              //@synthesize compactToolPickerContainerViewWidthConstraint=_compactToolPickerContainerViewWidthConstraint - In the implementation block
@property (nonatomic,readonly) PKPaletteToolPickerView * toolPickerView; 
@property (nonatomic,readonly) PKPaletteColorPickerView * colorPickerView; 
@property (nonatomic,readonly) PKDrawingPaletteInputAssistantView * paletteInputAssistantView;                //@synthesize paletteInputAssistantView=_paletteInputAssistantView - In the implementation block
@property (assign,nonatomic) long long contextEditingMode;                                                    //@synthesize contextEditingMode=_contextEditingMode - In the implementation block
@property (assign,nonatomic) BOOL isSmallestSupportedCompactWidth;                                            //@synthesize isSmallestSupportedCompactWidth=_isSmallestSupportedCompactWidth - In the implementation block
@property (assign,getter=isColorPickerViewVisible,nonatomic) BOOL colorPickerViewVisible;                     //@synthesize colorPickerViewVisible=_colorPickerViewVisible - In the implementation block
@property (assign,getter=isInputAssistantViewVisible,nonatomic) BOOL inputAssistantViewVisible;               //@synthesize inputAssistantViewVisible=_inputAssistantViewVisible - In the implementation block
@property (assign,nonatomic) unsigned long long edgeLocation;                                                 //@synthesize edgeLocation=_edgeLocation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) double scalingFactor;                                                            //@synthesize scalingFactor=_scalingFactor - In the implementation block
-(id)init;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(UIStackView *)stackView;
-(double)scalingFactor;
-(BOOL)_useCompactSize;
-(void)_updateUI;
-(void)setScalingFactor:(double)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setStackView:(UIStackView *)arg1 ;
-(PKPaletteColorPickerView *)colorPickerView;
-(unsigned long long)edgeLocation;
-(void)setEdgeLocation:(unsigned long long)arg1 ;
-(PKPaletteColorPickerContainerView *)colorPickerContainerView;
-(PKPaletteToolPickerView *)toolPickerView;
-(PKDrawingPaletteInputAssistantView *)paletteInputAssistantView;
-(PKPaletteToolPickerContainerView *)toolPickerContainerView;
-(long long)contextEditingMode;
-(void)setContextEditingMode:(long long)arg1 ;
-(void)setIsSmallestSupportedCompactWidth:(BOOL)arg1 ;
-(double)_stackViewSpacing;
-(void)setColorPickerViewVisible:(BOOL)arg1 ;
-(void)setInputAssistantViewVisible:(BOOL)arg1 ;
-(void)dismissPalettePopoverWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)isColorPickerViewVisible;
-(BOOL)isInputAssistantViewVisible;
-(BOOL)isSmallestSupportedCompactWidth;
-(NSLayoutConstraint *)toolPickerContainerViewWidthConstraint;
-(NSLayoutConstraint *)toolPickerContainerViewHeightConstraint;
-(NSLayoutConstraint *)compactToolPickerContainerViewWidthConstraint;
-(void)setToolPickerContainerView:(PKPaletteToolPickerContainerView *)arg1 ;
-(void)setColorPickerContainerView:(PKPaletteColorPickerContainerView *)arg1 ;
-(void)setToolPickerContainerViewWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setToolPickerContainerViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setCompactToolPickerContainerViewWidthConstraint:(NSLayoutConstraint *)arg1 ;
@end

