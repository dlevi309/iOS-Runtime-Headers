/*
* Generated on Monday, March 1, 2021 at 2:34:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
*/


@class NSDate, UIActivityIndicatorView, UIViewPropertyAnimator;

@interface ICDocCamSpinner : NSObject {

	NSDate* _showDate;
	UIActivityIndicatorView* _activityIndicator;
	double _minimumDuration;
	UIViewPropertyAnimator* _animator;

}

@property (nonatomic,retain) NSDate * showDate;                                        //@synthesize showDate=_showDate - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * activityIndicator;              //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (assign,nonatomic) double minimumDuration;                                   //@synthesize minimumDuration=_minimumDuration - In the implementation block
@property (nonatomic,retain) UIViewPropertyAnimator * animator;                        //@synthesize animator=_animator - In the implementation block
-(void)show;
-(void)setAnimator:(UIViewPropertyAnimator *)arg1 ;
-(UIViewPropertyAnimator *)animator;
-(void)hide;
-(UIActivityIndicatorView *)activityIndicator;
-(void)setActivityIndicator:(UIActivityIndicatorView *)arg1 ;
-(NSDate *)showDate;
-(void)setShowDate:(NSDate *)arg1 ;
-(double)minimumDuration;
-(id)initWithView:(id)arg1 minimumDuration:(double)arg2 ;
-(void)setMinimumDuration:(double)arg1 ;
@end

