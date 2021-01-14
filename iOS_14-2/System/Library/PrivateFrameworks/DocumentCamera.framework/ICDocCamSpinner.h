/*
* Generated on Thursday, January 14, 2021 at 2:27:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UIViewPropertyAnimator *)animator;
-(void)setAnimator:(UIViewPropertyAnimator *)arg1 ;
-(UIActivityIndicatorView *)activityIndicator;
-(void)show;
-(void)setActivityIndicator:(UIActivityIndicatorView *)arg1 ;
-(void)hide;
-(double)minimumDuration;
-(void)setMinimumDuration:(double)arg1 ;
-(NSDate *)showDate;
-(void)setShowDate:(NSDate *)arg1 ;
-(id)initWithView:(id)arg1 minimumDuration:(double)arg2 ;
@end

