/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <TVMLKit/TVViewLayout.h>

@class VUITextLayout, VUIButtonLayout;

@interface VUIUpsellOfferTransactionViewLayout : TVViewLayout {

	VUITextLayout* _disclaimerTextLayout;
	VUIButtonLayout* _buttonLayout;

}

@property (nonatomic,readonly) VUITextLayout * disclaimerTextLayout;              //@synthesize disclaimerTextLayout=_disclaimerTextLayout - In the implementation block
@property (nonatomic,readonly) VUIButtonLayout * buttonLayout;                    //@synthesize buttonLayout=_buttonLayout - In the implementation block
+(id)layoutWithLayout:(id)arg1 element:(id)arg2 ;
-(id)init;
-(double)buttonHeight;
-(double)buttonSpacing;
-(void)_configureLayout;
-(VUITextLayout *)disclaimerTextLayout;
-(VUIButtonLayout *)buttonLayout;
-(UIEdgeInsets)safeAreaInsetsPhone;
-(UIEdgeInsets)safeAreaInsetsPad;
-(double)disclaimerBottomMargin;
@end

