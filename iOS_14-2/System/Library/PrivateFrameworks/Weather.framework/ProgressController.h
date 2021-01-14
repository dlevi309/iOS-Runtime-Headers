/*
* Generated on Thursday, January 14, 2021 at 2:25:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
*/


@class NSTimer;

@interface ProgressController : NSObject {

	BOOL _progressShowing;
	int _loadingCount;
	NSTimer* _hideSpinnerTimer;

}
+(id)sharedProgressController;
-(void)setLoadingData:(BOOL)arg1 ;
-(void)userScrolled;
-(void)suspend;
-(void)_showSpinner;
-(void)_hideSpinner;
-(void)_setHideSpinnerTimer:(id)arg1 ;
@end

