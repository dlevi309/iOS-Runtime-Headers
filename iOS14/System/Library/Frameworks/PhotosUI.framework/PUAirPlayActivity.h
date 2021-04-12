/*
* Generated on Thursday, January 14, 2021 at 2:22:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUICore/PXActivity.h>
#import <libobjc.A.dylib/PHAirPlayControllerRouteObserver.h>

@class NSString;

@interface PUAirPlayActivity : PXActivity <PHAirPlayControllerRouteObserver>

@property (getter=isRouteAvailable,nonatomic,readonly) BOOL routeAvailable; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)activityType;
-(id)init;
-(void)performActivity;
-(void)_registerForAirPlayNotifications;
-(void)_unregisterForAirPlayNotifications;
-(void)airPlayControllerRouteAvailabilityChanged:(id)arg1 ;
-(id)_systemImageName;
-(void)tearDownForCompletion;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(id)activityTitle;
-(void)dealloc;
-(BOOL)isRouteAvailable;
@end

