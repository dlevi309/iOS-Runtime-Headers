/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <HealthToolbox/HealthToolbox-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor, UIView;

@interface _WDRoundedCornerView : UIView {

	UIColor* _backgroundColor;
	double _cornerRadius;
	NSDirectionalEdgeInsets _edgeInsets;
	UIView* _contentView;

}

@property (assign,nonatomic) NSDirectionalEdgeInsets edgeInsets; 
@property (nonatomic,readonly) UIView * contentView;                          //@synthesize contentView=_contentView - In the implementation block
-(UIView *)contentView;
-(id)initWithContentView:(id)arg1 ;
-(void)layoutSubviews;
-(void)setEdgeInsets:(NSDirectionalEdgeInsets)arg1 ;
-(NSDirectionalEdgeInsets)edgeInsets;
@end

