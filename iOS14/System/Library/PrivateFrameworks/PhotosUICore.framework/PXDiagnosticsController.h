/*
* Generated on Thursday, January 14, 2021 at 2:22:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXSettingsKeyObserver.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UIWindow, NSArray, UITapGestureRecognizer, NSString;

@interface PXDiagnosticsController : NSObject <PXSettingsKeyObserver, UIGestureRecognizerDelegate> {

	UIWindow* __window;
	NSArray* __diagnosticsServicesClasses;
	UITapGestureRecognizer* __gestureRecognizer;

}

@property (nonatomic,readonly) UIWindow * _window;                                                                   //@synthesize _window=__window - In the implementation block
@property (nonatomic,readonly) NSArray * _diagnosticsServicesClasses;                                                //@synthesize _diagnosticsServicesClasses=__diagnosticsServicesClasses - In the implementation block
@property (setter=_setGestureRecognizer:,nonatomic,retain) UITapGestureRecognizer * _gestureRecognizer;              //@synthesize _gestureRecognizer=__gestureRecognizer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedController;
-(void)_handleGestureRecognizer:(id)arg1 ;
-(void)_executeService:(id)arg1 ;
-(UITapGestureRecognizer *)_gestureRecognizer;
-(BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2 ;
-(void)presentContextualDiagnostics;
-(void)_presentContextualViewControllerFromPoint:(CGPoint)arg1 inCoordinateSpace:(id)arg2 ;
-(id)consoleDescriptionForServices:(id)arg1 ;
-(void)_updateGestureRecognizer;
-(id)currentItemProviders;
-(void)setupOnInternalDevicesWithWindow:(id)arg1 ;
-(NSArray *)_diagnosticsServicesClasses;
-(void)_loadDiagnosticsServicesClasses;
-(void)_setGestureRecognizer:(id)arg1 ;
-(void)presentContextualViewControllerForServices:(id)arg1 ;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(id)servicesWithItemProviders:(id)arg1 ;
-(id)_currentRootViewController;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(UIWindow *)_window;
@end

