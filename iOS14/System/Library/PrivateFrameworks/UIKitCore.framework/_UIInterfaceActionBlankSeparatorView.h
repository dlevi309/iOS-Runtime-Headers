/*
* Generated on Thursday, January 14, 2021 at 2:20:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIView.h>
#import <UIKit/UIInterfaceActionVisualSeparatorDisplaying.h>
#import <UIKit/UIInterfaceActionVisualSectionSeparatorDisplaying.h>

@class _UIInterfaceActionSeparatorConstraintController, NSString;

@interface _UIInterfaceActionBlankSeparatorView : UIView <UIInterfaceActionVisualSeparatorDisplaying, UIInterfaceActionVisualSectionSeparatorDisplaying> {

	double _horizontalLineLeadingInset;
	_UIInterfaceActionSeparatorConstraintController* _separatorViewConstraints;

}

@property (nonatomic,retain,readonly) _UIInterfaceActionSeparatorConstraintController * separatorViewConstraints;              //@synthesize separatorViewConstraints=_separatorViewConstraints - In the implementation block
@property (assign,nonatomic) double constantAxisDimension; 
@property (assign,nonatomic) double horizontalLineLeadingInset;                                                                //@synthesize horizontalLineLeadingInset=_horizontalLineLeadingInset - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(_UIInterfaceActionSeparatorConstraintController *)separatorViewConstraints;
-(void)setHorizontalLineLeadingInset:(double)arg1 ;
-(double)constantAxisDimension;
-(void)updateConstraints;
-(void)setConstantSizedAxis:(long long)arg1 ;
-(void)setConstantAxisDimension:(double)arg1 ;
-(double)horizontalLineLeadingInset;
@end

