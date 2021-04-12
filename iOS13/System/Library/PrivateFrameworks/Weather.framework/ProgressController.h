/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
*/


@class NSTimer;

@interface ProgressController : NSObject {

	BOOL _progressShowing;
	int _loadingCount;
	NSTimer* _hideSpinnerTimer;

}
+(id)sharedProgressController;
-(void)suspend;
-(void)_showSpinner;
-(void)_setHideSpinnerTimer:(id)arg1 ;
-(void)_hideSpinner;
-(void)userScrolled;
-(void)setLoadingData:(BOOL)arg1 ;
@end

