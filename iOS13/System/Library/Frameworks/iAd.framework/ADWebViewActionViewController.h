/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setNotificationObserver:(id)arg1 ;
-(id)notificationObserver;
-(void)dismissView;
-(void)setHomeButtonHandler:(ADHomeButtonHandler *)arg1 ;
-(ADHomeButtonHandler *)homeButtonHandler;
-(void)dismissViewForHomeButton;
@end

