/*
* Generated on Monday, March 1, 2021 at 2:33:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
*/

#import <SiriUI/SiriUI-Structs.h>
#import <SiriUI/SiriUIBaseTemplateView.h>

@interface SiriUIMessageContentTemplateView : SiriUIBaseTemplateView {

	id _textBalloonView;

}

@property (assign,nonatomic,__weak) id<SiriUIMessageContentTemplateModel> dataSource; 
-(id)initWithDataSource:(id)arg1 ;
-(void)layoutSubviews;
-(void)reloadData;
-(void)setSemanticContentAttribute:(long long)arg1 ;
-(double)desiredHeight;
-(CGSize)_textBalloonViewBoundingSize;
@end

