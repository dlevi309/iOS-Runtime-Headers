/*
* Generated on Thursday, January 14, 2021 at 2:27:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isConfigured;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIColor *)borderColor;
-(FMHorizontalRule *)bottomRule;
-(void)commonSetup;
-(void)prepareForInterfaceBuilder;
-(id)initWithCoder:(id)arg1 ;
-(void)awakeFromNib;
-(FMHorizontalRule *)topRule;
-(void)setBorderColor:(UIColor *)arg1 ;
-(void)setIsConfigured:(BOOL)arg1 ;
-(void)setTopRule:(FMHorizontalRule *)arg1 ;
-(void)setBottomRule:(FMHorizontalRule *)arg1 ;
@end

