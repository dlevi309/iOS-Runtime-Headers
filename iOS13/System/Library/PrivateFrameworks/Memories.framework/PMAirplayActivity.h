/*
* Generated on Monday, March 1, 2021 at 2:35:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(id<PMAirplayActivityDelegate>)delegate;
-(void)setDelegate:(id<PMAirplayActivityDelegate>)arg1 ;
-(id)activityType;
-(UIViewController *)parentViewController;
-(UIBarButtonItem *)barButtonItem;
-(void)setBarButtonItem:(UIBarButtonItem *)arg1 ;
-(void)setParentViewController:(UIViewController *)arg1 ;
-(id)_systemImageName;
-(id)activityTitle;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(void)performActivity;
-(void)tearDownForCompletion;
-(void)airPlayControllerRouteAvailabilityChanged:(id)arg1 ;
-(void)_registerForAirPlayNotifications;
-(void)_unregisterForAirPlayNotifications;
-(void)set_routeAvailable:(BOOL)arg1 ;
-(BOOL)_routeAvailable;
@end

