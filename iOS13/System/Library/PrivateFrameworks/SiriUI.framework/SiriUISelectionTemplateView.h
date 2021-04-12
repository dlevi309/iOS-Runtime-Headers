/*
* Generated on Monday, March 1, 2021 at 2:33:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
*/

#import <SiriUI/SiriUISettingTemplateView.h>

@class UIImageView, UIButton;

@interface SiriUISelectionTemplateView : SiriUISettingTemplateView {

	UIImageView* _checkmarkImageView;
	UIButton* _selectionButton;

}

@property (assign,nonatomic,__weak) id<SiriUISelectionTemplateModel> dataSource; 
-(id)initWithDataSource:(id)arg1 ;
-(void)layoutSubviews;
-(void)reloadData;
-(void)addTargetForSelectionEvent:(id)arg1 action:(SEL)arg2 ;
-(void)removeTargetForSelectionEvent:(id)arg1 action:(SEL)arg2 ;
@end

