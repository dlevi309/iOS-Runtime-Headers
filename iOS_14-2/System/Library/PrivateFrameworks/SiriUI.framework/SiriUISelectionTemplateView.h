/*
* Generated on Thursday, January 14, 2021 at 2:24:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

