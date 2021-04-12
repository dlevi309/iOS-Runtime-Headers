/*
* Generated on Thursday, January 14, 2021 at 2:22:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
*/

#import <OnBoardingKit/OnBoardingKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, NSArray;

@interface OBTableHeaderFooterView : UIView {

	UIView* _internalContentView;
	UIView* _hostedView;
	unsigned long long _layout;
	NSArray* _hostedConstraints;
	NSArray* _internalContentConstraints;
	UIEdgeInsets _internalContentPadding;
	UIEdgeInsets _hostedViewPadding;

}

@property (nonatomic,retain) UIView * internalContentView;                      //@synthesize internalContentView=_internalContentView - In the implementation block
@property (nonatomic,retain) UIView * hostedView;                               //@synthesize hostedView=_hostedView - In the implementation block
@property (assign,nonatomic) unsigned long long layout;                         //@synthesize layout=_layout - In the implementation block
@property (assign,nonatomic) UIEdgeInsets internalContentPadding;               //@synthesize internalContentPadding=_internalContentPadding - In the implementation block
@property (assign,nonatomic) UIEdgeInsets hostedViewPadding;                    //@synthesize hostedViewPadding=_hostedViewPadding - In the implementation block
@property (nonatomic,retain) NSArray * hostedConstraints;                       //@synthesize hostedConstraints=_hostedConstraints - In the implementation block
@property (nonatomic,retain) NSArray * internalContentConstraints;              //@synthesize internalContentConstraints=_internalContentConstraints - In the implementation block
-(id)initWithLayout:(unsigned long long)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)_applyLayout;
-(UIView *)internalContentView;
-(UIEdgeInsets)internalContentPadding;
-(UIEdgeInsets)hostedViewPadding;
-(void)_layoutContainerForTableHeader;
-(void)_layoutContainerForTableFooter;
-(NSArray *)internalContentConstraints;
-(NSArray *)hostedConstraints;
-(void)setHostedConstraints:(NSArray *)arg1 ;
-(void)setInternalContentConstraints:(NSArray *)arg1 ;
-(void)setInternalContentPadding:(UIEdgeInsets)arg1 ;
-(void)setHostedViewPadding:(UIEdgeInsets)arg1 ;
-(void)setInternalContentView:(UIView *)arg1 ;
-(void)setHostedView:(UIView *)arg1 ;
-(UIView *)hostedView;
-(void)setLayout:(unsigned long long)arg1 ;
-(unsigned long long)layout;
@end

