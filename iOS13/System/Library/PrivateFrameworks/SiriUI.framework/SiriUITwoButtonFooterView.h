/*
* Generated on Monday, March 1, 2021 at 2:33:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)prepareForReuse;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(SiriUIContentButton *)leftButton;
-(SiriUIContentButton *)rightButton;
@end

