/*
* Generated on Monday, March 1, 2021 at 2:33:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
*/

#import <SiriUI/SiriUIBaseTemplateView.h>

@class UILabel;

@interface SiriUISettingTemplateView : SiriUIBaseTemplateView {

	UILabel* _textLabel;

}

@property (assign,nonatomic,__weak) id<SiriUISettingTemplateModel> dataSource; 
-(id)initWithDataSource:(id)arg1 ;
-(void)layoutSubviews;
-(void)reloadData;
-(double)desiredHeight;
@end

