/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXSurveyQuestionConfiguration.h>

@class MKMapView, NSString, PXSurveyQuestionConfigurationHandlers, CLLocation, UIView, UIImage;

@interface PXSurveyQuestionMapConfiguration : NSObject <PXSurveyQuestionConfiguration> {

	MKMapView* _mapView;
	NSString* _title;
	PXSurveyQuestionConfigurationHandlers* _handlers;
	CLLocation* _location;

}

@property (nonatomic,readonly) CLLocation * location;                                       //@synthesize location=_location - In the implementation block
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
-(void)setHandlers:(PXSurveyQuestionConfigurationHandlers *)arg1 ;
-(id)initWithTitle:(id)arg1 location:(id)arg2 ;
-(id)init;
-(CLLocation *)location;
-(void)layoutContentViewInRect:(CGRect)arg1 ;
-(UIImage *)contentImageForOneUp;
-(CGRect)contentRectForOneUp;
-(UIView *)contentView;
-(NSString *)title;
@end

