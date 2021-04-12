/*
* Generated on Thursday, January 14, 2021 at 2:20:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol UIInterfaceActionVisualSeparatorDisplayingUIInterfaceActionVisualSectionSeparatorDisplaying;
@class UIView, NSLayoutConstraint;

@interface _UIInterfaceActionSeparatorConstraintController : NSObject {

	double _constantAxisDimension;
	UIView*<UIInterfaceActionVisualSeparatorDisplaying>*<UIInterfaceActionVisualSectionSeparatorDisplaying> _separatorView;
	NSLayoutConstraint* _fixedHeightConstraint;
	NSLayoutConstraint* _fixedWidthConstraint;
	long long _constantSizedAxis;

}

@property (nonatomic,__weak,readonly) UIView*<UIInterfaceActionVisualSeparatorDisplaying>*<UIInterfaceActionVisualSectionSeparatorDisplaying> separatorView;              //@synthesize separatorView=_separatorView - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * fixedHeightConstraint;                                                                                                //@synthesize fixedHeightConstraint=_fixedHeightConstraint - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * fixedWidthConstraint;                                                                                                 //@synthesize fixedWidthConstraint=_fixedWidthConstraint - In the implementation block
@property (assign,nonatomic) long long constantSizedAxis;                                                                                                                 //@synthesize constantSizedAxis=_constantSizedAxis - In the implementation block
@property (assign,nonatomic) double constantAxisDimension;                                                                                                                //@synthesize constantAxisDimension=_constantAxisDimension - In the implementation block
-(UIView*<UIInterfaceActionVisualSeparatorDisplaying>*<UIInterfaceActionVisualSectionSeparatorDisplaying>)separatorView;
-(long long)constantSizedAxis;
-(double)constantAxisDimension;
-(NSLayoutConstraint *)fixedHeightConstraint;
-(void)setConstantSizedAxis:(long long)arg1 ;
-(BOOL)_isFixedWidth;
-(void)setConstantAxisDimension:(double)arg1 ;
-(void)separatorViewDidUpdateConstraints;
-(void)_updateConstantSizedConstraints;
-(id)initWithSeparatorView:(id)arg1 ;
-(NSLayoutConstraint *)fixedWidthConstraint;
@end

