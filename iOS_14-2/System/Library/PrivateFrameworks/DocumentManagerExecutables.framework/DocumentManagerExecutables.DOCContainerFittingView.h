/*
* Generated on Thursday, January 14, 2021 at 2:27:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(void)setContentOffsetFromTop:(double)arg1 ;
-(double)contentOffsetFromTop;
@end

