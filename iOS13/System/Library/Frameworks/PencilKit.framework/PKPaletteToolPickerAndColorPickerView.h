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
@class PKPaletteToolPickerContainerView, PKPaletteColorPickerView, UIStackView, NSLayoutConstraint, PKPaletteToolPickerView, NSString;

@interface PKPaletteToolPickerAndColorPickerView : UIView <PKEdgeLocatable, PKPalettePopoverDismissing, PKPaletteViewSizeScaling, PKPaletteViewStateObserving> {

	unsigned long long _edgeLocation;
	double _scalingFactor;
	PKPaletteToolPickerContainerView* _toolPickerContainerView;
	PKPaletteColorPickerView* _colorPickerView;
	long long _contextEditingMode;
	id<PKPaletteViewStateObservable> _paletteViewState;
	UIStackView* _stackView;
	NSLayoutConstraint* _toolPickerContainerViewWidthConstraint;
	NSLayoutConstraint* _toolPickerContainerViewHeightConstraint;
	NSLayoutConstraint* _compactToolPickerContainerViewWidthConstraint;

}

@property (assign,nonatomic,__weak) id<PKPaletteViewStateObservable> paletteViewState;                        //@synthesize paletteViewState=_paletteViewState - In the implementation block
@property (nonatomic,retain) UIStackView * stackView;                                                         //@synthesize stackView=_stackView - In the implementation block
@property (nonatomic,retain) PKPaletteToolPickerContainerView * toolPickerContainerView;                      //@synthesize toolPickerContainerView=_toolPickerContainerView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * toolPickerContainerViewWidthConstraint;                     //@synthesize toolPickerContainerViewWidthConstraint=_toolPickerContainerViewWidthConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * toolPickerContainerViewHeightConstraint;                    //@synthesize toolPickerContainerViewHeightConstraint=_toolPickerContainerViewHeightConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * compactToolPickerContainerViewWidthConstraint;              //@synthesize compactToolPickerContainerViewWidthConstraint=_compactToolPickerContainerViewWidthConstraint - In the implementation block
@property (nonatomic,readonly) PKPaletteToolPickerView * toolPickerView; 
@property (nonatomic,readonly) PKPaletteColorPickerView * colorPickerView;                                    //@synthesize colorPickerView=_colorPickerView - In the implementation block
@property (assign,nonatomic) long long contextEditingMode;                                                    //@synthesize contextEditingMode=_contextEditingMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) unsigned long long edgeLocation;                                                 //@synthesize edgeLocation=_edgeLocation - In the implementation block
@property (assign,nonatomic) double scalingFactor;                                                            //@synthesize scalingFactor=_scalingFactor - In the implementation block
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(UIStackView *)stackView;
-(void)setStackView:(UIStackView *)arg1 ;
-(void)_updateUI;
-(double)scalingFactor;
-(void)dismissPalettePopoverWithCompletion:(/*^block*/id)arg1 ;
-(unsigned long long)edgeLocation;
-(void)setEdgeLocation:(unsigned long long)arg1 ;
-(id)initWithPaletteViewStateObservable:(id)arg1 ;
-(PKPaletteToolPickerView *)toolPickerView;
-(PKPaletteColorPickerView *)colorPickerView;
-(PKPaletteToolPickerContainerView *)toolPickerContainerView;
-(long long)contextEditingMode;
-(void)setScalingFactor:(double)arg1 ;
-(void)setContextEditingMode:(long long)arg1 ;
-(id<PKPaletteViewStateObservable>)paletteViewState;
-(void)didChangeAnnotationSupport:(id)arg1 ;
-(void)setPaletteViewState:(id<PKPaletteViewStateObservable>)arg1 ;
-(NSLayoutConstraint *)toolPickerContainerViewWidthConstraint;
-(NSLayoutConstraint *)toolPickerContainerViewHeightConstraint;
-(NSLayoutConstraint *)compactToolPickerContainerViewWidthConstraint;
-(void)setToolPickerContainerView:(PKPaletteToolPickerContainerView *)arg1 ;
-(void)setToolPickerContainerViewWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setToolPickerContainerViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setCompactToolPickerContainerViewWidthConstraint:(NSLayoutConstraint *)arg1 ;
@end

