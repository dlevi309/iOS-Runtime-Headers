/*
* Generated on Monday, March 1, 2021 at 2:32:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PKEdgeLocatable.h>
#import <libobjc.A.dylib/PKPaletteViewSizeScaling.h>
#import <libobjc.A.dylib/PKPaletteViewStateObserving.h>

@protocol PKPaletteViewStateObservable;
@class PKPaletteToolPickerView, NSLayoutConstraint, NSString;

@interface PKPaletteToolPickerContainerView : UIView <PKEdgeLocatable, PKPaletteViewSizeScaling, PKPaletteViewStateObserving> {

	unsigned long long _edgeLocation;
	double _scalingFactor;
	PKPaletteToolPickerView* _toolPickerView;
	id<PKPaletteViewStateObservable> _paletteViewState;
	NSLayoutConstraint* _toolPickerViewTopConstraint;
	NSLayoutConstraint* _toolPickerViewBottomConstraint;
	NSLayoutConstraint* _toolPickerViewLeftConstraint;
	NSLayoutConstraint* _toolPickerViewRightConstraint;

}

@property (assign,nonatomic,__weak) id<PKPaletteViewStateObservable> paletteViewState;              //@synthesize paletteViewState=_paletteViewState - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * toolPickerViewTopConstraint;                      //@synthesize toolPickerViewTopConstraint=_toolPickerViewTopConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * toolPickerViewBottomConstraint;                   //@synthesize toolPickerViewBottomConstraint=_toolPickerViewBottomConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * toolPickerViewLeftConstraint;                     //@synthesize toolPickerViewLeftConstraint=_toolPickerViewLeftConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * toolPickerViewRightConstraint;                    //@synthesize toolPickerViewRightConstraint=_toolPickerViewRightConstraint - In the implementation block
@property (nonatomic,readonly) PKPaletteToolPickerView * toolPickerView;                            //@synthesize toolPickerView=_toolPickerView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) unsigned long long edgeLocation;                                       //@synthesize edgeLocation=_edgeLocation - In the implementation block
@property (assign,nonatomic) double scalingFactor;                                                  //@synthesize scalingFactor=_scalingFactor - In the implementation block
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)updateConstraints;
-(double)scalingFactor;
-(unsigned long long)edgeLocation;
-(void)setEdgeLocation:(unsigned long long)arg1 ;
-(id)initWithPaletteViewStateObservable:(id)arg1 ;
-(PKPaletteToolPickerView *)toolPickerView;
-(void)setScalingFactor:(double)arg1 ;
-(id<PKPaletteViewStateObservable>)paletteViewState;
-(void)didChangeAnnotationSupport:(id)arg1 ;
-(void)setPaletteViewState:(id<PKPaletteViewStateObservable>)arg1 ;
-(NSLayoutConstraint *)toolPickerViewTopConstraint;
-(NSLayoutConstraint *)toolPickerViewBottomConstraint;
-(NSLayoutConstraint *)toolPickerViewLeftConstraint;
-(NSLayoutConstraint *)toolPickerViewRightConstraint;
-(void)setToolPickerViewTopConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setToolPickerViewBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setToolPickerViewLeftConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setToolPickerViewRightConstraint:(NSLayoutConstraint *)arg1 ;
@end

