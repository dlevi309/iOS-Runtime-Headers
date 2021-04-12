/*
* Generated on Monday, March 1, 2021 at 2:34:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CRCameraReaderDelegate.h>
#import <libobjc.A.dylib/AMSUIWebPagePresenter.h>

@class CRCameraReader, AMSUIWebClientContext, AMSUIWebCameraReaderInfoView, AMSUIWebCameraReaderPageModel, NSDictionary, NSString;

@interface AMSUIWebCameraReaderViewController : UIViewController <CRCameraReaderDelegate, AMSUIWebPagePresenter> {

	CRCameraReader* _cameraController;
	AMSUIWebClientContext* _context;
	AMSUIWebCameraReaderInfoView* _infoView;
	AMSUIWebCameraReaderPageModel* _model;
	NSDictionary* _output;

}

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
-(AMSUIWebClientContext *)context;
-(AMSUIWebCameraReaderPageModel *)model;
-(void)setContext:(AMSUIWebClientContext *)arg1 ;
-(void)setModel:(AMSUIWebCameraReaderPageModel *)arg1 ;
-(id)initWithContext:(id)arg1 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(NSDictionary *)output;
-(void)setOutput:(NSDictionary *)arg1 ;
-(CRCameraReader *)cameraController;
-(void)setCameraController:(CRCameraReader *)arg1 ;
-(void)cameraReaderDidCancel:(id)arg1 ;
-(void)cameraReader:(id)arg1 didRecognizeObjects:(id)arg2 ;
-(void)cameraReaderDidEnd:(id)arg1 ;
-(void)cameraReader:(id)arg1 didFailWithError:(id)arg2 ;
-(AMSUIWebCameraReaderInfoView *)infoView;
-(void)setInfoView:(AMSUIWebCameraReaderInfoView *)arg1 ;
-(void)_applyAppearance;
-(void)_setupPageForCreditCard;
-(void)_layoutPageForCreditCard;
-(void)_handleCameraOutput:(id)arg1 error:(id)arg2 ;
-(id)_outputForCreditCardReaderObjects:(id)arg1 ;
-(void)applyPageModel:(id)arg1 ;
@end

