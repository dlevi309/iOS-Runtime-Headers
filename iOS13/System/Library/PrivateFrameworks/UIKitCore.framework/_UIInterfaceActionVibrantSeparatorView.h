/*
* Generated on Monday, March 1, 2021 at 2:30:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIView.h>
#import <UIKit/UIInterfaceActionVisualSeparatorDisplaying.h>
#import <UIKit/UIInterfaceActionVisualSectionSeparatorDisplaying.h>

@class _UIInterfaceActionSeparatorConstraintController, NSString;

@interface _UIInterfaceActionVibrantSeparatorView : UIView <UIInterfaceActionVisualSeparatorDisplaying, UIInterfaceActionVisualSectionSeparatorDisplaying> {

	double _horizontalLineLeadingInset;
	_UIInterfaceActionSeparatorConstraintController* _separatorViewConstraints;

}

@property (nonatomic,retain,readonly) _UIInterfaceActionSeparatorConstraintController * separatorViewConstraints;              //@synthesize separatorViewConstraints=_separatorViewConstraints - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) double constantAxisDimension; 
@property (assign,nonatomic) double horizontalLineLeadingInset;                                                                //@synthesize horizontalLineLeadingInset=_horizontalLineLeadingInset - In the implementation block
-(id)init;
-(void)setHorizontalLineLeadingInset:(double)arg1 ;
-(void)setConstantAxisDimension:(double)arg1 ;
-(void)updateConstraints;
-(void)setConstantSizedAxis:(long long)arg1 ;
-(double)constantAxisDimension;
-(long long)constantSizedAxis;
-(void)_updateContentDirectionalInsets;
-(double)horizontalLineLeadingInset;
-(_UIInterfaceActionSeparatorConstraintController *)separatorViewConstraints;
-(void)_setupEffectView;
@end

