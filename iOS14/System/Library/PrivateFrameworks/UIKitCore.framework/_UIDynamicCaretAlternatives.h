/*
* Generated on Thursday, January 14, 2021 at 2:20:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, NSArray;

@interface _UIDynamicCaretAlternatives : UIView {

	UIView* _verticalDivider;
	UIView* _horizontalDivider;
	NSArray* _alternativesButtons;

}

@property (nonatomic,retain) UIView * verticalDivider;                   //@synthesize verticalDivider=_verticalDivider - In the implementation block
@property (nonatomic,retain) UIView * horizontalDivider;                 //@synthesize horizontalDivider=_horizontalDivider - In the implementation block
@property (nonatomic,retain) NSArray * alternativesButtons;              //@synthesize alternativesButtons=_alternativesButtons - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setVerticalDivider:(UIView *)arg1 ;
-(UIView *)verticalDivider;
-(void)setHorizontalDivider:(UIView *)arg1 ;
-(UIView *)horizontalDivider;
-(void)setAlternativesButtons:(NSArray *)arg1 ;
-(NSArray *)alternativesButtons;
-(void)setButtonLabels:(id)arg1 ;
-(long long)indexOfButtonForPoint:(CGPoint)arg1 ;
-(void)highlightButtonAtIndex:(long long)arg1 ;
@end

