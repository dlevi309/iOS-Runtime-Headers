/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

@class CSPageViewController;


@protocol CSSpotlightPresenting <NSObject>
@property (assign,nonatomic,__weak) CSPageViewController * todayPageViewController; 
@required
-(void)launchSpotlightForSourceViewController:(id)arg1 interactive:(BOOL)arg2;
-(void)setTodayPageViewController:(id)arg1;
-(id)createSpotlightLegiblitySettingsProvider;
-(void)dismissSpotlightWithCompletion:(/*^block*/id)arg1;
-(void)launchSpotlightForSourceViewController:(id)arg1 interactive:(BOOL)arg2 completion:(/*^block*/id)arg3;
-(void)dismissSpotlight;
-(CSPageViewController *)todayPageViewController;

@end

