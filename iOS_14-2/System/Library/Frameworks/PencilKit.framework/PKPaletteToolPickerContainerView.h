/*
* Generated on Thursday, January 14, 2021 at 2:24:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PKEdgeLocatable.h>
#import <libobjc.A.dylib/PKPaletteViewSizeScaling.h>

@class PKPaletteToolPickerView, NSLayoutConstraint, NSString;

@interface PKPaletteToolPickerContainerView : UIView <PKEdgeLocatable, PKPaletteViewSizeScaling> {

	unsigned long long _edgeLocation;
	double _scalingFactor;
	PKPaletteToolPickerView* _toolPickerView;
	NSLayoutConstraint* _toolPickerViewTopConstraint;
	NSLayoutConstraint* _toolPickerViewBottomConstraint;
	NSLayoutConstraint* _toolPickerViewLeftConstraint;
	NSLayoutConstraint* _toolPickerViewRightConstraint;

}

@property (nonatomic,retain) NSLayoutConstraint * toolPickerViewTopConstraint;                 //@synthesize toolPickerViewTopConstraint=_toolPickerViewTopConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * toolPickerViewBottomConstraint;              //@synthesize toolPickerViewBottomConstraint=_toolPickerViewBottomConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * toolPickerViewLeftConstraint;                //@synthesize toolPickerViewLeftConstraint=_toolPickerViewLeftConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * toolPickerViewRightConstraint;               //@synthesize toolPickerViewRightConstraint=_toolPickerViewRightConstraint - In the implementation block
@property (nonatomic,readonly) PKPaletteToolPickerView * toolPickerView;                       //@synthesize toolPickerView=_toolPickerView - In the implementation block
@property (assign,nonatomic) unsigned long long edgeLocation;                                  //@synthesize edgeLocation=_edgeLocation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) double scalingFactor;                                             //@synthesize scalingFactor=_scalingFactor - In the implementation block
-(CGSize)intrinsicContentSize;
-(id)init;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(double)scalingFactor;
-(void)updateConstraints;
-(void)_updateUI;
-(void)setScalingFactor:(double)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(unsigned long long)edgeLocation;
-(void)setEdgeLocation:(unsigned long long)arg1 ;
-(PKPaletteToolPickerView *)toolPickerView;
-(NSLayoutConstraint *)toolPickerViewTopConstraint;
-(NSLayoutConstraint *)toolPickerViewBottomConstraint;
-(NSLayoutConstraint *)toolPickerViewLeftConstraint;
-(NSLayoutConstraint *)toolPickerViewRightConstraint;
-(void)setToolPickerViewTopConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setToolPickerViewBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setToolPickerViewLeftConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setToolPickerViewRightConstraint:(NSLayoutConstraint *)arg1 ;
@end

