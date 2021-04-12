/*
* Generated on Monday, March 1, 2021 at 2:34:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DocumentManagerExecutables.framework/DocumentManagerExecutables
*/

#import <DocumentManagerExecutables/DocumentManagerExecutables-Structs.h>
#import <UIKitCore/UIView.h>

@interface DocumentManagerExecutables.DOCContainerFittingView : UIView {

	 containedViewController;
	 fittingSize;
	 preventContentOffsetUpdates;
	 contentOffsetFromTop;
	 observationContext;

}

@property (assign,nonatomic) double contentOffsetFromTop; 
@property (readonly,nonatomic) CGSize intrinsicContentSize; 
-(id)initWithCoder:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 ;
-(void)setContentOffsetFromTop:(double)arg1 ;
-(double)contentOffsetFromTop;
@end

