/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
*/

#import <AppleMediaServicesUI/AMSUICommonViewController.h>
#import <libobjc.A.dylib/CRCameraReaderDelegate.h>
#import <libobjc.A.dylib/AMSUIWebPagePresenter.h>

@class AMSUIWebAppearance, CRCameraReader, AMSUIWebClientContext, AMSUIWebCameraReaderInfoView, AMSUIWebCameraReaderPageModel, NSDictionary, NSString;

@interface AMSUIWebCameraReaderViewController : AMSUICommonViewController <CRCameraReaderDelegate, AMSUIWebPagePresenter> {

	AMSUIWebAppearance* _appearance;
	CRCameraReader* _cameraController;
	AMSUIWebClientContext* _context;
	AMSUIWebCameraReaderInfoView* _infoView;
	AMSUIWebCameraReaderPageModel* _model;
	NSDictionary* _output;

}

@property (nonatomic,retain) AMSUIWebAppearance * appearance;                      //@synthesize appearance=_appearance - In the implementation block
@property (nonatomic,retain) CRCameraReader * cameraController;                    //@synthesize cameraController=_cameraController - In the implementation block
@property (nonatomic,retain) AMSUIWebClientContext * context;                      //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) AMSUIWebCameraReaderInfoView * infoView;              //@synthesize infoView=_infoView - In the implementation block
@property (nonatomic,retain) AMSUIWebCameraReaderPageModel * model;                //@synthesize model=_model - In the implementation block
@property (nonatomic,retain) NSDictionary * output;                                //@synthesize output=_output - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)cameraSupported;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setCameraController:(CRCameraReader *)arg1 ;
-(void)viewWillLayoutSubviews;
-(AMSUIWebCameraReaderPageModel *)model;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)initWithContext:(id)arg1 ;
-(void)setAppearance:(AMSUIWebAppearance *)arg1 ;
-(NSDictionary *)output;
-(CRCameraReader *)cameraController;
-(AMSUIWebClientContext *)context;
-(void)setModel:(AMSUIWebCameraReaderPageModel *)arg1 ;
-(void)setOutput:(NSDictionary *)arg1 ;
-(void)loadView;
-(AMSUIWebAppearance *)appearance;
-(void)cameraReaderDidCancel:(id)arg1 ;
-(AMSUIWebCameraReaderInfoView *)infoView;
-(void)cameraReaderDidEnd:(id)arg1 ;
-(void)cameraReader:(id)arg1 didFailWithError:(id)arg2 ;
-(void)cameraReader:(id)arg1 didRecognizeObjects:(id)arg2 ;
-(void)setContext:(AMSUIWebClientContext *)arg1 ;
-(void)setInfoView:(AMSUIWebCameraReaderInfoView *)arg1 ;
-(void)_applyAppearance;
-(void)_setupPageForCreditCard;
-(void)_layoutPageForCreditCard;
-(void)_handleCameraOutput:(id)arg1 error:(id)arg2 ;
-(id)_outputForCreditCardReaderObjects:(id)arg1 ;
-(void)willPresentPageModel:(id)arg1 appearance:(id)arg2 ;
@end

