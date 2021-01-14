/*
* Generated on Thursday, January 14, 2021 at 2:22:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

@class NSString, UIView, UIImage, PXSurveyQuestionConfigurationHandlers;


@protocol PXSurveyQuestionConfiguration <NSObject>
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) UIView * contentView; 
@property (nonatomic,readonly) UIImage * contentImageForOneUp; 
@property (nonatomic,readonly) CGRect contentRectForOneUp; 
@property (nonatomic,retain) PXSurveyQuestionConfigurationHandlers * handlers; 
@required
-(PXSurveyQuestionConfigurationHandlers *)handlers;
-(void)setHandlers:(id)arg1;
-(void)layoutContentViewInRect:(CGRect)arg1;
-(UIImage *)contentImageForOneUp;
-(CGRect)contentRectForOneUp;
-(UIView *)contentView;
-(NSString *)title;

@end

