/*
* Generated on Thursday, January 14, 2021 at 2:22:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <UIKitCore/UINavigationController.h>
#import <libobjc.A.dylib/_PXFeedbackTapToRadarViewControllerDelegate.h>

@class NSArray, NSString, _PXFeedbackTapToRadarViewController;

@interface PXFeedbackTapToRadarViewController : UINavigationController <_PXFeedbackTapToRadarViewControllerDelegate> {

	BOOL _requestScreenshotPermission;
	/*^block*/id _fileRadarHandler;
	NSArray* _routes;
	NSString* _routesDescription;
	_PXFeedbackTapToRadarViewController* _feedbackViewController;

}

@property (nonatomic,retain) _PXFeedbackTapToRadarViewController * feedbackViewController;              //@synthesize feedbackViewController=_feedbackViewController - In the implementation block
@property (nonatomic,copy) id fileRadarHandler;                                                         //@synthesize fileRadarHandler=_fileRadarHandler - In the implementation block
@property (assign,nonatomic) BOOL requestScreenshotPermission;                                          //@synthesize requestScreenshotPermission=_requestScreenshotPermission - In the implementation block
@property (nonatomic,copy) NSArray * routes;                                                            //@synthesize routes=_routes - In the implementation block
@property (nonatomic,copy) NSString * routesDescription;                                                //@synthesize routesDescription=_routesDescription - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)routes;
-(id)init;
-(void)setRoutes:(NSArray *)arg1 ;
-(id)availableRoutes;
-(void)setFileRadarHandler:(id)arg1 ;
-(void)setRequestScreenshotPermission:(BOOL)arg1 ;
-(void)didSelectFileRadarButtonWithScreenshotAllowed:(BOOL)arg1 attachDiagnose:(BOOL)arg2 selectedRoute:(id)arg3 ;
-(id)fileRadarHandler;
-(BOOL)shouldRequestScreenshotPermission;
-(id)availableRoutesDescription;
-(BOOL)requestScreenshotPermission;
-(NSString *)routesDescription;
-(void)setRoutesDescription:(NSString *)arg1 ;
-(_PXFeedbackTapToRadarViewController *)feedbackViewController;
-(void)setFeedbackViewController:(_PXFeedbackTapToRadarViewController *)arg1 ;
@end

