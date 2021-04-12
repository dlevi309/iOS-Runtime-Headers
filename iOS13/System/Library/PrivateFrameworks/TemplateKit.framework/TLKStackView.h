/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
*/

#import <AppSupportUI/NUIContainerStackView.h>

@interface TLKStackView : NUIContainerStackView {

	BOOL _flipsToVerticalAxisForAccessibilityContentSizes;
	BOOL _isForcedToBeVertical;

}

@property (assign,nonatomic) BOOL isForcedToBeVertical;                                         //@synthesize isForcedToBeVertical=_isForcedToBeVertical - In the implementation block
@property (assign,nonatomic) BOOL flipsToVerticalAxisForAccessibilityContentSizes;              //@synthesize flipsToVerticalAxisForAccessibilityContentSizes=_flipsToVerticalAxisForAccessibilityContentSizes - In the implementation block
-(void)setAlignment:(long long)arg1 ;
-(void)setAxis:(long long)arg1 ;
-(void)addArrangedSubview:(id)arg1 ;
-(void)setIsForcedToBeVertical:(BOOL)arg1 ;
-(BOOL)flipsToVerticalAxisForAccessibilityContentSizes;
-(BOOL)isForcedToBeVertical;
-(void)setFlipsToVerticalAxisForAccessibilityContentSizes:(BOOL)arg1 ;
@end

