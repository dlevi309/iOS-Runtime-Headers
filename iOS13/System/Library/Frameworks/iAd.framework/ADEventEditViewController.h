/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
*/

#import <EventKitUI/EKEventEditViewController.h>

@class ADAdSpace, ADHomeButtonHandler;

@interface ADEventEditViewController : EKEventEditViewController {

	ADAdSpace* _adSpace;
	ADHomeButtonHandler* _homeButtonHandler;
	id _notificationObserver;

}

@property (nonatomic,retain) ADHomeButtonHandler * homeButtonHandler;              //@synthesize homeButtonHandler=_homeButtonHandler - In the implementation block
@property (nonatomic,retain) id notificationObserver;                              //@synthesize notificationObserver=_notificationObserver - In the implementation block
@property (nonatomic,retain) ADAdSpace * adSpace;                                  //@synthesize adSpace=_adSpace - In the implementation block
-(void)dealloc;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setNotificationObserver:(id)arg1 ;
-(id)notificationObserver;
-(ADAdSpace *)adSpace;
-(void)setAdSpace:(ADAdSpace *)arg1 ;
-(void)setHomeButtonHandler:(ADHomeButtonHandler *)arg1 ;
-(ADHomeButtonHandler *)homeButtonHandler;
-(void)cancelAndDismiss;
@end

