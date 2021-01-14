/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXSurveyQuestionConfiguration.h>

@class UIView, NSString, PXSurveyQuestionConfigurationHandlers, UIImage;

@interface PXSurveyQuestionDefaultConfiguration : NSObject <PXSurveyQuestionConfiguration> {

	UIView* _placeholderView;
	NSString* _title;
	PXSurveyQuestionConfigurationHandlers* _handlers;

}

@property (nonatomic,readonly) NSString * title;                                            //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) UIView * contentView; 
@property (nonatomic,readonly) UIImage * contentImageForOneUp; 
@property (nonatomic,readonly) CGRect contentRectForOneUp; 
@property (nonatomic,retain) PXSurveyQuestionConfigurationHandlers * handlers;              //@synthesize handlers=_handlers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PXSurveyQuestionConfigurationHandlers *)handlers;
-(id)initWithTitle:(id)arg1 ;
-(void)setHandlers:(PXSurveyQuestionConfigurationHandlers *)arg1 ;
-(id)init;
-(void)layoutContentViewInRect:(CGRect)arg1 ;
-(UIImage *)contentImageForOneUp;
-(CGRect)contentRectForOneUp;
-(UIView *)contentView;
-(NSString *)title;
@end

