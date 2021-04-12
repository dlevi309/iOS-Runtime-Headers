/*
* Generated on Thursday, January 14, 2021 at 2:25:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
*/

#import <SafariServices/SFSafariViewController.h>

@class ADHomeButtonHandler;

@interface ADWebViewActionViewController : SFSafariViewController {

	ADHomeButtonHandler* _homeButtonHandler;
	id _notificationObserver;

}

@property (nonatomic,retain) ADHomeButtonHandler * homeButtonHandler;                         //@synthesize homeButtonHandler=_homeButtonHandler - In the implementation block
@property (nonatomic,retain) id notificationObserver;                                         //@synthesize notificationObserver=_notificationObserver - In the implementation block
@property (assign,nonatomic) id<ADWebViewActionViewControllerDelegate> delegate; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)dismissView;
-(void)setNotificationObserver:(id)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)notificationObserver;
-(void)dealloc;
-(void)setHomeButtonHandler:(ADHomeButtonHandler *)arg1 ;
-(ADHomeButtonHandler *)homeButtonHandler;
-(void)dismissViewForHomeButton;
@end

