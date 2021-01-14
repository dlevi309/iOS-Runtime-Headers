/*
* Generated on Thursday, January 14, 2021 at 2:24:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
*/

#import <SiriUI/SiriUI-Structs.h>
#import <SiriUI/SiriUIReusableFooterView.h>

@class SiriUIKeyline, SiriUIContentButton;

@interface SiriUITwoButtonFooterView : SiriUIReusableFooterView {

	SiriUIKeyline* _verticalKeyline;
	SiriUIKeyline* _horizontalKeyline;
	SiriUIContentButton* _leftButton;
	SiriUIContentButton* _rightButton;

}

@property (nonatomic,readonly) SiriUIContentButton * leftButton;               //@synthesize leftButton=_leftButton - In the implementation block
@property (nonatomic,readonly) SiriUIContentButton * rightButton;              //@synthesize rightButton=_rightButton - In the implementation block
+(double)defaultHeight;
-(SiriUIContentButton *)leftButton;
-(id)initWithFrame:(CGRect)arg1 ;
-(SiriUIContentButton *)rightButton;
-(void)prepareForReuse;
-(void)layoutSubviews;
@end

