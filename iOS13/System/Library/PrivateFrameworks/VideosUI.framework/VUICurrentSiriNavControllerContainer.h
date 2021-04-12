/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@class UINavigationController;

@interface VUICurrentSiriNavControllerContainer : NSObject {

	UINavigationController* _currentSiriNavController;

}

@property (assign,nonatomic,__weak) UINavigationController * currentSiriNavController;              //@synthesize currentSiriNavController=_currentSiriNavController - In the implementation block
+(id)sharedInstance;
+(BOOL)isRunningInSiriPluggin;
-(id)init;
-(UINavigationController *)currentSiriNavController;
-(void)setCurrentSiriNavController:(UINavigationController *)arg1 ;
@end

