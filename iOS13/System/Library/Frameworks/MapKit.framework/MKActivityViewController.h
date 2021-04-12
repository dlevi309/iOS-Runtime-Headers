/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <ShareSheet/UIActivityViewController.h>
#import <UIKit/UIActivityViewControllerAirDropDelegate.h>

@protocol MKActivityViewControllerDelegate;
@class MKMapItem, NSString;

@interface MKActivityViewController : UIActivityViewController <UIActivityViewControllerAirDropDelegate> {

	MKMapItem* _mapItem;
	id<MKActivityViewControllerDelegate> _activityControllerDelegate;

}

@property (assign,nonatomic,__weak) id<MKActivityViewControllerDelegate> activityControllerDelegate;              //@synthesize activityControllerDelegate=_activityControllerDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(/*^block*/id)_completionHandler;
-(/*^block*/id)_activityHandler;
-(id)initWithMapItem:(id)arg1 contact:(id)arg2 applicationActivities:(id)arg3 activityProviderDelegate:(id)arg4 ;
-(id<MKActivityViewControllerDelegate>)activityControllerDelegate;
-(id)initWithShareItem:(id)arg1 ;
-(id)initWithMapItem:(id)arg1 contact:(id)arg2 applicationActivities:(id)arg3 ;
-(id)initWithSource:(id)arg1 destination:(id)arg2 composedRoute:(id)arg3 applicationActivities:(id)arg4 routeProviderDelegate:(id)arg5 ;
-(id)initWithMapItem:(id)arg1 muninViewState:(id)arg2 activityProviderDelegate:(id)arg3 ;
-(id)initWithActivityItems:(id)arg1 ;
-(void)setActivityControllerDelegate:(id<MKActivityViewControllerDelegate>)arg1 ;
@end

