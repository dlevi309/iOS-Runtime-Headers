/*
* Generated on Thursday, January 14, 2021 at 2:27:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <ShareSheet/UIActivity.h>
#import <libobjc.A.dylib/PHAirPlayControllerRouteObserver.h>

@protocol PMAirplayActivityDelegate;
@class UIBarButtonItem, UIViewController, NSString;

@interface PMAirplayActivity : UIActivity <PHAirPlayControllerRouteObserver> {

	BOOL __routeAvailable;
	id<PMAirplayActivityDelegate> _delegate;
	UIBarButtonItem* _barButtonItem;
	UIViewController* _parentViewController;

}

@property (assign,nonatomic) BOOL _routeAvailable;                                        //@synthesize _routeAvailable=__routeAvailable - In the implementation block
@property (assign,nonatomic,__weak) id<PMAirplayActivityDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) UIBarButtonItem * barButtonItem;                      //@synthesize barButtonItem=_barButtonItem - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * parentViewController;              //@synthesize parentViewController=_parentViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIBarButtonItem *)barButtonItem;
-(id)activityType;
-(id)init;
-(id<PMAirplayActivityDelegate>)delegate;
-(UIViewController *)parentViewController;
-(void)performActivity;
-(void)_registerForAirPlayNotifications;
-(void)_unregisterForAirPlayNotifications;
-(void)setDelegate:(id<PMAirplayActivityDelegate>)arg1 ;
-(void)airPlayControllerRouteAvailabilityChanged:(id)arg1 ;
-(id)_systemImageName;
-(void)setParentViewController:(UIViewController *)arg1 ;
-(void)tearDownForCompletion;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(id)activityTitle;
-(void)setBarButtonItem:(UIBarButtonItem *)arg1 ;
-(void)dealloc;
-(void)set_routeAvailable:(BOOL)arg1 ;
-(BOOL)_routeAvailable;
@end

