/*
* Generated on Thursday, January 14, 2021 at 2:24:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
*/

#import <SiriUI/SiriUI-Structs.h>
#import <SiriUI/SiriUIBaseTemplateView.h>

@interface SiriUIMessageContentTemplateView : SiriUIBaseTemplateView {

	id _textBalloonView;

}

@property (assign,nonatomic,__weak) id<SiriUIMessageContentTemplateModel> dataSource; 
-(void)setSemanticContentAttribute:(long long)arg1 ;
-(id)initWithDataSource:(id)arg1 ;
-(double)desiredHeight;
-(void)layoutSubviews;
-(void)reloadData;
-(CGSize)_textBalloonViewBoundingSize;
@end

