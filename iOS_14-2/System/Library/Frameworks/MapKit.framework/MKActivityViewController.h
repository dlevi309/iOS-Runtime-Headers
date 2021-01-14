/*
* Generated on Thursday, January 14, 2021 at 2:22:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <ShareSheet/UIActivityViewController.h>
#import <UIKit/UIActivityViewControllerAirDropDelegate.h>

@protocol MKActivityViewControllerDelegate;
@class NSString;

@interface MKActivityViewController : UIActivityViewController <UIActivityViewControllerAirDropDelegate> {

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
-(id)initWithActivityItems:(id)arg1 ;
-(void)setActivityControllerDelegate:(id<MKActivityViewControllerDelegate>)arg1 ;
@end

