/*
* Generated on Monday, March 1, 2021 at 2:34:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FMCoreUI.framework/FMCoreUI
*/

#import <FMCoreUI/FMCoreUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor, FMHorizontalRule;

@interface FMBorderedField : UIView {

	BOOL _isConfigured;
	UIColor* _borderColor;
	FMHorizontalRule* _topRule;
	FMHorizontalRule* _bottomRule;

}

@property (assign,nonatomic) BOOL isConfigured;                          //@synthesize isConfigured=_isConfigured - In the implementation block
@property (nonatomic,retain) FMHorizontalRule * topRule;                 //@synthesize topRule=_topRule - In the implementation block
@property (nonatomic,retain) FMHorizontalRule * bottomRule;              //@synthesize bottomRule=_bottomRule - In the implementation block
@property (nonatomic,retain) UIColor * borderColor;                      //@synthesize borderColor=_borderColor - In the implementation block
+(BOOL)requiresConstraintBasedLayout;
-(id)initWithCoder:(id)arg1 ;
-(void)setBorderColor:(UIColor *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)awakeFromNib;
-(UIColor *)borderColor;
-(void)prepareForInterfaceBuilder;
-(BOOL)isConfigured;
-(FMHorizontalRule *)bottomRule;
-(void)commonSetup;
-(FMHorizontalRule *)topRule;
-(void)setIsConfigured:(BOOL)arg1 ;
-(void)setTopRule:(FMHorizontalRule *)arg1 ;
-(void)setBottomRule:(FMHorizontalRule *)arg1 ;
@end

